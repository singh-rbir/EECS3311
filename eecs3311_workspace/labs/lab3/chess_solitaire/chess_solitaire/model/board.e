note
	description: "Summary description for {BOARD}."
	author: "Rajanbir Singh"
	date: "$Nov 3, 2019$"
	revision: "$Revision$"

class
	BOARD

inherit
	ANY
		redefine
			out
		end

create make

feature -- attributes
	board: ARRAY[ARRAY[STRING]]

feature -- constructor
	make
		do
			create board.make_from_array(<<<<".", ".", ".", ".">>,
										   <<".", ".", ".", ".">>,
										   <<".", ".", ".", ".">>,
										   <<".", ".", ".", ".">>>>)
		end

feature -- operations (used by model class)

--	PREVIOUS VERISON OF PUT, STILL WORKS BUT THE NEWER VERSION IS BETTER
--	put(c: INTEGER; row: INTEGER; col: INTEGER)
--		local
--			s: STRING
--		do
--			create s.make_empty
--			s := return_chess_piece(c)
--			board[row][col] := s
--		end

	put(s: STRING; row: INTEGER; col: INTEGER)
		do
			board[row][col] := s
		end

	moves(row: INTEGER; col: INTEGER)
		local
			i: INTEGER
			piece: STRING
			possible_moves: ARRAY[TUPLE[i1: INTEGER; i2: INTEGER]]
		do
			piece := board[row][col]
			make
			create possible_moves.make_empty
			possible_moves := return_possible_moves(piece, row, col) -- private helper method

			from
				i := 1
			until
				i > possible_moves.count
			loop
				board[possible_moves[i].i1][possible_moves[i].i2] := "+"
				i := i + 1
			end

		end

	move_and_capture(r1: INTEGER ; c1: INTEGER ; r2: INTEGER ; c2: INTEGER)
		local
			piece: STRING
		do
			board[r2][c2] := board[r1][c1]
			board[r1][c1] := "."
		end



feature -- queries
	get(row: INTEGER; col: INTEGER) : STRING
		do
			Result := board[row][col]
		end

	return_chess_piece(i: INTEGER) : STRING
		local
			s: STRING
		do
			Result := " "
			if i = 1 then
				s := "K"
			elseif i = 2 then
				s := "Q"
			elseif i = 3 then
				s := "N"
			elseif i = 4 then
				s := "B"
			elseif i = 5 then
				s := "R"
			elseif i = 6 then
				s := "P"
			else
				s := "."
			end
			Result := s
		end

	is_valid_index(r: INTEGER; c: INTEGER): BOOLEAN
		do
			Result := (r > 0 and r <= 4) and (c > 0 and c <= 4)
		end

	return_possible_moves(piece: STRING; row: INTEGER; col: INTEGER) : ARRAY[TUPLE[INTEGER, INTEGER]]
		local
			i, j: INTEGER
			tuple: TUPLE[i1: INTEGER; i2: INTEGER]
			arr: ARRAY[TUPLE[INTEGER, INTEGER]]
		do
			create arr.make_empty -- the array that will store all possible indicies

			if piece ~ "K" then -- KING'S POSSIBLE MOVES

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


			elseif piece ~ "Q" then -- QUEEN'S POSSIBLE MOVES

				arr.make_from_array (return_diagonal_moves(row, col)) -- calls helper method (see below)
				from i := return_h_and_v_moves(row, col).lower
				until i > return_h_and_v_moves(row, col).count
				loop
					arr.force (return_h_and_v_moves (row, col).at (i), arr.count + 1)
					i := i + 1
				end

			elseif piece ~ "B" then -- BISHOP'S POSSIBLE MOVES
				arr.make_from_array (return_diagonal_moves(row, col)) -- calls helper method (see below)

			elseif piece ~ "R" then -- ROOK'S POSSIBLE MOVES
				arr.make_from_array (return_h_and_v_moves (row, col))

			elseif piece ~ "P" then -- PAWN'S POSSIBLE MOVES
				if is_valid_index(row - 1, col - 1) then
					arr.force ([row - 1, col - 1], arr.count + 1)
				else 	end
				if is_valid_index(row - 1, col + 1) then
					arr.force ([row - 1, col + 1], arr.count + 1)
				else 	end
			elseif piece ~ "N" then -- NIGHT'S POSSIBLE MOVES
				from i := -2
				until i > 2
				loop
					if i = -2 or i = 2 then
						if is_valid_index(row + 1, col + i)  then
							arr.force ([row + 1, col + i], arr.count + 1)
						else	end
						if is_valid_index(row - 1, col + i)  then
							arr.force ([row - 1, col + i], arr.count + 1)
						else	end
						if is_valid_index(row + i, col + 1)  then
							arr.force ([row + i, col + 1], arr.count + 1)
						else	end
						if is_valid_index(row + i, col - 1)  then
							arr.force ([row + i, col - 1], arr.count + 1)
						else	end
					end
					i := i + 1
				end

			else
				arr.make_filled ([1,1], 1, 15)
			end

			Result := arr
		end

	-- HELPER METHOD USED BY RETURN_POSSIBLE_MOVES
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

	-- HELPER METHOD USED BY RETURN_POSSIBLE_MOVES
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
		local
			i, j: INTEGER
			arr: ARRAY[TUPLE[INTEGER, INTEGER]]
			piece : STRING
		do
			piece := board[r1][c1]
			create arr.make_empty

			if piece ~ "K" then
				-- do nothing (no block can exist between 2 slots that have no space between them)
			elseif piece ~ "Q" then
				if r1 = r2 then
					arr := return_horizontal_slots (r1, c1, r2, c2)
				elseif c2 = c2 then
					arr := return_vertical_slots(r1, c1, r2, c2)
				else
					arr := return_diagonal_slots(r1, c1, r2, c2)
				end

			elseif piece ~ "B" then
				arr := return_diagonal_slots(r1, c1, r2, c2)

			elseif piece ~ "R" then
				if r1 = r2 then
					arr := return_horizontal_slots (r1, c1, r2, c2)
				else
					arr := return_vertical_slots(r1, c1, r2, c2)
				end

			elseif piece ~ "N" then
				arr := return_slots_for_knight (r1, c1, r2, c2)

			elseif piece ~ "P" then
				-- do nothing
			else	end

			Result := arr

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

	-- HELPER METHOD USED BY RETURN_SLOTS_BETWEEN
	-- Computes slots only for board[r1][c1] is a knight
		return_slots_for_knight(r1: INTEGER ; c1: INTEGER ; r2: INTEGER ; c2: INTEGER) : ARRAY[TUPLE[INTEGER, INTEGER]]
		local
			i, j, diff: INTEGER
			arr: ARRAY[TUPLE[INTEGER, INTEGER]]
		do
			create arr.make_empty
			if r1 < r2 then
				arr.force ([r1 + 1, c1], arr.count + 1)
				if c1 = c2 - 1 or c1 = c2 + 1 then
					arr.force ([r1 + 2, c1], arr.count + 1)
				elseif c1 = c2 - 2 then
					arr.force ([r1 + 1, c1 + 1], arr.count + 1)
				elseif c1 = c2 + 2 then
					arr.force ([r1 + 1, c1 - 1], arr.count + 1)
				else end
			elseif r1 > r2 then
				arr.force ([r1 - 1, c1], arr.count + 1)
				if c1 = c2 - 1 or c1 = c2 + 1 then
					arr.force ([r1 - 2, c1], arr.count + 1)
				elseif c1 = c2 - 2 then
					arr.force ([r1 - 1, c1 + 1], arr.count + 1)
				elseif c1 = c2 + 2 then
					arr.force ([r1 - 1, c1 - 1], arr.count + 1)
				else end
			else end
			Result := arr
		end


feature -- print method for board
	out: STRING
		local
			i, j: INTEGER
			s: STRING
		do
			create s.make_empty
			from
				i := 1
			until
				i > 4
			loop
				s.append ("  ")

				from j := 1
				until j > 4
				loop
					s.append (board[i][j])
					j := j + 1
				end

				if i < 4 then
					s.append ("%N")
				end
				i := i + 1
			end
			Result := s
		end

end


