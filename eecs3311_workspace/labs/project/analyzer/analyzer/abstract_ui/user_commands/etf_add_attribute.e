note
	description: ""
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_ADD_ATTRIBUTE
inherit
	ETF_ADD_ATTRIBUTE_INTERFACE
create
	make
feature -- command
	add_attribute(cn: STRING ; fn: STRING ; ft: STRING)
		require else
			add_attribute_precond(cn, fn, ft)
    	do
    		if (model.user_mode = 2) then
    			model.set_error ("An assignment instruction is currently being specified for routine " +
    							model.current_cmd + " in class " + model.current_class)
    		elseif not model.class_exists (cn) then
    			model.set_error (cn + " is not an existing class name")
    		elseif model.feature_exists (cn, fn) then
    			model.set_error(fn + " is already an existing feature name in class " + cn)
    		elseif model.return_type_invalid (ft) then
    			model.set_error ("Return type does not refer to a primitive type or an existing class: " + ft)
    		else
    			model.add_attribute(cn, fn, ft)
    		end
			-- perform some update on the model state
			model.default_update
			etf_cmd_container.on_change.notify ([Current])
    	end

end
