note
	description: "Input Handler"
	author: "Jackie Wang"

deferred class
	ETF_INPUT_HANDLER_INTERFACE

inherit

	ETF_TYPE_CONSTRAINTS

feature -- Attributes

	frozen etf_error: BOOLEAN

	frozen input_string: STRING
			-- list of commands to execute

	frozen abstract_ui: ETF_ABSTRACT_UI_INTERFACE
			-- output generated by `parse_string'

feature -- Error Reporting

	frozen on_error: ETF_EVENT [TUPLE [STRING]]

feature -- Error Messages

	frozen input_cmds_syntax_err_msg: STRING = "Syntax Error: specified command cannot be parsed"

	frozen input_cmds_type_err_msg: STRING = "Type Error: specified command is not type-correct"

feature {NONE} -- Constructors

	frozen make_without_running (etf_input: STRING; a_commands: ETF_ABSTRACT_UI_INTERFACE)
			-- convert an input string into array of commands
		do
			create {ETF_EVENT [TUPLE [STRING]]} on_error
			input_string := etf_input
			abstract_ui := a_commands
		end

	frozen make (etf_input: STRING; a_commands: ETF_ABSTRACT_UI_INTERFACE)
			-- convert an input string into array of commands
		do
			make_without_running (etf_input, a_commands)
			parse_and_validate_input_string
		end

feature -- Auxiliary Query

	frozen etf_evt_out (evt: TUPLE [name: STRING; args: ARRAY [ETF_EVT_ARG]]): STRING
		local
			args: ARRAY [ETF_EVT_ARG]
			etf_local_i: INTEGER
		do
			from
				create {STRING} Result.make_from_string (evt.name + "(")
				args := evt.args
				etf_local_i := args.lower
			until
				etf_local_i > args.upper
			loop
				if args [etf_local_i].src_out.is_empty then
					Result.append (args [etf_local_i].out)
				else
					Result.append (args [etf_local_i].src_out)
				end
				if (etf_local_i < args.upper) then
					Result.append (", ")
				end
				etf_local_i := etf_local_i + 1
			end
			Result.append (")")
		end

feature -- Parsing

	frozen parse_and_validate_input_string
		local
			trace_parser: ETF_EVT_TRACE_PARSER
			cmd: ETF_COMMAND_INTERFACE
			invalid_cmds: STRING
		do
			create {ETF_EVT_TRACE_PARSER} trace_parser.make (evt_param_types_list, enum_items)
			trace_parser.parse_string (input_string)
			if trace_parser.last_error.is_empty then
				invalid_cmds := find_invalid_evt_trace (trace_parser.event_trace)
				if invalid_cmds.is_empty then
					across
						trace_parser.event_trace as evt
					loop
						cmd := evt_to_cmd (evt.item)
						abstract_ui.put (cmd)
					end
				else
					etf_error := TRUE
					on_error.notify (input_cmds_type_err_msg + "%N" + invalid_cmds)
				end
			else
				etf_error := TRUE
				on_error.notify (input_cmds_syntax_err_msg + "%N" + trace_parser.last_error)
			end
		end

	frozen evt_to_cmd (evt: TUPLE [name: STRING; args: ARRAY [ETF_EVT_ARG]]): ETF_COMMAND_INTERFACE
		local
			cmd_name: STRING
			args: ARRAY [ETF_EVT_ARG]
			int_cmd_arg: STRING
		do
			cmd_name := evt.name
			args := evt.args

				-- initialize 'Result'
			create {ETF_DUMMY} Result.make ("dummy", [], abstract_ui)

				-- check command
			if (cmd_name ~ "type_check") then
				create {ETF_TYPE_CHECK} Result.make ("type_check", [], abstract_ui)
					--				if args.is_empty then
					--					create {ETF_TYPE_CHECK} Result.make ("type_check", [], abstract_ui)
					--				end
			elseif (cmd_name ~ "evaluate") then
				create {ETF_EVALUATE} Result.make ("evaluate", [], abstract_ui)
					--				if args.is_empty then
					--					create {ETF_EVALUATE} Result.make ("evaluate", [], abstract_ui)
					--				end
			elseif (cmd_name ~ "reset") then
				create {ETF_RESET} Result.make ("reset", [], abstract_ui)
					--				if args.is_empty then
					--					create {ETF_RESET} Result.make ("reset", [], abstract_ui)
					--				end
			elseif ((cmd_name ~ "boolean_constant") or else (cmd_name ~ "bool")) then
				if (attached {ETF_BOOL_ARG} args [1] as c) then
					create {ETF_BOOLEAN_CONSTANT} Result.make ("boolean_constant", [c.value], abstract_ui)
				end
			elseif (cmd_name ~ "integer_constant") then
				if (attached {ETF_INT_ARG} args [1] as c) then
					create {ETF_INTEGER_CONSTANT} Result.make ("integer_constant", [c.value], abstract_ui)
				end
			elseif (cmd_name ~ "int") then
				if (attached {ETF_VALUE_ARG} args [1] as c) then
					int_cmd_arg := c.value.precise_out
					if int_cmd_arg.is_integer_64 then
						create {ETF_INTEGER_CONSTANT} Result.make ("integer_constant", [int_cmd_arg.to_integer_64], abstract_ui)
					end
				elseif (attached {ETF_INT_ARG} args [1] as c) then
					create {ETF_INTEGER_CONSTANT} Result.make ("integer_constant", [c.value], abstract_ui)
				end
			elseif ((cmd_name ~ "empty_set_constant") or else (cmd_name ~ "empty_set")) then -- {}
				create {ETF_EMPTY_SET_CONSTANT} Result.make ("empty_set_constant", [], abstract_ui)
					--				if args.is_empty then
					--					create {ETF_EMPTY_SET_CONSTANT} Result.make ("empty_set_constant", [], abstract_ui)
					--				end
			elseif (cmd_name ~ "add") then
				create {ETF_ADD} Result.make ("add", [], abstract_ui)
					--				if args.is_empty then
					--					create {ETF_ADD} Result.make ("add", [], abstract_ui)
					--				end
			elseif (cmd_name ~ "subtract") then
				create {ETF_SUBTRACT} Result.make ("subtract", [], abstract_ui)
					--				if args.is_empty then
					--					create {ETF_SUBTRACT} Result.make ("subtract", [], abstract_ui)
					--				end
			elseif (cmd_name ~ "multiply") then
				create {ETF_MULTIPLY} Result.make ("multiply", [], abstract_ui)
					--				if args.is_empty then
					--					create {ETF_MULTIPLY} Result.make ("multiply", [], abstract_ui)
					--				end
			elseif (cmd_name ~ "divide") then
				create {ETF_DIVIDE} Result.make ("divide", [], abstract_ui)
					--				if args.is_empty then
					--					create {ETF_DIVIDE} Result.make ("divide", [], abstract_ui)
					--				end
			elseif (cmd_name ~ "mod") then
				create {ETF_MOD} Result.make ("mod", [], abstract_ui)
					--				if args.is_empty then
					--					create {ETF_MOD} Result.make ("mod", [], abstract_ui)
					--				end
			elseif ((cmd_name ~ "conjoin") or else (cmd_name ~ "and")) then -- AND
				create {ETF_CONJOIN} Result.make ("conjoin", [], abstract_ui)
					--				if args.is_empty then
					--					create {ETF_CONJOIN} Result.make ("conjoin", [], abstract_ui)
					--				end
			elseif ((cmd_name ~ "disjoin") or else (cmd_name ~ "or")) then -- OR
				create {ETF_DISJOIN} Result.make ("disjoin", [], abstract_ui)
					--				if args.is_empty then
					--					create {ETF_DISJOIN} Result.make ("disjoin", [], abstract_ui)
					--				end
			elseif ((cmd_name ~ "exclusive_disjoin") or else (cmd_name ~ "xor")) then -- XOR
				create {ETF_EXCLUSIVE_DISJOIN} Result.make ("exclusive_disjoin", [], abstract_ui)
					--				if args.is_empty then
					--					create {ETF_EXCLUSIVE_DISJOIN} Result.make ("exclusive_disjoin", [], abstract_ui)
					--				end
			elseif (cmd_name ~ "imply") then
				create {ETF_IMPLY} Result.make ("imply", [], abstract_ui)
					--				if args.is_empty then
					--					create {ETF_IMPLY} Result.make ("imply", [], abstract_ui)
					--				end
			elseif (cmd_name ~ "equals") then
				create {ETF_EQUALS} Result.make ("equals", [], abstract_ui)
					--				if args.is_empty then
					--					create {ETF_EQUALS} Result.make ("equals", [], abstract_ui)
					--				end
			elseif ((cmd_name ~ "less_than_or_equal") or else (cmd_name ~ "le")) then
				create {ETF_LESS_THAN_OR_EQUAL} Result.make ("less_than_or_equal", [], abstract_ui)
					--				if args.is_empty then
					--					create {ETF_LESS_THAN_OR_EQUAL} Result.make ("less_than_or_equal", [], abstract_ui)
					--				end
			elseif ((cmd_name ~ "less_than") or else (cmd_name ~ "lt")) then
				create {ETF_LESS_THAN} Result.make ("less_than", [], abstract_ui)
					--				if args.is_empty then
					--					create {ETF_LESS_THAN} Result.make ("less_than", [], abstract_ui)
					--				end
			elseif ((cmd_name ~ "greater_than") or else (cmd_name ~ "gt")) then
				create {ETF_GREATER_THAN} Result.make ("greater_than", [], abstract_ui)
					--				if args.is_empty then
					--					create {ETF_GREATER_THAN} Result.make ("greater_than", [], abstract_ui)
					--				end
			elseif ((cmd_name ~ "greater_than_or_equal") or else (cmd_name ~ "ge")) then
				create {ETF_GREATER_THAN_OR_EQUAL} Result.make ("greater_than_or_equal", [], abstract_ui)
					--				if args.is_empty then
					--					create {ETF_GREATER_THAN_OR_EQUAL} Result.make ("greater_than_or_equal", [], abstract_ui)
					--				end
			elseif (cmd_name ~ "union") then
				create {ETF_UNION} Result.make ("union", [], abstract_ui)
					--				if args.is_empty then
					--					create {ETF_UNION} Result.make ("union", [], abstract_ui)
					--				end
			elseif (cmd_name ~ "intersect") then
				create {ETF_INTERSECT} Result.make ("intersect", [], abstract_ui)
					--				if args.is_empty then
					--					create {ETF_INTERSECT} Result.make ("intersect", [], abstract_ui)
					--				end
			elseif (cmd_name ~ "difference") then
				create {ETF_DIFFERENCE} Result.make ("difference", [], abstract_ui)
					--				if args.is_empty then
					--					create {ETF_DIFFERENCE} Result.make ("difference", [], abstract_ui)
					--				end
			elseif ((cmd_name ~ "subset_equal") or else (cmd_name ~ "subeq")) then
				create {ETF_SUBSET_EQUAL} Result.make ("subset_equal", [], abstract_ui)
					--				if args.is_empty then
					--					create {ETF_SUBSET_EQUAL} Result.make ("subset_equal", [], abstract_ui)
					--				end
			elseif ((cmd_name ~ "subset_proper") or else (cmd_name ~ "subneq")) then
				create {ETF_SUBSET_PROPER} Result.make ("subset_proper", [], abstract_ui)
					--				if args.is_empty then
					--					create {ETF_SUBSET_PROPER} Result.make ("subset_proper", [], abstract_ui)
					--				end
			elseif ((cmd_name ~ "superset_equal") or else (cmd_name ~ "supeq")) then
				create {ETF_SUPERSET_EQUAL} Result.make ("superset_equal", [], abstract_ui)
					--				if args.is_empty then
					--					create {ETF_SUPERSET_EQUAL} Result.make ("superset_equal", [], abstract_ui)
					--				end
			elseif ((cmd_name ~ "superset_proper") or else (cmd_name ~ "supneq")) then
				create {ETF_SUPERSET_PROPER} Result.make ("superset_proper", [], abstract_ui)
					--				if args.is_empty then
					--					create {ETF_SUPERSET_PROPER} Result.make ("superset_proper", [], abstract_ui)
					--				end
			elseif (cmd_name ~ "negative") then
				create {ETF_NEGATIVE} Result.make ("negative", [], abstract_ui)
					--				if args.is_empty then
					--					create {ETF_NEGATIVE} Result.make ("negative", [], abstract_ui)
					--				end
			elseif ((cmd_name ~ "negation") or else (cmd_name ~ "not")) then
				create {ETF_NEGATION} Result.make ("negation", [], abstract_ui)
					--				if args.is_empty then
					--					create {ETF_NEGATION} Result.make ("negation", [], abstract_ui)
					--				end
			elseif (cmd_name ~ "sum") then
				create {ETF_SUM} Result.make ("sum", [], abstract_ui)
					--				if args.is_empty then
					--					create {ETF_SUM} Result.make ("sum", [], abstract_ui)
					--				end
			elseif (cmd_name ~ "product") then
				create {ETF_PRODUCT} Result.make ("product", [], abstract_ui)
					--				if args.is_empty then
					--					create {ETF_PRODUCT} Result.make ("product", [], abstract_ui)
					--				end
			elseif (cmd_name ~ "count") then
				create {ETF_COUNT} Result.make ("count", [], abstract_ui)
					--				if args.is_empty then
					--					create {ETF_COUNT} Result.make ("count", [], abstract_ui)
					--				end
			elseif ((cmd_name ~ "for_all") or else (cmd_name ~ "all")) then
				create {ETF_FOR_ALL} Result.make ("for_all", [], abstract_ui)
					--				if args.is_empty then
					--					create {ETF_FOR_ALL} Result.make ("for_all", [], abstract_ui)
					--				end
			elseif ((cmd_name ~ "there_exists") or else (cmd_name ~ "exists")) then
				create {ETF_THERE_EXISTS} Result.make ("there_exists", [], abstract_ui)
					--				if args.is_empty then
					--					create {ETF_THERE_EXISTS} Result.make ("there_exists", [], abstract_ui)
					--				end
			elseif ((cmd_name ~ "open_set_enumeration") or else (cmd_name ~ "open_set")) then
				create {ETF_OPEN_SET_ENUMERATION} Result.make ("open_set_enumeration", [], abstract_ui)
					--				if args.is_empty then
					--					create {ETF_OPEN_SET_ENUMERATION} Result.make ("open_set_enumeration", [], abstract_ui)
					--				end
			elseif ((cmd_name ~ "close_set_enumeration") or else (cmd_name ~ "close_set")) then
				create {ETF_CLOSE_SET_ENUMERATION} Result.make ("close_set_enumeration", [], abstract_ui)
					--				if args.is_empty then
					--					create {ETF_CLOSE_SET_ENUMERATION} Result.make ("close_set_enumeration", [], abstract_ui)
					--				end
			end
		end

	frozen find_invalid_evt_trace (event_trace: ARRAY [TUPLE [name: STRING; args: ARRAY [ETF_EVT_ARG]]]): STRING
		local
			loop_counter: INTEGER
			evt: TUPLE [name: STRING; args: ARRAY [ETF_EVT_ARG]]
			cmd_name: STRING
			args: ARRAY [ETF_EVT_ARG]
			evt_out_str: STRING
			int_cmd_arg: STRING
			is_invalid: BOOLEAN
		do
			from
				create {STRING} Result.make_empty
				loop_counter := event_trace.lower
			until
				loop_counter > event_trace.upper
			loop
				evt := event_trace [loop_counter]
				evt_out_str := etf_evt_out (evt)
				cmd_name := evt.name
				args := evt.args
				if (cmd_name ~ "type_check") then
						--					if (NOT args.is_empty) then
						--						if (NOT Result.is_empty) then
						--							Result.append ("%N")
						--						end
						--						Result.append (evt_out_str + " does not conform to declaration type_check")
						--					end
				elseif (cmd_name ~ "evaluate") then
						--					if (NOT args.is_empty) then
						--						if (NOT Result.is_empty) then
						--							Result.append ("%N")
						--						end
						--						Result.append (evt_out_str + " does not conform to declaration evaluate")
						--					end
				elseif (cmd_name ~ "reset") then
						--					if (NOT args.is_empty) then
						--						if (NOT Result.is_empty) then
						--							Result.append ("%N")
						--						end
						--						Result.append (evt_out_str + " does not conform to declaration reset")
						--					end
				elseif ((cmd_name ~ "boolean_constant") or else (cmd_name ~ "bool")) then
					if (NOT ((args.count = 1) AND THEN (attached {ETF_BOOL_ARG} args [1]))) then
						if (NOT Result.is_empty) then
							Result.append ("%N")
						end
						Result.append (evt_out_str + " does not conform to declaration boolean_constant(c: BOOLEAN)")
					end
				elseif (cmd_name ~ "integer_constant") then
					if (NOT ((args.count = 1) AND THEN (attached {ETF_INT_ARG} args [1]))) then
						if (NOT Result.is_empty) then
							Result.append ("%N")
						end
						Result.append (evt_out_str + " does not conform to declaration integer_constant(c: INTEGER_64)")
					end
				elseif (cmd_name ~ "int") then
					is_invalid := True
					if (args.count = 1) then
						if (attached {ETF_VALUE_ARG} args [1] as c) then
							int_cmd_arg := c.value.precise_out
							if int_cmd_arg.is_integer_64 then
								is_invalid := False
							end
						elseif (attached {ETF_INT_ARG} args [1] as c) then
							is_invalid := False
						end
					end
					if is_invalid then
						if (NOT Result.is_empty) then
							Result.append ("%N")
						end
						Result.append (evt_out_str + " does not conform to declaration integer_constant(c: INTEGER_64)")
					end
				elseif ((cmd_name ~ "empty_set_constant") or else (cmd_name ~ "empty_set")) then -- {}
						--					if (NOT args.is_empty) then
						--						if (NOT Result.is_empty) then
						--							Result.append ("%N")
						--						end
						--						Result.append (evt_out_str + " does not conform to declaration empty_set_constant")
						--					end
				elseif (cmd_name ~ "add") then
						--					if (NOT args.is_empty) then
						--						if (NOT Result.is_empty) then
						--							Result.append ("%N")
						--						end
						--						Result.append (evt_out_str + " does not conform to declaration add")
						--					end
				elseif (cmd_name ~ "subtract") then
						--					if (NOT args.is_empty) then
						--						if (NOT Result.is_empty) then
						--							Result.append ("%N")
						--						end
						--						Result.append (evt_out_str + " does not conform to declaration subtract")
						--					end
				elseif (cmd_name ~ "multiply") then
						--					if (NOT args.is_empty) then
						--						if (NOT Result.is_empty) then
						--							Result.append ("%N")
						--						end
						--						Result.append (evt_out_str + " does not conform to declaration multiply")
						--					end
				elseif (cmd_name ~ "divide") then
						--					if (NOT args.is_empty) then
						--						if (NOT Result.is_empty) then
						--							Result.append ("%N")
						--						end
						--						Result.append (evt_out_str + " does not conform to declaration divide")
						--					end
				elseif (cmd_name ~ "mod") then
						--					if (NOT args.is_empty) then
						--						if (NOT Result.is_empty) then
						--							Result.append ("%N")
						--						end
						--						Result.append (evt_out_str + " does not conform to declaration mod")
						--					end
				elseif ((cmd_name ~ "conjoin") or else (cmd_name ~ "and")) then -- AND
						--					if (NOT args.is_empty) then
						--						if (NOT Result.is_empty) then
						--							Result.append ("%N")
						--						end
						--						Result.append (evt_out_str + " does not conform to declaration conjoin")
						--					end
				elseif ((cmd_name ~ "disjoin") or else (cmd_name ~ "or")) then -- OR
						--					if (NOT args.is_empty) then
						--						if (NOT Result.is_empty) then
						--							Result.append ("%N")
						--						end
						--						Result.append (evt_out_str + " does not conform to declaration disjoin")
						--					end
				elseif ((cmd_name ~ "exclusive_disjoin") or else (cmd_name ~ "xor")) then -- XOR
						--					if (NOT args.is_empty) then
						--						if (NOT Result.is_empty) then
						--							Result.append ("%N")
						--						end
						--						Result.append (evt_out_str + " does not conform to declaration exclusive_disjoin")
						--					end
				elseif (cmd_name ~ "imply") then
						--					if (NOT args.is_empty) then
						--						if (NOT Result.is_empty) then
						--							Result.append ("%N")
						--						end
						--						Result.append (evt_out_str + " does not conform to declaration imply")
						--					end
				elseif (cmd_name ~ "equals") then
						--					if (NOT args.is_empty) then
						--						if (NOT Result.is_empty) then
						--							Result.append ("%N")
						--						end
						--						Result.append (evt_out_str + " does not conform to declaration equals")
						--					end
				elseif ((cmd_name ~ "less_than_or_equal") or else (cmd_name ~ "le")) then
						--					if (NOT args.is_empty) then
						--						if (NOT Result.is_empty) then
						--							Result.append ("%N")
						--						end
						--						Result.append (evt_out_str + " does not conform to declaration less_than_or_equal")
						--					end
				elseif ((cmd_name ~ "less_than") or else (cmd_name ~ "lt")) then
						--					if (NOT args.is_empty) then
						--						if (NOT Result.is_empty) then
						--							Result.append ("%N")
						--						end
						--						Result.append (evt_out_str + " does not conform to declaration less_than")
						--					end
				elseif ((cmd_name ~ "greater_than") or else (cmd_name ~ "gt")) then
						--					if (NOT args.is_empty) then
						--						if (NOT Result.is_empty) then
						--							Result.append ("%N")
						--						end
						--						Result.append (evt_out_str + " does not conform to declaration greater_than")
						--					end
				elseif ((cmd_name ~ "greater_than_or_equal") or else (cmd_name ~ "ge")) then
						--					if (NOT args.is_empty) then
						--						if (NOT Result.is_empty) then
						--							Result.append ("%N")
						--						end
						--						Result.append (evt_out_str + " does not conform to declaration greater_than_or_equal")
						--					end
				elseif (cmd_name ~ "union") then
						--					if (NOT args.is_empty) then
						--						if (NOT Result.is_empty) then
						--							Result.append ("%N")
						--						end
						--						Result.append (evt_out_str + " does not conform to declaration union")
						--					end
				elseif (cmd_name ~ "intersect") then
						--					if (NOT args.is_empty) then
						--						if (NOT Result.is_empty) then
						--							Result.append ("%N")
						--						end
						--						Result.append (evt_out_str + " does not conform to declaration intersect")
						--					end
				elseif (cmd_name ~ "difference") then
						--					if (NOT args.is_empty) then
						--						if (NOT Result.is_empty) then
						--							Result.append ("%N")
						--						end
						--						Result.append (evt_out_str + " does not conform to declaration difference")
						--					end
				elseif ((cmd_name ~ "subset_equal") or else (cmd_name ~ "subeq")) then
						--					if (NOT args.is_empty) then
						--						if (NOT Result.is_empty) then
						--							Result.append ("%N")
						--						end
						--						Result.append (evt_out_str + " does not conform to declaration subset_equal")
						--					end
				elseif ((cmd_name ~ "subset_proper") or else (cmd_name ~ "subneq")) then
						--					if (NOT args.is_empty) then
						--						if (NOT Result.is_empty) then
						--							Result.append ("%N")
						--						end
						--						Result.append (evt_out_str + " does not conform to declaration subset_proper")
						--					end
				elseif ((cmd_name ~ "superset_equal") or else (cmd_name ~ "supeq")) then
						--					if (NOT args.is_empty) then
						--						if (NOT Result.is_empty) then
						--							Result.append ("%N")
						--						end
						--						Result.append (evt_out_str + " does not conform to declaration superset_equal")
						--					end
				elseif ((cmd_name ~ "superset_proper") or else (cmd_name ~ "supneq")) then
						--					if (NOT args.is_empty) then
						--						if (NOT Result.is_empty) then
						--							Result.append ("%N")
						--						end
						--						Result.append (evt_out_str + " does not conform to declaration superset_proper")
						--					end
				elseif (cmd_name ~ "negative") then
						--					if (NOT args.is_empty) then
						--						if (NOT Result.is_empty) then
						--							Result.append ("%N")
						--						end
						--						Result.append (evt_out_str + " does not conform to declaration negative")
						--					end
				elseif ((cmd_name ~ "negation") or else (cmd_name ~ "not")) then
						--					if (NOT args.is_empty) then
						--						if (NOT Result.is_empty) then
						--							Result.append ("%N")
						--						end
						--						Result.append (evt_out_str + " does not conform to declaration negation")
						--					end
				elseif (cmd_name ~ "sum") then
						--					if (NOT args.is_empty) then
						--						if (NOT Result.is_empty) then
						--							Result.append ("%N")
						--						end
						--						Result.append (evt_out_str + " does not conform to declaration sum")
						--					end
				elseif (cmd_name ~ "product") then
						--					if (NOT args.is_empty) then
						--						if (NOT Result.is_empty) then
						--							Result.append ("%N")
						--						end
						--						Result.append (evt_out_str + " does not conform to declaration product")
						--					end
				elseif (cmd_name ~ "count") then
						--					if (NOT args.is_empty) then
						--						if (NOT Result.is_empty) then
						--							Result.append ("%N")
						--						end
						--						Result.append (evt_out_str + " does not conform to declaration count")
						--					end
				elseif ((cmd_name ~ "for_all") or else (cmd_name ~ "all")) then
						--					if (NOT args.is_empty) then
						--						if (NOT Result.is_empty) then
						--							Result.append ("%N")
						--						end
						--						Result.append (evt_out_str + " does not conform to declaration for_all")
						--					end
				elseif ((cmd_name ~ "there_exists") or else (cmd_name ~ "exists")) then
						--					if (NOT args.is_empty) then
						--						if (NOT Result.is_empty) then
						--							Result.append ("%N")
						--						end
						--						Result.append (evt_out_str + " does not conform to declaration there_exists")
						--					end
				elseif ((cmd_name ~ "open_set_enumeration") or else (cmd_name ~ "open_set")) then
						--					if (NOT args.is_empty) then
						--						if (NOT Result.is_empty) then
						--							Result.append ("%N")
						--						end
						--						Result.append (evt_out_str + " does not conform to declaration open_set_enumeration")
						--					end
				elseif ((cmd_name ~ "close_set_enumeration") or else (cmd_name ~ "close_set")) then
						--					if (NOT args.is_empty) then
						--						if (NOT Result.is_empty) then
						--							Result.append ("%N")
						--						end
						--						Result.append (evt_out_str + " does not conform to declaration close_set_enumeration")
						--					end
				else
					if (NOT Result.is_empty) then
						Result.append ("%N")
					end
					Result.append ("Error: unknown event name " + cmd_name)
				end
				loop_counter := loop_counter + 1
			end
		end

end