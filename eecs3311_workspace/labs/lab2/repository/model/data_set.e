note
	description: "A data set consists of two data items and their associated key."
	author: "Jackie and Raj"
	date: "$Oct 11, 2019$"
	revision: "$Revision$"

class
	DATA_SET[V1, V2, K]

inherit
	ANY
	redefine
		is_equal
	end

create
	make

feature -- Attributes (Do not modify this section)
	data_item_1: V1
	data_item_2: V2
	key: K

feature -- Commands (Do not modify this section)
	make (v1: V1; v2: V2; k: K)
		do
			data_item_1 := v1
			data_item_2 := v2
			key := k
		end

feature -- Equality
	is_equal (other: like Current): BOOLEAN
			-- Are the current data set equal to `other`?
			-- Two data sets are equal if their `key`, `data_item_1`, and `data_item_2`
			-- are equal.
		do
			-- TODO:
			Result := ((other.data_item_1 ~ data_item_1) and (other.data_item_2 ~ data_item_2) and (other.key ~ key))
		ensure then
			-- No postcondition needed.
		end

end
