note
	description: "Summary description for {QUEEN}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	QUEEN

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
			i, j: INTEGER
			arr: ARRAY[TUPLE[INTEGER, INTEGER]]
		do
			create arr.make_empty -- the array that will store all possible indicies

			arr.make_from_array (return_diagonal_moves(row, col)) -- calls helper method (see below)
			from i := return_h_and_v_moves(row, col).lower
			until i > return_h_and_v_moves(row, col).count
			loop
				arr.force (return_h_and_v_moves (row, col).at (i), arr.count + 1)
				i := i + 1
			end

			Result := arr
		end

	return_slots_between(r1: INTEGER ; c1: INTEGER ; r2: INTEGER ; c2: INTEGER) : ARRAY[TUPLE[INTEGER, INTEGER]]
		local
			arr: ARRAY[TUPLE[INTEGER, INTEGER]]
		do
			create arr.make_empty

			if r1 = r2 then
				arr := return_horizontal_slots (r1, c1, r2, c2)
			elseif c2 = c2 then
				arr := return_vertical_slots(r1, c1, r2, c2)
			else
				arr := return_diagonal_slots(r1, c1, r2, c2)
			end

			Result := arr
		end

feature
	out: STRING
			do
				create Result.make_empty
				Result := "Q"
			end

end
