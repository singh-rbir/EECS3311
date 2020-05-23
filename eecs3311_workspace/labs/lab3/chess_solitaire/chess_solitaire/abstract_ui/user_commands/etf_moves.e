note
	description: ""
	author: "Rajanbir Singh"
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_MOVES
inherit
	ETF_MOVES_INTERFACE
create
	make
feature -- command
	moves(row: INTEGER_32 ; col: INTEGER_32)
    	do
    		if (model.game_mode < 2) then
    			model.set_error ("Game not yet started")
    		elseif (model.game_mode > 2) then
				model.set_error ("Game already over")
    		elseif not (model.is_valid_slot (row, col)) then
				model.set_error("(" + row.out + ", " + col.out + ") not a valid slot")
			elseif not ((not model.is_vacant_slot (row, col))) then
				model.set_error ("Slot @ " + "(" + row.out + ", " + col.out + ") not occupied")
    		else
    			model.moves (row, col)
    		end

			-- perform some update on the model state
			model.default_update
			etf_cmd_container.on_change.notify ([Current])
    	end

end
