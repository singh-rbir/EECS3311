note
	description: ""
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_BOOL_VALUE
inherit
	ETF_BOOL_VALUE_INTERFACE
create
	make
feature -- command
	bool_value(c: BOOLEAN)
    	do
    		model.bool_value(c)

			-- perform some update on the model state
			model.default_update
			etf_cmd_container.on_change.notify ([Current])
    	end

end
