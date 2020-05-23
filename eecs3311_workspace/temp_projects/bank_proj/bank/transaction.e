note
	description: "Summary description for {TRANSACTION}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	TRANSACTION

create
	make

feature -- ATTRIBUTES
	value: INTEGER
	date: DATE

feature -- Constructor
	make(v: INTEGER; d: DATE)

	do
		value := v
		date := d
	ensure
		value_set: value = v
		date_set: date = d
	end

invariant
	value > 0

end
