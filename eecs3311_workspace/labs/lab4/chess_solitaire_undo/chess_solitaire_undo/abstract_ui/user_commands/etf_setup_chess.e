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
			piece: CHESS
			king: KING; queen: QUEEN; knight: KNIGHT; bishop: BISHOP; rook: ROOK; pawn: PAWN
    	do
    		create piece.make
    		-- error handling before everything else
    		if not (model.game_mode = 1) then
    			model.set_error ("Game already started")
    		elseif not (model.is_valid_slot (row, col)) then
    			model.set_error("(" + row.out + ", " + col.out + ") not a valid slot")
    		elseif not (model.is_vacant_slot(row, col)) then
    			model.set_error("Slot @ (" + row.out + ", " + col.out + ") already occupied")
    		else
    			if c ~ K then
    				create {KING}piece.make
    			elseif c ~ Q then
    				create {QUEEN}piece.make
    			elseif c ~ N then
    				create {KNIGHT}piece.make
    			elseif c ~ B then
    				create {BISHOP}piece.make
    			elseif c ~ R then
    				create {ROOK}piece.make
    			elseif c ~ P then
    				create {PAWN}piece.make
    			end

				--print("%N chess piece computed: " + piece.out + "%N")
		
				if attached piece as v1 then
    				piece := v1
    				model.setup_chess (piece, row, col)
    			end
    		end

			-- perform some update on the model state
			model.default_update
			etf_cmd_container.on_change.notify ([Current])
    	end

end
