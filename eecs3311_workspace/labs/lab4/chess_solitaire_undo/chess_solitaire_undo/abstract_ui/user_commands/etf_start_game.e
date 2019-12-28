note
	description: ""
	author: "Rajanbir Singh"
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_START_GAME
inherit
	ETF_START_GAME_INTERFACE
create
	make
feature -- command
	start_game
    	do
    		if not (model.game_mode = 1) then
				model.set_error ("Game already started")
			else
				model.start_game
    		end
			-- perform some update on the model state
			model.default_update
			etf_cmd_container.on_change.notify ([Current])
    	end

end
