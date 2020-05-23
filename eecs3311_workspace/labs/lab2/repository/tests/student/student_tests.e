note
	description: "Tests created by student"
	author: "You"
	date: "$Date$"
	revision: "$Revision$"

class
	STUDENT_TESTS

inherit
	ES_TEST
		redefine
			setup, teardown
		end

create
	make

feature -- Add tests

	make
		do
			create repos.make
			check repos.count = 0 end

			add_boolean_case (agent t1_test_hashtable_system)
			add_boolean_case (agent t2_setup_testing)
			add_boolean_case (agent t3_testing_repos_check_in)
			add_boolean_case (agent t4_testing_repos_check_in_data1)
			add_boolean_case (agent t5_testing_repos_check_in_data2)
			add_boolean_case (agent t6_testing_repos_check_out_feature)
			add_boolean_case (agent t7_testing_repos_all_data_exists)
			add_boolean_case (agent t8_test_iterable)
			add_boolean_case (agent t9_test_another_cursor)
			add_boolean_case (agent t10_testing_repos_check_out_feature)
		end

feature -- Setup
	repos: REPOSITORY[STRING, CHARACTER, INTEGER]

	setup
			-- Initialize 'd' as a 4-data-sets repository.
			-- This feature is executed in the beginning of every test feature.
		do
			repos.check_in ('w', 1, "W")
			repos.check_in ('x', 2, "X")
			repos.check_in ('y', 3, "Y")
			repos.check_in ('z', 4, "Z")
		end

	teardown
			-- Recreate 'd' as an empty repository.
			-- This feature is executed at end of every test feature.
		do
			create repos.make
		end

feature -- Tests

	t1_test_hashtable_system: BOOLEAN
		local
			table: HASH_TABLE[STRING, INTEGER]
			values: LINKED_LIST[STRING]
		do
			comment ("t1: testing hashtable")

			create table.make (15) -- maximum capacity of 10 entries to begin with
			Result := table.count = 0 and table.is_empty
			check Result end

			table.extend ("v1", 1)
			table.extend ("v2", 2)
			table.extend ("v3", 3)
			Result := table.count = 3 and table[1] ~ "v1" and table[2] ~ "v2" and table[3] ~ "v3"
			check Result end

			create values.make

			check
				attached table[1] as v1  and attached table[2] as v2 and attached table[3] as v3
			then
				values.extend (v1)
				values.extend (v2)
				values.extend (v3)
			end

			Result := values.count = 3 and values[1] ~ "v1" and values[2] ~ "v2" and values[3] ~ "v3"
		end

	t2_setup_testing: BOOLEAN
		local
			tuples: LINKED_LIST[TUPLE[d1: CHARACTER; d2: INTEGER; k: STRING]]
		do
			comment ("t2: testing the repository setup")
			create tuples.make
			across
				repos is tuple
			loop
				tuples.extend (tuple)
			end

			Result :=
					repos.count = 4
				and tuples.count = 4
				and	tuples[1].d1 ~ 'w' and tuples[1].d2 ~ 1 and tuples[1].k ~ "W"
				and	tuples[2].d1 ~ 'x' and tuples[2].d2 ~ 2 and tuples[2].k ~ "X"
				and	tuples[3].d1 ~ 'y' and tuples[3].d2 ~ 3 and tuples[3].k ~ "Y"
				and	tuples[4].d1 ~ 'z' and tuples[4].d2 ~ 4 and tuples[4].k ~ "Z"
		end

	t3_testing_repos_check_in: BOOLEAN
		local
			keys: ARRAY[STRING]
		do
			comment ("t3: test_repos_check_in: keys_added")
			create keys.make_empty
			repos.check_in ('a', 1, "A")


			Result := repos.keys.at (5) ~ "A"
			check Result end
		end

	t4_testing_repos_check_in_data1: BOOLEAN
		local
			keys: ARRAY[STRING]
		do
			comment ("t4: test_repos_check_in: data item 1 added")
			create keys.make_empty
			repos.check_in ('a', 1, "A")


			Result := repos.keys.at (5) ~ "A" and repos.data_items_1[5] ~ 'a'
			check Result end
		end

	t5_testing_repos_check_in_data2: BOOLEAN
		local
			keys: ARRAY[STRING]
		do
			comment ("t5: test_repos_check_in: data item 2 added")
			create keys.make_empty
			repos.check_in ('a', 1, "A")


			Result := repos.keys.at (5) ~ "A" and repos.data_items_2.at("A") ~ 1
			check Result end
		end

	t6_testing_repos_check_out_feature: BOOLEAN
		do
			comment ("t6: test_repos_ou feature")
			repos.check_out ("W")

			Result := repos.keys.at (1) ~ "X"
			check Result end
		end

	t7_testing_repos_all_data_exists: BOOLEAN
		do
			comment ("t7: test_repos_all_data_exists_correctly")
			repos.check_in ('b', 1, "B")


			Result := repos.keys.at (5) ~ "B" and repos.data_items_2.at("B") ~ 1 and repos.data_items_1[5] ~ 'b'
			check Result end
		end

	t8_test_iterable: BOOLEAN
		local
			tuples: ARRAY[TUPLE[CHARACTER, INTEGER, STRING]]
		do
			comment ("t8: test repository iteration feature")
			create tuples.make_empty
			across
				repos is tuple
			loop
				tuples.force (tuple, tuples.count + 1)
			end
			Result :=
					 	repos.count = 4
				 and	 tuples.count = 4
				 and	tuples[1].item (1) = 'w' and tuples[1].item(2) = 1 and tuples[1].item(3) ~ "W"
				 and	tuples[2].item (1) = 'x' and tuples[2].item(2) = 2 and tuples[2].item(3) ~ "X"
				 and 	tuples[3].item (1) = 'y' and tuples[3].item(2) = 3 and tuples[3].item(3) ~ "Y"
				 and tuples[4].item (1) = 'z' and tuples[4].item(2) = 4 and tuples[4].item(3) ~ "Z"
		end

	t9_test_another_cursor: BOOLEAN
		local
			ric: DATA_SET_ITERATION_CURSOR[CHARACTER, INTEGER, STRING]
			entries: ARRAY[DATA_SET[CHARACTER, INTEGER, STRING]]
		do
			comment ("t9: testing the alternative returned cursor in repository")
			create entries.make_empty
			check attached {DATA_SET_ITERATION_CURSOR[CHARACTER, INTEGER, STRING]} repos.another_cursor as nc then
				ric := nc
			end
			from
			until
				ric.after
			loop
				entries.force (ric.item, entries.count + 1)
				ric.forth
			end
			Result :=
						entries.count = 4
						-- Note that the right-hand side of ~ are anonymous objects.
				 and	entries [1] ~ (create {DATA_SET[CHARACTER, INTEGER, STRING]}.make ('w', 1, "W"))
				 and	entries [2] ~ (create {DATA_SET[CHARACTER, INTEGER, STRING]}.make ('x', 2, "X"))
				 and	entries [3] ~ (create {DATA_SET[CHARACTER, INTEGER, STRING]}.make ('y', 3, "Y"))
				 and	entries [4] ~ (create {DATA_SET[CHARACTER, INTEGER, STRING]}.make ('z', 4, "Z"))
		end
	t10_testing_repos_check_out_feature: BOOLEAN
		local
			i: INTEGER
		do
			comment ("t10: test_repos_matching_keys")
			repos.check_out ("W")
			i := 4

			Result := repos.keys.at (1) ~ "X"
			check Result end

			Result := i = 4
			check Result end
		end
end
