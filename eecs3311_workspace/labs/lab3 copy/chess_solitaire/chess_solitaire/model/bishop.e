note
	description: "Summary description for {BISHOP}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	BISHOP

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

			arr.make_from_array (return_diagonal_moves(row, col)) -- calls helper method

			Result := arr
		end

	return_slots_between(r1: INTEGER ; c1: INTEGER ; r2: INTEGER ; c2: INTEGER) : ARRAY[TUPLE[INTEGER, INTEGER]]
		local
			arr: ARRAY[TUPLE[INTEGER, INTEGER]]
		do
			create arr.make_empty

			arr := return_diagonal_slots(r1, c1, r2, c2)

			Result := arr
		end

feature
	out: STRING
			do
				create Result.make_empty
				Result := "B"
			end

end
