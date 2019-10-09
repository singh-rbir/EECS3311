note
	description: "Summary description for {TUPLE_ITERATION_CURSOR}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	TUPLE_ITERATION_CURSOR[KEY -> HASHABLE, ITEM_1, ITEM_2]

inherit
	ITERATION_CURSOR[TUPLE[KEY, ITEM_1, ITEM_2]]

create
	make

feature -- Constructor
	make(item1: ARRAY[ITEM_1]; item2: HASH_TABLE[ITEM_2, KEY]; key: LINKED_LIST[KEY])
		do
			

		end


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
