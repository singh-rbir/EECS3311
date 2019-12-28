note
	description: "EECS3311 Lab Test 2"
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	BOOK[V1, V2, K]

inherit
	ITERABLE[TUPLE[V1, V2]]

create
	make

feature {NONE} -- Implementation attributes
	keys: ARRAY[K]
	values_1: LINKED_LIST[V1]
	values_2: LINKED_LIST[V2]

feature -- Iterable-related features
	-- Your Task
	new_cursor: ITERATION_CURSOR[TUPLE[V1, V2]]
		local
			rp_cursor: TUPLE_ITERATION_CURSOR[V1, V2]
		do
			create rp_cursor.make(values_1, values_2)
			Result := rp_cursor
		end

feature -- Public Attributes
	count: INTEGER -- You must keep this as an attribute.

feature -- Constructor
	make
			-- Initialize an empty book.
		do
			-- Your Task
			create keys.make_empty
			create values_1.make
			create values_2.make

			keys.compare_objects
		ensure
			empty_book: keys.count = 0 and values_1.count = 0 and values_2.count = 0 -- Your Task
			keys.object_comparison
		end

feature -- Commands

	add (v1: V1; v2: V2; k: K)
			-- Add values 'v1' and 'v2' associated with key 'k'.
		require
			non_existing_key:  -- Your Task
				across
					get_keys_array as i
				all
					i /~ k
				end
		do
			-- Your Task
			keys.force (k, keys.count + 1)
			values_1.extend (v1)
			values_2.extend (v2)
		end

feature -- Query

	get_keys (v1: V1; v2: V2): ITERABLE[K]
			-- Return an iterable collection of keys,
			-- each of which has the associated values 'v1' and 'v2'.
		local
			arr: ARRAY[K]
			i: INTEGER
		do
			-- Your Task
			create arr.make_empty

			from i := keys.lower
			until i > keys.count
			loop
				if ((values_1.at (i) ~ v1) and (values_2.at (i) ~ v2)) then
				 	arr.force (keys.at (i), arr.count + 1)
				else end
				i := i + 1
			end

			Result := arr
		end

	get_keys_array: ARRAY[K]
		do
			create Result.make_from_array(keys)

		end

invariant
	consistent_counts:
				keys.count = count
		and 	keys.count = values_1.count
		and 	keys.count = values_2.count
end
