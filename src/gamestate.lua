-- gamestate.lua

-- Load entity module
import "entity"

-- Create gamestate module
local GameState = {}

-- Define gamestate class
local GameStateClass = {}
GameStateClass.__index = GameStateClass

function GameStateClass:new()
  local gamestate = {
    entities = {}
  }
  setmetatable(gamestate, GameStateClass)

  -- Create entities
  gamestate:addEntity(Entity:new(50, 50))
  gamestate:addEntity(Entity:new(100, 100))
  gamestate:addEntity(Entity:new(150, 150))

  return gamestate
end

function GameStateClass:update()
  -- Update entities
  for _, entity in ipairs(self.entities) do
    entity:update()
  end
end

function GameStateClass:draw()
  -- Draw entities
  for _, entity in ipairs(self.entities) do
    entity:draw()
  end
end

function GameStateClass:addEntity(entity)
  table.insert(self.entities, entity)
end

-- Set gamestate class as GameState module
setmetatable(GameState, {__index = GameStateClass})

return GameState

