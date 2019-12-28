note
	description: "Summary description for {PAWN}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	PAWN

inherit
	CHESS
		redefine
			out, return_possible_moves, return_slots_between
		end

create
	make

feature -- method implementations
	return_possible_moves(row: INTEGER; col: INTEGER) : ARRAY[TUPLE[INTEGER, INTEGER]]
		local
			arr: ARRAY[TUPLE[INTEGER, INTEGER]]
		do
			create arr.make_empty -- the array that will store all possible indicies

			if is_valid_index(row - 1, col - 1) then
				arr.force ([row - 1, col - 1], arr.count + 1)
			else 	end
			if is_valid_index(row - 1, col + 1) then
				arr.force ([row - 1, col + 1], arr.count + 1)
			else 	end

			Result := arr
		end

	return_slots_between(r1: INTEGER ; c1: INTEGER ; r2: INTEGER ; c2: INTEGER) : ARRAY[TUPLE[INTEGER, INTEGER]]
		local
			arr: ARRAY[TUPLE[INTEGER, INTEGER]]
		do
			create arr.make_empty

			-- do nothing

			Result := arr
		end

feature
	out: STRING
			do
				create Result.make_empty
				Result := "P"
			end


end
