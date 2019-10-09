note
	description: "Summary description for {DATA_SET_ITERATION_CURSOR}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	DATA_SET_ITERATION_CURSOR[KEY, ITEM_1, ITEM_2]

inherit
	ITERATION_CURSOR[TUPLE[KEY, ITEM_1, ITEM_2]]

feature -- Access

	item: TUPLE[KEY, ITEM_1, ITEM_2]
			-- Item at current cursor position.
		do

		end

	after: BOOLEAN
			-- Are there no more items to iterate over?
		do

		end

	forth
			-- Move to next position.
		do

		end



end
