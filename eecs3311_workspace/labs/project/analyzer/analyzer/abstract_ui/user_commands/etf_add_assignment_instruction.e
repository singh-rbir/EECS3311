note
	description: ""
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_ADD_ASSIGNMENT_INSTRUCTION
inherit
	ETF_ADD_ASSIGNMENT_INSTRUCTION_INTERFACE
create
	make
feature -- command
	add_assignment_instruction(cn: STRING ; fn: STRING ; n: STRING)
		require else
			add_assignment_instruction_precond(cn, fn, n)
    	do
    		if (model.user_mode = 2) then
    			model.set_error ("An assignment instruction is currently being specified for routine " +
    							model.current_cmd + " in class " + model.current_class)
    		elseif not (model.user_mode = 1) then
				model.set_error ("An assignment instruction is not currently being specified")
			elseif not model.class_exists (cn) then
    			model.set_error (cn + " is not an existing class name")
    		elseif (not model.get_class (cn).is_attribute (fn) and not model.get_class (cn).has_feature (fn)) then
    			model.set_error (fn + " is not an existing feature name in class " + cn)
    		elseif (model.get_class (cn).is_attribute (fn)) then
    			model.set_error ("Attribute " + fn + " in class " + cn + " cannot be specified with an implementation")
			else
				model.add_assignment_instruction(cn, fn, n)
    		end

			-- perform some update on the model state
			model.default_update
			etf_cmd_container.on_change.notify ([Current])
    	end

end
