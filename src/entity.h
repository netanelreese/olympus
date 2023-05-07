#ifndef ENTITY_H
#define ENTITY_H

#include <raylib.h>

typedef struct {
    Vector2 position;
    Vector2 velocity;
    Color color;
} Entity;

void InitEntity(Entity* entity, Vector2 position, Vector2 velocity, Color color);
void UpdateEntity(Entity* entity);
void DrawEntity(Entity* entity);

#endif // ENTITY_H

