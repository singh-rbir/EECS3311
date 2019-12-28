note
	description: ""
	author: "Rajanbir Singh"
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_SETUP_CHESS
inherit
	ETF_SETUP_CHESS_INTERFACE
create
	make
feature -- command

	setup_chess(c: INTEGER_32 ; row: INTEGER_32 ; col: INTEGER_32)
		require else
			setup_chess_precond(c, row, col)
		local
			s: STRING
    	do
    		-- error handling before everything else
    		if not (model.game_mode = 1) then
    			model.set_error ("Game already started")
    		elseif not (model.is_valid_slot (row, col)) then
    			model.set_error("(" + row.out + ", " + col.out + ") not a valid slot")
    		elseif not (model.is_vacant_slot(row, col)) then
    			model.set_error("Slot @ (" + row.out + ", " + col.out + ") already occupied")
    		else
				s := enum_items_inverse.at (c)
    			if attached s as v1 then
    				s := v1
    				model.setup_chess (s, row, col)
    			end

    			--model.setup_chess(c , row, col)

    		end

			-- perform some update on the model state
			model.default_update
			etf_cmd_container.on_change.notify ([Current])
    	end

end
