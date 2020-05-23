note
	description: ""
	author: "Rajanbir Singh"
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_MOVE_AND_CAPTURE
inherit
	ETF_MOVE_AND_CAPTURE_INTERFACE
create
	make
feature -- command
	move_and_capture(r1: INTEGER_32 ; c1: INTEGER_32 ; r2: INTEGER_32 ; c2: INTEGER_32)
		local
			arr: ARRAY[TUPLE[i1: INTEGER; i2: INTEGER]]
			i: INTEGER
    	do
    		-- error handling
    		if (model.game_mode < 2) then
				model.set_error ("Game not yet started")
			elseif (model.game_mode > 2) then
				model.set_error ("Game already over")
			elseif not (model.is_valid_slot (r1, c1)) then
				model.set_error("(" + r1.out + ", " + c1.out + ") not a valid slot")
			elseif not (model.is_valid_slot (r2, c2)) then
				model.set_error("(" + r2.out + ", " + c2.out + ") not a valid slot")
			elseif not ((not model.is_vacant_slot (r1, c1))) then
				model.set_error ("Slot @ " + "(" + r1.out + ", " + c1.out + ") not occupied")
			elseif not ((not model.is_vacant_slot (r2, c2))) then
				model.set_error ("Slot @ " + "(" + r2.out + ", " + c2.out + ") not occupied")
			elseif not (model.is_move_possible (r1, c1, r2, c2)) then
				model.set_error ("Invalid move of " + model.board.get (r1, c1).out + " from " +
								 "(" + r1.out + ", " + c1.out + ") to " + "(" + r2.out + ", " + c2.out + ")")
			elseif (model.is_block_exists(r1, c1, r2, c2) = True) then
				model.set_error ("Block exists between " + "(" + r1.out + ", " + c1.out + ") and " +
								 "(" + r2.out + ", " + c2.out + ")")
			else
				model.move_and_capture (r1, c1, r2, c2)
    		end

			-- perform some update on the model state
			model.default_update
			etf_cmd_container.on_change.notify ([Current])
    	end

end
