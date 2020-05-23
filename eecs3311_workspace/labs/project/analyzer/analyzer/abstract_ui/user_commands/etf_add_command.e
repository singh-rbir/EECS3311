note
	description: ""
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_ADD_COMMAND
inherit
	ETF_ADD_COMMAND_INTERFACE
create
	make
feature -- command
	add_command(cn: STRING ; fn: STRING ; ps: ARRAY[TUPLE[pn: STRING; ft: STRING]])
		require else
			add_command_precond(cn, fn, ps)
		local
			i: INTEGER
			arr: ARRAY[STRING]
    	do
    		create arr.make_empty
    		if (model.user_mode = 2) then
    			model.set_error ("An assignment instruction is currently being specified for routine " +
    							model.current_cmd + " in class " + model.current_class)
    		elseif not (model.user_mode = 1) then
				model.set_error ("An assignment instruction is not currently being specified")
			elseif not model.class_exists (cn) then
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
			else
				model.add_command(cn, fn, ps)
    		end

			-- perform some update on the model state
			model.default_update
			etf_cmd_container.on_change.notify ([Current])
    	end

end
