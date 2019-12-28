note
	description: ""
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_ADD_CLASS
inherit
	ETF_ADD_CLASS_INTERFACE
create
	make
feature -- command
	add_class(cn: STRING)
		require else
			add_class_precond(cn)
    	do
    		if (model.user_mode = 2) then
    			model.set_error ("An assignment instruction is currently being specified for routine " +
    							model.current_cmd + " in class " + model.current_class)
    		elseif not (model.user_mode = 1) then
				model.set_error ("An assignment instruction is not currently being specified")
			elseif model.class_exists (cn) then
				model.set_error (cn + " is already an existing class name")
			else
				model.add_class(cn)
    		end

			-- perform some update on the model state
			model.default_update
			etf_cmd_container.on_change.notify ([Current])
    	end

end
