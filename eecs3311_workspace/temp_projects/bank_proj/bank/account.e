note
	description: "[
		A class that represents a bank account that allows customers to deposit and withdraw.
	]"
	author: "Rajanbir Singh"
	date: "$Date$"
	revision: "$Revision$"

class
	ACCOUNT

create -- Declare the list of possible features that can be used as constructors
	make

feature -- Attributes
	balance: INTEGER
	credit: INTEGER

	deposits: LIST[TRANSACTION]
	withdraws: LIST[TRANSACTION]

feature -- Constructor
	make (a_credit: INTEGER)
		-- Initialize an account with 'a_credit' for credit and zero balance
		do
			balance := 0
			credit := a_credit
			create {LINKED_LIST[TRANSACTION]} deposits.make
			create {LINKED_LIST[TRANSACTION]} withdraws.make

		ensure -- these are post conditions for the constructor
			zero_balance:
				balance = 0
			credit_properly_set:
				credit = a_credit
			empty_deposits:
				deposits.is_empty
			empty_withdraws:
				withdraws.count = 0
		end

feature -- Commands
	withdraw(a: INTEGER)
		-- Withdraw an amount 'a' from the account
		require
			not_too_small:
				a > 0
			not_too_big:
			 	a <= balance + credit
		local
			t: TRANSACTION
			d: DATE

		do
			balance := balance - a

			create d.make_now
			create t.make (a, d)
			withdraws.extend (t)
		ensure
			balance_set:
				balance = old balance - a
			credit_set:
				credit = old credit
			withdraws_extended:
				withdraws.count = old withdraws.count + 1
			deposits_unchanged:
				deposits.count = old deposits.count

		end

	withdraw_on_date(a: INTEGER; d: DATE)
		-- Withdraw an amount 'a' from the account on date 'd'
		require
			not_too_small:
				a > 0
			not_too_big:
			 	a <= balance + credit
		local
			t: TRANSACTION

		do
			balance := balance - a


			create t.make (a, d)
			withdraws.extend (t)
		ensure
			balance_set:
				balance = old balance - a
			credit_set:
				credit = old credit
			withdraws_extended:
				withdraws.count = old withdraws.count + 1
			deposits_unchanged:
				deposits.count = old deposits.count

		end

	deposit(a: INTEGER)
		-- deposit an amount 'a' from the account
		require
			not_too_small:
				a > 0

		local
			t: TRANSACTION
			d: DATE

		do
			balance := balance + a

			create d.make_now
			create t.make (a, d)
			deposits.extend (t)
		ensure
			balance_set:
				balance = old balance + a
			credit_set:
				credit = old credit
			deposits_extended:
				deposits.count = old deposits.count + 1
			withdraws_unchanged:
				withdraws.count = old withdraws.count

		end

feature -- Queries

	withdrawals_on(d: DATE): ARRAY[TRANSACTION]
		local
			t: TRANSACTION
			i: INTEGER
		do
			create Result.make_empty
			from
				i := 1
				withdraws.start
			until
				withdraws.after
			loop
				t: withdraws.item
				if t.date ~ d then -- object equality, not reference equality
					 Result.force(t, i)
				end

				i := i + 1
				withdraws.forth
			end

		ensure
			-- for all tr: withdrawals @ tr.date = d iff Result.has(tr)
		end


invariant -- these are conditions that are checked at runtime, and after
	credit_non_negative:
		credit >= 0
	balance_not_exceeding_credit:
		balance + credit >= 0



end
