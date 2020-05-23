note
	description: "Summary description for {PLUS_SIGN}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	PLUS_SIGN

inherit
	CHESS
		redefine
			out
		end

create
	make


feature
	out: STRING
			do
				create Result.make_empty
				Result := "+"
			end

end
