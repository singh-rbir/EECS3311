note
	description: ""
	author: "Rajanbir Singh"
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_RESET_GAME
inherit
	ETF_RESET_GAME_INTERFACE
create
	make
feature -- command
	reset_game
    	do
    		if (model.game_mode < 2) then
    			model.set_error ("Game not yet started")
    		else
    			model.reset_game
    		end
			-- perform some update on the model state
			model.default_update
			etf_cmd_container.on_change.notify ([Current])
    	end

end
