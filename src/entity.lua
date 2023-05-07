-- entity.lua

-- Create entity module
local Entity = {}

-- Define entity class
local EntityClass = {}
EntityClass.__index = EntityClass

function EntityClass:new(x, y, w, h)
  local entity = {
    x = x or 0,
    y = y or 0,
    w = w or 16,
    h = h or 16
  }
  setmetatable(entity, EntityClass)
  return entity
end

function EntityClass:update()
  -- TODO: Add entity update logic
end

function EntityClass:draw()
  -- Draw entity
  PD.drawRectangle(self.x, self.y, self.w, self.h, PD.color(255, 255, 255))
end

-- Set entity class as Entity module
setmetatable(Entity, {__index = EntityClass})

return Entity

