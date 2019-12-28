note
	description: "A default business model."
	author: "Jackie Wang"
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_MODEL

inherit
	ANY
		redefine
			out
		end

create {ETF_MODEL_ACCESS}
	make

feature -- attributes
	user_mode: INTEGER -- 1: SETUP(add mode), 2: ASSINGMENT_INSTRUCTION_MODE: 3: ____
	mode_msg: STRING
	error: STRING

	-- values used for printing in assignment instruction mode
	current_class: STRING
	current_cmd: STRING
	current_attr: STRING

	list: ARRAY[CLASS_OBJ] -- stores all the classes of the user

feature {NONE} -- Initialization
	make
			-- Initialization for `Current'.
		do
			create s.make_empty
			w := 0

			user_mode := 1	-- general working mode of the tool

			-- initializing strings
			create error.make_empty
			create mode_msg.make_empty
			create current_class.make_empty
			create current_cmd.make_empty
			create current_attr.make_empty

			create list.make_empty
		end

feature -- model attributes
	s : STRING
	w : INTEGER

feature -- trivial operations
	default_update
			-- Perform update to the model state.
		do
			w := w + 1
		end

	reset
			-- Reset model state.
		do
			make
		end

	set_user_mode(j: INTEGER)
		do
			user_mode := j
		end

	set_error(m: STRING)
		do
			error := m
		end

	append_error(m: STRING)
		do
			error := error + m
		end

	reset_error_message
		do
			error.make_empty
		end

feature -- MODEL OPERATIONS

	addition
		require
			valid_user_mode: user_mode = 2
		do

		end

	add_call_chain(chain: ARRAY[STRING])
		require
			valid_user_mode: user_mode = 2
			call_chain_not_empty: not chain.is_empty
		do

		end

	add_class(cn: STRING)
		require
			valid_user_mode: user_mode = 1
			no_duplicate_class:
				not class_exists (cn)
		do
			list.force (create {CLASS_OBJ}.make (cn), list.count + 1)

		end

	add_command(cn: STRING ; fn: STRING ; ps: ARRAY[TUPLE[pn: STRING; ft: STRING]])
		require
			valid_user_mode: user_mode = 1
			no_duplicate_feature_exists:
				not feature_exists (cn, fn)
			parameters_names_dont_clash_with_features:
				not params_names_clash (ps)
			parametes_names_dont_duplicates:
				not params_names_duplicates(ps)
			valid_parameter_types:
				not params_types_invalid(ps)
		local
			i: INTEGER
			found: BOOLEAN
		do
			from i := list.lower
			until i > list.count or found
			loop
				if list.at (i).get_name ~ cn then
					list.at (i).add_command(fn, ps)
					found := true
				end
				i := i + 1
			end
		end

	add_attribute(cn: STRING ; fn: STRING ; ft: STRING)
		require
			valid_user_mode: user_mode = 1
			no_duplicate_feature_exists:
				not feature_exists (cn, fn)
			valid_return_type:
				not return_type_invalid(ft)
		do
			get_class (cn).add_attribute(fn, ft)
		end

	add_assignment_instruction(cn: STRING ; fn: STRING ; n: STRING)
		require
			valid_user_mode: user_mode = 1
			feature_exists_in_class: not get_class(cn).is_attribute(fn) and get_class (cn).has_feature (fn)
			feature_can_be_specified: not get_class(cn).is_attribute (fn)
		local
			i: INTEGER
		do
			set_user_mode(2) -- set to assingment instruction mode
			current_class := cn
			current_cmd := fn
			current_attr := n
		end

	add_query(cn: STRING ; fn: STRING ; ps: ARRAY[TUPLE[pn: STRING; pt: STRING]] ; rt: STRING)
		require
			class_should_exists:
				class_exists (cn)
			no_duplicate_feature_exists:
				not feature_exists (cn, fn)
			parameters_names_dont_clash_with_features:
				not params_names_clash (ps)
			parametes_names_dont_duplicates:
				not params_names_duplicates(ps)
			valid_parameter_types:
				not params_types_invalid(ps)
			valid_return_type:
				not return_type_invalid(rt)
		do
			get_class(cn).add_query(fn, ps, rt)
		end

	type_check
		do

		end

	bool_value(c: BOOLEAN)
		require
			valid_user_mode: user_mode = 2
		do
			user_mode := 1
		end


feature -- queries

	get_class(cn: STRING): CLASS_OBJ
		local
			i: INTEGER
			found: BOOLEAN
		do
			create Result.make ("")
			from i := list.lower
			until i > list.count or found
			loop
				if list.at (i).get_name ~ cn then
					Result := list.at (i)
					found := true
				end
				i := i + 1
			end
		end

	class_exists(cn: STRING): BOOLEAN
		local
			i: INTEGER
		do
			from i := list.lower
			until i > list.count or Result
			loop
				Result := (list.at (i).get_name ~ cn)
				i := i + 1
			end
		end

	feature_exists(cn: STRING; fn: STRING): BOOLEAN -- CHECKS FOR DUPLICATE CLASS ATTRIBUTES NAMES
		local
			i: INTEGER
		do
			from i := get_class(cn).attributes.lower
			until i > get_class(cn).attributes.count or Result
			loop
				if get_class(cn).attributes.at (i).name ~ fn then
					Result := true
				else end
				i := i + 1
			end
		end

	params_names_clash(ps: ARRAY[TUPLE[pn: STRING; pt: STRING]]): BOOLEAN
		do
			Result := not get_clashing_names(ps).is_empty
		end

	get_clashing_names(ps: ARRAY[TUPLE[pn: STRING; pt: STRING]]): ARRAY[STRING]
		local
			i, j: INTEGER
		do
			create Result.make_empty
			from i := ps.lower
			until i > ps.count
			loop
				from j := list.lower
				until j > list.count
				loop
					if (ps.at(i).pn ~ list.at (j).get_name) then
						Result.force(list.at (j).get_name, Result.count + 1)

					else end
					j := j + 1
				end
				if (ps.at (i).pn ~ "INTEGER") then
					Result.force("INTEGER", Result.count + 1)
				elseif (ps.at (i).pn ~ "BOOLEAN") then
					Result.force("BOOLEAN", Result.count + 1)
				else end
				i := i + 1
			end
		end

	params_names_duplicates(ps: ARRAY[TUPLE[pn: STRING; pt: STRING]]): BOOLEAN
		do
			Result := not get_duplicate_params_names(ps).is_empty
		end

	get_duplicate_params_names(ps: ARRAY[TUPLE[pn: STRING; pt: STRING]]): ARRAY[STRING]
		local
			i, j: INTEGER
		do
			create Result.make_empty
			from i := (ps.count // 2) + 1
			until i > ps.count
			loop
				from j := ps.lower
				until j > (ps.count // 2)
				loop
					if (ps.at (i).pn ~ ps.at (j).pn) then
						Result.force(ps.at (i).pn, Result.count + 1)
					else end
					j := j + 1
				end
				i := i + 1
			end
		end

	params_types_invalid(ps: ARRAY[TUPLE[pn: STRING; pt: STRING]]): BOOLEAN
		do
			Result := not get_invalid_params_types(ps).is_empty
		end

	get_invalid_params_types(ps: ARRAY[TUPLE[pn: STRING; pt: STRING]]): ARRAY[STRING]
		local
			i, j: INTEGER
			found: BOOLEAN
		do
			create Result.make_empty
			from i := ps.lower
			until i > ps.count
			loop
				from j := list.lower
				until j > list.count or found
				loop
					if (ps.at(i).pt ~ list.at (j).get_name) then
						found := True
					else end
					j := j + 1
				end
				if (not found and ps.at (i).pt /~ "INTEGER" and ps.at (i).pt /~ "BOOLEAN") then
					Result.force(ps.at (i).pt, Result.count + 1)
				else end
				i := i + 1
			end
		end

	return_type_invalid(ft: STRING): BOOLEAN
		local
			j: INTEGER
			found: BOOLEAN
		do
			from j := list.lower
			until j > list.count or found
			loop
				if (ft ~ list.at (j).get_name) or ft ~ "INTEGER" or ft ~ "BOOLEAN" then
					found := True
				else end
				j := j + 1
			end
			Result := not found
		end

--	get_invalid_return_type(ft: STRING): STRING
--		local
--			j: INTEGER
--			found: BOOLEAN
--		do
--			create Result.make_empty
--			from j := list.lower
--			until j > list.count or found
--			loop
--				if (ft ~ list.at (j).get_name) or ft ~ "INTEGER" or ft ~ "BOOLEAN" then
--					found := True
--					Result := ft
--				else end
--				j := j + 1
--			end
--		end


feature -- PRINT
	out : STRING
		local
			i: INTEGER
		do
			create Result.make_from_string ("  ")

			Result.append ("Status: ")
			if error.is_empty then
				Result.append ("OK." + "%N")
			else
				Result.append("Error (" + error + ").%N")
				reset_error_message
			end
			Result.append("  Number of classes being specified: " + list.count.out)

			if not (list.is_empty) then
				from i := list.lower
				until i > list.count
				loop
					Result.append("%N" + list.at (i).out)
					i := i + 1
				end

			else end

			if user_mode = 2 then
				Result.append("%N  Routine currently being implemented: " + "{" + current_class + "}." +
								current_cmd + "%N")
				Result.append("  Assignment being specified: " + current_attr + " := " + "?")
			end

		end

end




