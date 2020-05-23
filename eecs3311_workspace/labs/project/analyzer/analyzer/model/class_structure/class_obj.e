note
	description: "Summary description for {CLASS_OBJ}."
	author: "Raj"
	date: "$Date$"
	revision: "$Revision$"

class
	CLASS_OBJ

inherit
	ANY
		redefine
			out
		end

create
	make

feature -- attributes
	name: STRING
	attributes: ARRAY[ATTR_OBJ]
	queries: ARRAY[QUERY_OBJ]
	commands: ARRAY[COMMAND_OBJ]

feature -- constructor
	make(n: STRING)
		do
			create attributes.make_empty
			create queries.make_empty
			create commands.make_empty

			name := n
		end

feature -- operations
	add_command(fn: STRING ; ps: ARRAY[TUPLE[pn: STRING; ft: STRING]])
		do
			commands.force (create {COMMAND_OBJ}.make (fn, ps), commands.count + 1)
		end

	add_attribute(fn: STRING ; ft: STRING)
		do
			attributes.force (create {ATTR_OBJ}.make(fn, ft), attributes.count + 1)
		end

	add_query(fn: STRING ; ps: ARRAY[TUPLE[pn: STRING; pt: STRING]] ; rt: STRING)
		do
			queries.force (create {QUERY_OBJ}.make(fn, ps, rt), queries.count + 1)
		end

feature -- queries
	get_name: STRING
		do
			Result := name
		end

	has_feature(fn: STRING): BOOLEAN
		do
			Result := (has_query(fn)) or (has_command(fn))
		end

	has_query(fn: STRING): BOOLEAN
		do
			Result := not return_query(fn).name.is_empty
		end

	return_query(fn: STRING): QUERY_OBJ
		local
			i: INTEGER
			found: BOOLEAN
		do
			create Result.make ("", <<>>, "")
			from i := queries.lower
			until i > queries.count or found
			loop
				if queries.at (i).name ~ fn then
					Result := queries.at (i)
					found := True
				end
				i := i + 1
			end
		end

	is_attribute(fn: STRING): BOOLEAN
		local
			i: INTEGER
			found: BOOLEAN
		do
			from i := attributes.lower
			until i > attributes.count or found
			loop
				Result := attributes[i].name ~ fn
				i := i + 1
			end
		end

	has_command(fn: STRING): BOOLEAN
		do
			Result := not return_command(fn).name.is_empty
		end

	return_command(fn: STRING): COMMAND_OBJ
		local
			i: INTEGER
			found: BOOLEAN
		do
			create Result.make ("", <<>>)
			from i := commands.lower
			until i > commands.count or found
			loop
				if commands.at (i).name ~ fn then
					Result := commands.at (i)
					found := True
				end
				i := i + 1
			end
		end



feature -- print class details
	out: STRING
		do
			create Result.make_empty
			Result.append("    " + name + "%N")

			Result.append("      " + "Number of attributes: " + attributes.count.out + "%N")
			across attributes is attr loop Result.append("        + " + attr.out + "%N") end

			Result.append("      " + "Number of queries: " + queries.count.out + "%N")
			across queries is query loop Result.append("        + " + query.out + "%N") end

			Result.append("      " + "Number of commands: " + commands.count.out)
			across commands is cmd loop Result.append("%N        + " + cmd.out) end
		end

end
