#include "raylib.h"
#include "gamestate.h"

GameState_t *currentState;

void gameStateSwitch(char *stateName, void *data)
{
    if (currentState != NULL && currentState->leave != NULL)
    {
        currentState->leave(data);
    }

    currentState = gameStateGetState(stateName);
    if (currentState->enter != NULL)
    {
        currentState->enter(data);
    }
}

GameState_t *gameStateGetState(char *stateName)
{
    if (strcmp(stateName, "start") == 0)
    {
        return &startState;
    }
    else if (strcmp(stateName, "play") == 0)
    {
        return &playState;
    }
    else if (strcmp(stateName, "end") == 0)
    {
        return &endState;
    }
    else
    {
        return NULL;
    }
}

GameState_t *gameStateGetCurrentState()
{
    return currentState;
}

void gameStateUpdate(float deltaTime)
{
    if (currentState != NULL && currentState->update != NULL)
    {
        currentState->update(deltaTime);
    }
}

void gameStateDraw()
{
    if (currentState != NULL && currentState->draw != NULL)
    {
        currentState->draw();
    }
}

