note
	description: "Summary description for {TUPLE_ITERATION_CURSOR}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	TUPLE_ITERATION_CURSOR[V1, V2]

inherit
	ITERATION_CURSOR[TUPLE[V1, V2]]

create
	make

feature -- implementation
	cursor_pos: INTEGER
	--keys: ARRAY[K]
	v1_list: LINKED_LIST[V1]
	v2_list: LINKED_LIST[V2]

feature
	make(arg1: LINKED_LIST[V1]; arg2: LINKED_LIST[V2])
		do
			v1_list := arg1
			v2_list := arg2

			cursor_pos := v1_list.lower
		end

feature -- access

	item: TUPLE[V1, V2]
		local
			item1: V1
			item2: V2
		do
			item1 := v1_list.at(cursor_pos)
			item2 := v2_list.at (cursor_pos)
			Result := [item1, item2]
		end

	after: BOOLEAN
		do
			Result := cursor_pos > v1_list.count
		end

	forth
		do
			cursor_pos := cursor_pos + 1
		end
end
