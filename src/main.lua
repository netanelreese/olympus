-- main.lua

-- Load entity and gamestate modules
import "entity"
import "gamestate.lua"

-- Define constants
SCREEN_WIDTH = 400
SCREEN_HEIGHT = 240

-- Initialize game state
local gamestate = GameState:new()

function PD.update()
  -- Update game state
  gamestate:update()
end

function PD.draw()
  -- Clear screen
  PD.clear()

  -- Draw game state
  gamestate:draw()
end


