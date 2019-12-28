note
	description: "A default business model."
	author: "Jackie Wang and Raj"
	date: "$Nov 3, 2019 (date of completion)$"
	revision: "$Nov 4, 2019$"

class
	ETF_MODEL

inherit
	ANY
		redefine
			out
		end

create {ETF_MODEL_ACCESS}
	make

feature -- implementation
	board: BOARD
	moves_board: BOARD -- a seperate chess board only for showing a piece's moves
	no_of_pieces: INTEGER

	game_mode: INTEGER -- 1: GAME_SETUP, 2: GAME_PROGRESS: 3: GAME_OVER
	game_mode_msg: STRING
	game_result_msg: STRING
	display_moves_mode: BOOLEAN
	error: STRING

feature {NONE} -- Initialization
	make
			-- Initialization for `Current'.
		do
			create s.make_empty
			i := 0

			create board.make
			create moves_board.make
			no_of_pieces := 0
			create error.make_empty

			set_game_mode(1) -- default value
			game_result_msg := ""
			create game_mode_msg.make_empty
			game_mode_msg := ret_game_mode_msg (game_mode) -- default game_mode_msg when the game hasn't begun

			display_moves_mode := False -- turn it on for a single test case only when the 'moves' method is called

		end

feature -- model attributes
	s : STRING
	i : INTEGER


feature -- model operations
	set_game_mode(j: INTEGER)
		do
			game_mode := j
		end

	set_error(m: STRING)
		do
			error := m
		end

	reset_error_message
		do
			error.make_empty
		end

	default_update
			-- Perform update to the model state.
		local
			j, k: INTEGER
			arr: ARRAY[TUPLE[i1: INTEGER; i2: INTEGER]]
		do
			i := i + 1

			if game_mode = 2 then -- ONLY PROCEED WITH THE FOLLOWING CODE IF GAME IS IN PROGRESSION

				create arr.make_empty
				if no_of_pieces = 2 then
					from j := 1
					until j > 4
					loop
						from k := 1
						until k > 4
						loop
							if not is_vacant_slot (j, k) then
								arr.force ([j, k], arr.count + 1)
							end
							k := k + 1
						end
						j := j + 1
					end
					if not is_move_possible (arr[1].i1, arr[1].i2, arr[2].i1, arr[2].i2) and
					   not is_move_possible (arr[2].i1, arr[2].i2, arr[1].i1, arr[1].i2) then
						game_result_msg := "You Lose!"
						set_game_mode (3) -- GAME OVER
					else 	end

				elseif no_of_pieces = 1 then
					game_result_msg := "You Win!"
					set_game_mode(3)
				else -- do nothing!
				end

			else end

		end

	reset
			-- Reset model state.
		do
			make
		end

	--- MODEL COMMANDS START HERE ----------------------------------------

	setup_chess(p: STRING; row: INTEGER; col: INTEGER)
		require
			valid_game_mode:
				game_mode = 1

			valid_board_slot:
				is_valid_slot(row, col)

			slot_not_already_occupied:
				board.get(row, col) ~ "."

		do
			board.put(p, row, col)
			no_of_pieces := no_of_pieces + 1
		end

	start_game
		require
			valid_game_mode:
				game_mode = 1
		do
			set_game_mode(2)
		end

	moves(row: INTEGER ; col: INTEGER)
		require
			valid_game_mode:
				game_mode = 2 -- game has to be in progress for this method to be called
			valid_board_slot:
				is_valid_slot(row, col)
			slots_occupied:
				not is_vacant_slot (row, col)
		do
			display_moves_mode := True
			moves_board.make
			moves_board := board.deep_twin

			moves_board.moves(row, col)
			moves_board.put (board.get (row, col), row, col) -- everything except that piece
		end

	move_and_capture(r1: INTEGER ; c1: INTEGER ; r2: INTEGER ; c2: INTEGER)
		require
			valid_game_mode:
				game_mode = 2
			valid_board_slot:
				is_valid_slot(r1, c1) and is_valid_slot(r2, c2)
			slots_occupied:
				(not is_vacant_slot (r1, c1)) and (not is_vacant_slot (r2, c2))
			move_is_posible:
				is_move_possible(r1, c1, r2, c2)
			move_not_blocked:
				is_block_exists(r1, c1, r2, c2) = False
		do
			board.move_and_capture(r1, c1, r2, c2)
			no_of_pieces := no_of_pieces - 1
		end

	reset_game
		require
			valid_game_mode:
				game_mode = 2 or game_mode = 3 -- game has to be in progress first, in order to be reset
		do
			make
		end

feature -- queries

	ret_game_mode_msg(j: INTEGER) : STRING -- returns the game_mode_msg corresponding to the appropriate game_mode
		do
			create Result.make_empty
			if j = 1 then
				Result := "Game being Setup..."
			elseif j = 2 then
				Result := "Game In Progress..."
			else
				Result := "Game Over: " + game_result_msg
			end
		end

	is_valid_slot(r: INTEGER; c: INTEGER): BOOLEAN
		do
			Result := (r > 0 and r <= 4) and (c > 0 and c <= 4)
		end

	is_vacant_slot(r: INTEGER; c: INTEGER): BOOLEAN
		do
			Result := (board.get (r, c) ~ ".")
		end

	is_move_possible(r1: INTEGER ; c1: INTEGER ; r2: INTEGER ; c2: INTEGER): BOOLEAN
		local
			arr: ARRAY[TUPLE[i1: INTEGER; i2: INTEGER]]
			j: INTEGER
		do
			arr := (board.return_possible_moves (board.get(r1, c1), r1, c1))
			from j := arr.lower
			until j > arr.count or Result
			loop
				Result := arr[j].i1 = r2 and arr[j].i2 = c2
				j := j + 1
			end
		end

	is_block_exists(r1: INTEGER ; c1: INTEGER ; r2: INTEGER ; c2: INTEGER): BOOLEAN
		local
			arr: ARRAY[TUPLE[i1: INTEGER; i2: INTEGER]]
			j: INTEGER
		do
			create arr.make_empty
			arr := board.return_slots_between(r1, c1, r2, c2)
			if is_move_possible (r1, c1, r2, c2) then
				if arr.is_empty then
					Result := False
				else
					from j := arr.lower
					until j > arr.count or Result
					loop
						--print("%N Slots: " + arr[j].i1.out + ", " + arr[j].i2.out + "%N")
						Result := not is_vacant_slot (arr[j].i1, arr[j].i2)
						j := j + 1
					end
				end
			else	end

		end


	out : STRING -- print method
		do
			create Result.make_from_string ("  ")

			Result.append ("# of chess pieces on board: " + no_of_pieces.out + "%N")
			if error.is_empty then
				Result.append ("  " + ret_game_mode_msg (game_mode) + "%N")
			else
				Result.append("  Error: ")
				Result.append (error + "%N")
				reset_error_message
			end

			if display_moves_mode then
				Result.append(moves_board.out)
				display_moves_mode := False
			else
				Result.append (board.out)
			end


		end

end




