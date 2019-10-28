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
	accounts: LINKED_LIST[ACCOUNT]

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

			accounts.extend (create {ACCOUNT}.make (id))
		end

	deposit (id: STRING; amount: INTEGER)
		do
--			s := "deposit"
--			i := i + 2

			across
				accounts is cursor
			loop
				if(cursor.id ~ id) then
					cursor.deposit(amount)
				end

			end

		end

	withdraw(id: STRING; amount: INTEGER)
		do
--			s := "withdraw"
--			i := i + 2
			across
				accounts is cursor
			loop
				if(cursor.id ~ id) then
					cursor.withdraw(amount)
				end
			end
		end

	transfer(id1: STRING; id2: STRING; amount: INTEGER)
		do
--			s := "transfer"
--			i := i + 2
			across
				accounts is cursor
			loop
				if(cursor.id ~ id1) then
					cursor.withdraw(amount)
				end
			end

			across
				accounts is cursor2
			loop
				if(cursor2.id ~ id2) then
					cursor2.deposit(amount)
				end
			end
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
			Result.append("accounts: {")
			j := 1
			across
				accounts is cursor
			loop
				Result.append(cursor.out)
				if(j < accounts.count) then
					Result.append(", ")
				end
				j := i + 1

			end
			Result.append ("}")
		end

end




