#ifndef GAMESTATE_H
#define GAMESTATE_H

#include "raylib.h"

typedef struct {
    // Game state data...
} GameState;

void InitGameState(GameState* state);
void UpdateGameState(GameState* state);
void DrawGameState(GameState* state);

#endif // GAMESTATE_H

