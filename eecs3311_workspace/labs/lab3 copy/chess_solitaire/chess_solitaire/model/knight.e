note
	description: "Summary description for {KNIGHT}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	KNIGHT

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

			Result := arr
		end

	return_slots_between(r1: INTEGER ; c1: INTEGER ; r2: INTEGER ; c2: INTEGER) : ARRAY[TUPLE[INTEGER, INTEGER]]
		local
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

feature
	out: STRING
			do
				create Result.make_empty
				Result := "N"
			end

end
