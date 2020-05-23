note
	description: ""
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_TYPE_CHECK
inherit
	ETF_TYPE_CHECK_INTERFACE
create
	make
feature -- command
	type_check
    	do
    		if (model.user_mode = 2) then
    			model.set_error ("An assignment instruction is currently being specified for routine " +
    							model.current_cmd + " in class " + model.current_class)
    		else
    			model.type_check
    		end

			-- perform some update on the model state
			model.default_update
			etf_cmd_container.on_change.notify ([Current])
    	end

end
