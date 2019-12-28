note
	description: "Summary description for {CHESS}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	CHESS

inherit
	ANY
		redefine
			out
		end

create
	make

feature
	make
		do

		end

feature -- methods
	return_possible_moves(row: INTEGER; col: INTEGER) : ARRAY[TUPLE[INTEGER, INTEGER]]
		do
			create Result.make_empty
		end
	-- HELPER METHOD USED BY RETURN_POSSIBLE_MOVES in the subcalsses
	-- Computes diagonal moves possible for a chess piece
	return_diagonal_moves(row: INTEGER; col: INTEGER): ARRAY[TUPLE[INTEGER, INTEGER]]
		local
			i, j: INTEGER
			arr: ARRAY[TUPLE[INTEGER, INTEGER]]
		do
			create arr.make_empty

			from i := -3 -- this loop computes the diagonal moves only
			until i > 3
			loop
				if is_valid_index (row + i, col + i) then
					arr.force ([row + i, col + i], arr.count + 1)
				else 	end
				if is_valid_index (row - i, col + i) then
					arr.force ([row - i, col + i], arr.count + 1)
				else 	end
				i := i + 1
			end
			Result := arr
		end

	-- HELPER METHOD USED BY RETURN_POSSIBLE_MOVES in the subclasses
	-- Computes horizontal and vertical moves possible for a chess piece
	return_h_and_v_moves(row: INTEGER; col: INTEGER) : ARRAY[TUPLE[INTEGER, INTEGER]]
		local
			i, j: INTEGER
			arr: ARRAY[TUPLE[INTEGER, INTEGER]]
		do
			create arr.make_empty
			from i := -3 -- this loop computes the horizontal and vertical moves only
			until i > 3
			loop
				if is_valid_index(row + i, col) then
					arr.force ([row + i, col], arr.count + 1)
				else	end
				if is_valid_index(row, col + i) then
					arr.force ([row, col + i], arr.count + 1)
				else	end
				i := i + 1
			end
			Result := arr
		end

	-- RETURN THE SLOTS BETWEEN THE ANY TWO PIECES ON THE CHESS BOARD
	-- Note: This method assumes that the move is possible by the particular chess piece
	return_slots_between(r1: INTEGER ; c1: INTEGER ; r2: INTEGER ; c2: INTEGER) : ARRAY[TUPLE[INTEGER, INTEGER]]
		do
			create Result.make_empty
		end

	-- HELPER METHOD USED BY RETURN_SLOTS_BETWEEN
	-- Computes horizontal slots only
	return_horizontal_slots(r1: INTEGER ; c1: INTEGER ; r2: INTEGER ; c2: INTEGER) : ARRAY[TUPLE[INTEGER, INTEGER]]
		local
			i, j, diff: INTEGER
			arr: ARRAY[TUPLE[INTEGER, INTEGER]]
		do
			create arr.make_empty
			diff := c1 - c2
			if diff < 0 then diff := -diff else	end -- absolute value
			from i := 1
			until i > diff - 1
			loop
				if c1 < c2 then
					arr.force([r1, c1 + i], arr.count + 1)
				else
					arr.force([r1, c1 - i], arr.count + 1)
				end
				i := i + 1
			end

			Result := arr
		end

	-- HELPER METHOD USED BY RETURN_SLOTS_BETWEEN
	-- Computes vertical slots only
	return_vertical_slots(r1: INTEGER ; c1: INTEGER ; r2: INTEGER ; c2: INTEGER) : ARRAY[TUPLE[INTEGER, INTEGER]]
		local
			i, j, diff: INTEGER
			arr: ARRAY[TUPLE[INTEGER, INTEGER]]
		do
			create arr.make_empty
			diff := r1 - r2
			if diff < 0 then diff := -diff else	end
			from i := 1
			until i > diff - 1
			loop
				if r1 < r2 then
					arr.force([r1 + i, c1], arr.count + 1)
				else
					arr.force([r1 - i, c2], arr.count + 1)
				end
				i := i + 1
			end

			Result := arr
		end

	-- HELPER METHOD USED BY RETURN_SLOTS_BETWEEN
	-- Computes diagonal slots only
	return_diagonal_slots(r1: INTEGER ; c1: INTEGER ; r2: INTEGER ; c2: INTEGER) : ARRAY[TUPLE[INTEGER, INTEGER]]
		local
			i, j, diff: INTEGER
			arr: ARRAY[TUPLE[INTEGER, INTEGER]]
		do
			create arr.make_empty
			diff := r1 - r2
			if diff < 0 then diff := -diff else	end

			from i := 1
			until i > diff - 1
			loop
				if r1 < r2 and c1 < c2 then
					arr.force([r1 + i, c1 + i], arr.count + 1)
				elseif r1 < r2 and c1 > c2 then
					arr.force([r1 + i, c1 - i], arr.count + 1)
				elseif r1 > r2 and c1 < c2 then
					arr.force([r1 - i, c1 + i], arr.count + 1)
				elseif r1 > r2 and c1 > c2 then
					arr.force([r1 - i, c1 - i], arr.count + 1)
				else end
				i := i + 1
			end

			Result := arr
		end

feature -- queries
	is_valid_index(r: INTEGER; col: INTEGER): BOOLEAN
		do
			Result := (r > 0 and r <= 4) and (col > 0 and col <= 4)
		end

feature
	out: STRING
		do
			create Result.make_empty
			Result := "."
		end

end
