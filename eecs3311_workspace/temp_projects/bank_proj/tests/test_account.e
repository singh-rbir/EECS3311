note
	description: "Test the ACCOUNT class"
	author: "Rajanbir Singh"
	date: "$Date$"
	revision: "$Revision$"

class
	TEST_ACCOUNT

inherit
	ES_TEST

create
	make

feature -- Collect all tests for ACCOUNT
	make -- add test cases for ACCOUNT.
		do
			add_boolean_case (agent test_account_creation)

		end

feature -- Test cases for ACCOUNT

	test_account_creation: BOOLEAN
		--Test the creation of an account
		local
			acc, acc2: ACCOUNT

		do
			comment ("t0: test accout creation")
			-- instantiate a new ACCOUNT object using a creation instruction
			-- initial credit 10 for the new accounts
			create acc.make(10)
			-- Result is false by default, if not set
			Result := acc.balance = 0 and acc.credit = 10
			check Result end

			create acc2.make(1000)
			Result := acc2.balance = 0 and acc2.credit = 1000
			check Result end
		end


end
