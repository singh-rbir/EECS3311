note
	description: "Summary description for {TUPLE_ITERATION_CURSOR}."
	author: "Rajanbir (Raj) Singh"
	date: "$Oct 11, 2019$"
	revision: "$Revision$"

class
	TUPLE_ITERATION_CURSOR[KEY -> HASHABLE,ITEM_1,ITEM_2]

inherit
	ITERATION_CURSOR[TUPLE[ITEM_1, ITEM_2, KEY]]

create
	make

feature {NONE} -- Implementation
	key: LINKED_LIST[KEY]
	item_1: ARRAY[ITEM_1]
	item_2: HASH_TABLE[ITEM_2, KEY]

	cursor_pos: INTEGER


feature -- Constructor
	make(new_key: LINKED_LIST[KEY]; new_item1: ARRAY[ITEM_1]; new_item2: HASH_TABLE[ITEM_2, KEY] )
		do
			key := new_key
			item_1 := new_item1
			item_2 := new_item2

			cursor_pos := new_item1.lower
		end


feature -- Access
	item: TUPLE[ITEM_1, ITEM_2, KEY]
			-- Item at current cursor position.
		local
			k: KEY
			i_1: ITEM_1
			i_2: ITEM_2
		do
			k := key.at (cursor_pos)
			i_1 := item_1.at (cursor_pos)
			i_2 := item_2.at (k)

			--create Result
			check attached i_2 as copy_val then
				item_2.put (copy_val, k)
			end

			Result := [i_1, i_2, k]
		end

	after: BOOLEAN
			-- Are there no more items to iterate over?
		do
			Result := (cursor_pos > item_1.upper)
		end

	forth
			-- Move to next position.
		do
			cursor_pos := cursor_pos + 1
		end

end
