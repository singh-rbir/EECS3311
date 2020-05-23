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
			create accounts.make
			create error.make_empty
		end


feature -- implementation
	accounts: LINKED_LIST[ACCOUNT]
	error: STRING

feature -- model operations

	set_error(m: STRING)
		do
			error := m
		end


	new(id: STRING)
		require
			id_non_existing:
--				not(across -- just another way of writing it
--					accounts is cursor
--				some
--					cursor.id ~ id
--				end)
				across
					accounts is cursor
				all
					cursor.id /~ id
				end
		do
			accounts.extend (create {ACCOUNT}.make (id))
		end

	deposit (id: STRING; amount: INTEGER)
		do
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
			create Result.make_empty

			if error.is_empty then
				Result.append("accounts: {")
				j := 1
				across
					accounts is cursor
				loop
					Result.append(cursor.out)
					if(j < accounts.count) then
						Result.append(", ")
					end
					j := j + 1

				end
				Result.append ("}")
			else
				Result.append("   Error: ")
				Result.append (error)
			end


		end

end




