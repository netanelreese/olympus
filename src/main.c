#include "raylib.h"
#include "gamestate.h"

int main(void)
{
    gameStateSwitch("start", NULL);

    InitWindow(400, 240, "My Game");

    while (!WindowShouldClose())
    {
        gameStateUpdate(GetFrameTime());
        gameStateDraw();

        BeginDrawing();
        ClearBackground(RAYWHITE);
        EndDrawing();
    }

    CloseWindow();

    return 0;
}

