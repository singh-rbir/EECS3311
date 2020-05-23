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
	board: ARRAY[ARRAY[CHESS]]
	c: CHESS

feature -- constructor
	make
		do
			create c.make
			create board.make_from_array(<<<<c, c, c, c>>,
										   <<c, c, c, c>>,
										   <<c, c, c, c>>,
										   <<c, c, c, c>>>>)
		end

feature -- operations (used by model class)

	put(s: CHESS; row: INTEGER; col: INTEGER)
		do
			board[row][col] := s
		end

	moves(row: INTEGER; col: INTEGER)
		local
			i: INTEGER
			piece: CHESS
			possible_moves: ARRAY[TUPLE[i1: INTEGER; i2: INTEGER]]
			plus: PLUS_SIGN
		do
			create plus.make
			piece := board[row][col]
			make -- clears the board (not moves_board)
			create possible_moves.make_empty

			possible_moves := piece.return_possible_moves(row, col)

			from
				i := 1
			until
				i > possible_moves.count
			loop
				board[possible_moves[i].i1][possible_moves[i].i2] := plus
				i := i + 1
			end

		end

	move_and_capture(r1: INTEGER ; c1: INTEGER ; r2: INTEGER ; c2: INTEGER)
		local
			piece: CHESS
		do
			create piece.make
			board[r2][c2] := board[r1][c1]
			board[r1][c1] := piece
		end



feature -- queries
	get(row: INTEGER; col: INTEGER) : CHESS
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

	is_valid_index(r: INTEGER; col: INTEGER): BOOLEAN
		do
			Result := (r > 0 and r <= 4) and (col > 0 and col <= 4)
		end


	-- RETURN THE SLOTS BETWEEN THE ANY TWO PIECES ON THE CHESS BOARD
	-- Note: This method assumes that the move is possible by the particular chess piece
	return_slots_between(r1: INTEGER ; c1: INTEGER ; r2: INTEGER ; c2: INTEGER) : ARRAY[TUPLE[INTEGER, INTEGER]]
		local
			arr: ARRAY[TUPLE[INTEGER, INTEGER]]
			piece : CHESS
		do
			piece := board[r1][c1]
			create arr.make_empty

			arr := piece.return_slots_between (r1, c1, r2, c2)

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
					s.append (board[i][j].out)
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


