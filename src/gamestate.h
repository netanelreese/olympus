#ifndef GAMESTATE_H
#define GAMESTATE_H

typedef struct GameState
{
    void (*enter)(void *);
    void (*leave)(void *);
    void (*update)(float);
    void (*draw)();
} GameState_t;

void gameStateSwitch(char *stateName, void *data);
GameState_t *gameStateGetState(char *stateName);
GameState_t *gameStateGetCurrentState();
void gameStateUpdate(float deltaTime);
void gameStateDraw();

#endif

