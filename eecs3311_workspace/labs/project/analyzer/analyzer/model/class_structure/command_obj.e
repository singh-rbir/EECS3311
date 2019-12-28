note
	description: "Summary description for {COMMAND_OBJ}."
	author: "Raj"
	date: "$Date$"
	revision: "$Revision$"

class
	COMMAND_OBJ

inherit
	ANY
	redefine
		out
	end

create
	make

feature -- attributes
	name: STRING
	params: ARRAY[TUPLE[pn: STRING; ft: STRING]]

feature -- constructor
	make(n: STRING; par: ARRAY[TUPLE[pn: STRING; ft: STRING]])
		do
			name := n
			create params.make_empty
			params := par

		end

feature -- print
	out: STRING
		do
			create Result.make_empty
			Result.append (name)
			if not params.is_empty then
				Result.append ("(")
				across params is par
				loop
					Result.append(par.ft)
					if (par /~ params[params.count]) then
						Result.append(", ")
					else end
				end
				Result.append (")")
			else end

		end

end
