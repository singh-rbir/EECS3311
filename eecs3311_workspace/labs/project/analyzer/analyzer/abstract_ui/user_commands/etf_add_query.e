note
	description: ""
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_ADD_QUERY
inherit
	ETF_ADD_QUERY_INTERFACE
create
	make
feature -- command
	add_query(cn: STRING ; fn: STRING ; ps: ARRAY[TUPLE[pn: STRING; pt: STRING]] ; rt: STRING)
		require else
			add_query_precond(cn, fn, ps, rt)
		local
			i: INTEGER
			arr: ARRAY[STRING]
    	do
    		if not model.class_exists (cn) then
    			model.set_error (cn + " is not an existing class name")
    		elseif model.feature_exists (cn, fn) then
    			model.set_error(fn + " is already an existing feature name in class " + cn)
    		elseif model.params_names_clash (ps) then
    			model.set_error ("Parameter names clash with existing classes: ")
    			arr := model.get_clashing_names (ps)
				from i := arr.lower
				until i > arr.count
				loop
					model.append_error(arr.at (i))
					if i < arr.count then
						model.append_error(", ")
					end
					i := i + 1
				end
			elseif model.params_names_duplicates (ps) then
    			model.set_error ("Duplicated parameter names: ")
    			arr := model.get_duplicate_params_names (ps)
				from i := arr.lower
				until i > arr.count
				loop
					model.append_error(arr.at (i))
					if i < arr.count then
						model.append_error(", ")
					end
					i := i + 1
				end
			elseif model.params_types_invalid (ps) then
    			model.set_error ("Parameter types do not refer to primitive types or existing classes: ")
    			arr := model.get_invalid_params_types (ps)
				from i := arr.lower
				until i > arr.count
				loop
					model.append_error(arr.at (i))
					if i < arr.count then
						model.append_error(", ")
					end
					i := i + 1
				end
			elseif model.return_type_invalid (rt) then
		    	model.set_error ("Return type does not refer to a primitive type or an existing class: " + rt)
    		else
    			model.add_query(cn, fn, ps, rt)
    		end
			-- perform some update on the model state
			model.default_update
			etf_cmd_container.on_change.notify ([Current])
    	end

end
