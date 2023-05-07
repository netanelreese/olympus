#include "raylib.h"
#include "gamestate.h"
#include "entity.h"
#include <playdate.h>

int main(int argc, char* argv)
{
    // Initialize the Playdate SDK
    pd_init();

    // Initialize the Raylib window
    const int screenWidth = 400;
    const int screenHeight = 240;
    InitWindow(screenWidth, screenHeight, "My Playdate Game");

    // Set up the game loop
    while (!WindowShouldClose()) {
        // Process input events from the Playdate hardware
        pd_poll_events();

        // Update and render the game...

        // Clear the screen and draw a message
        BeginDrawing();
        ClearBackground(RAYWHITE);
        DrawText("Hello, Playdate!", 10, 10, 20, BLACK);
        EndDrawing();
    }

    // Close the Raylib window and shut down the Playdate SDK
    CloseWindow();
    pd_shutdown();

    return 0;
}

