note
	description: ""
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_NEW
inherit
	ETF_NEW_INTERFACE
create
	make
feature -- command
	new(id: STRING)
    	do
    		-- report an error message if the pre-condition of the method wasn't satisfied
    		if not (
				across model.accounts is cursor
				all cursor.id /~ id
				end
			) then
				model.set_error("Id " + id + " already exists")
			else
				model.new(id)
			end

			-- perform some update on the model state

			etf_cmd_container.on_change.notify ([Current])
    	end

end
