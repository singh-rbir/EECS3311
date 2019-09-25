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
	balance : INTEGER
	credit : INTEGER

feature -- Constructor
	make (a_credit: INTEGER)
		-- Initialize an account with 'a_credit' for credit and zero balance
		do
			balance := 0
			credit := a_credit - 1

		ensure -- these are post conditions for the constructor
			zero_balance:
				balance = 0
			credit_properly_set:
				credit = a_credit
		end


invariant -- these are conditions that are checked at runtime, and after
	credit_non_negative:
		credit >= 0
	balance_not_exceeding_credit:
		balance + credit >= 0



end
