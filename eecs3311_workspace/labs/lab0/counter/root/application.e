note
	description: "Summary description for {APPLICATION}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	APPLICATION

inherit
	ARGUMENTS_32

create
	make
		-- Run application
	  	local
			c: MY_COUNTER
		do
			create{MY_COUNTER} c.make(8)
			print(c.value)
		end

feature {NONE} -- Initialization

	make
		-- Run application
		do
			print("Hello Eiffel World @ EECS3311!%N")
		end

end
