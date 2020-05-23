note
	description: "Summary description for {ATTR_OBJ}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ATTR_OBJ

inherit
	ANY
	redefine
		out
	end

create
	make

feature -- attributes
	name: STRING
	type: STRING

feature -- constructor
	make(n: STRING; t: STRING)
		do
			name := n
			type := t
		end


feature -- queries

feature -- print
	out: STRING
		do
			create Result.make_empty
			Result.append (name + ": " + type)
		end

end
