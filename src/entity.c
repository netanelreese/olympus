#include "raylib.h"
#include "entity.h"

Entity_t entityNew(float x, float y, float w, float h)
{
    Entity_t e;

    e.x = x;
    e.y = y;
    e.w = w;
    e.h = h;

    return e;
}

void entityUpdate(Entity_t *e, float deltaTime)
{
    // update code goes here
}

void entityDraw(Entity_t *e)
{
    // drawing code goes here
}

