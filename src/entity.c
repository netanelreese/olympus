#include "entity.h"

void InitEntity(Entity* entity, Vector2 position, Vector2 velocity, Color color) {
    entity->position = position;
    entity->velocity = velocity;
    entity->color = color;
}

void UpdateEntity(Entity* entity) {
    // Update the entity's position based on its velocity...
    entity->position.x += entity->velocity.x;
    entity->position.y += entity->velocity.y;
}

void DrawEntity(Entity* entity) {
    // Draw the entity...
    DrawCircle(entity->position.x, entity->position.y, 10.0f, entity->color);
}

