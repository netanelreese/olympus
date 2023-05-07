#ifndef ENTITY_H
#define ENTITY_H

typedef struct Entity
{
    float x, y;
    float w, h;
} Entity_t;

Entity_t entityNew(float x, float y, float w, float h);
void entityUpdate(Entity_t *e, float deltaTime);
void entityDraw(Entity_t *e);

#endif

