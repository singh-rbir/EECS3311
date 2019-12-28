note
	description: "Summary description for {KING}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	KING

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

			from i := row - 1
			until i > row + 1
			loop
				from j := col - 1
				until j > col + 1
				loop
					if is_valid_index(i, j) then
						arr.force ([i, j], arr.count + 1)
						j := j + 1
					else
						j := j + 1
					end
				end
				i := i + 1
			end
			Result := arr
		end

	return_slots_between(r1: INTEGER ; c1: INTEGER ; r2: INTEGER ; c2: INTEGER) : ARRAY[TUPLE[INTEGER, INTEGER]]
		local
			arr: ARRAY[TUPLE[INTEGER, INTEGER]]
		do
			create arr.make_empty

			-- do nothing (no block can exist between 2 slots that have no space between them)

			Result := arr
		end

feature
	out: STRING
			do
				create Result.make_empty
				Result := "K"
			end

invariant
	invariant_clause: True -- Your invariant here

end
