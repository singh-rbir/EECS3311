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
			add_boolean_case (agent test_account_withdraw)

			add_violation_case_with_tag ("not_too_big", agent test_account_withdraw_precondition_not_too_weak)
			add_boolean_case(agent test_account_withdraw_precondition_not_too_strong)
			add_boolean_case(agent test_account_withdraw_postconditon_not_too_weak)

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

	test_account_withdraw: BOOLEAN
		--Test the withdraw of an account
		local
			acc: ACCOUNT
		do
			comment("t1: test withdraw of an account")
			create acc.make (10)
			Result := acc.balance = 0 and acc.credit = 10
			check Result end

			acc.withdraw(5)
			Result := acc.balance = -5 and acc.credit = 10
			check Result end
		end

	test_account_withdraw_precondition_not_too_weak
		local
			acc: ACCOUNT
		do
			comment("t2: test account withdraw precondition")
			create acc.make (10)
			check acc.balance = 0 and acc.credit = 10 end

			acc.withdraw(11)
--			Result := acc.balance = -11 and acc.credit = 10
--			check Result end
		end

	test_account_withdraw_precondition_not_too_strong: BOOLEAN
		local
			acc: ACCOUNT
		do
			comment("t3: test account withdraw precondition")
			create acc.make (10)
			Result := acc.balance = 0 and acc.credit = 10
			check Result end

			acc.withdraw(10)
		end

	test_account_withdraw_postconditon_not_too_weak: BOOLEAN
		local
			acc: ACCOUNT
		do
			comment("t4: test account withdraw postcondition")
			create acc.make (10)
			Result := acc.balance = 0 and acc.credit = 10
			check Result end

			acc.withdraw(6)
			Result := acc.balance = -6 and acc.credit = 10
			check Result end
		end


end
