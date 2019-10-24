note
	description: "A default business model."
	author: "Jackie Wang"
	date: "$Date$"
	revision: "$Revision$"

class
	BANK

inherit
	ANY
		redefine
			out
		end

create {BANK_ACCESS}
	make

feature {NONE} -- Initialization
	make
			-- Initialization for `Current'.
		do
			s := "init"
			i := 1

			create accounts.make
		end

feature -- model attributes
	s : STRING
	i : INTEGER

feature -- implementation
	accounts: LINKED_LIST[STRING]

feature -- model operations
--	default_update
--			-- Perform update to the model state.
--		do
--			i := i + 2
--		end

	new(id: STRING)
		do
			s := "new"
			i := i + 2

			accounts.extend (id)
		end

	deposit
		do
			s := "deposit"
			i := i + 2
		end

	withdraw
		do
			s := "withdraw"
			i := i + 2
		end

	transfer
		do
			s := "transfer"
			i := i + 2
		end

	reset
			-- Reset model state.
		do
			make
		end

feature -- queries
	out : STRING
		local
			j: INTEGER
		do
--			create Result.make_from_string ("  ")
--			Result.append ("State of Bank ")
--			Result.append ("[")
--			Result.append (i.out)
--			Result.append ("] after ")
--			Result.append (s)

			create Result.make_empty
			Result.append("{")
			j := 1
			across
				accounts as cursor
			loop
				Result.append(cursor.item)
				if(j < accounts.count) then
					Result.append(", ")
				end
				j := i + 1

			end
			Result.append ("}")
		end

end




