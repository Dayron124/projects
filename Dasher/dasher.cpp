#include "raylib.h"

int main()
{
    const int window_width{960};
    const int window_height{540};

    InitWindow(window_width, window_height, "Dapper_Dasher!");

    // acceleration due to gravity (pixels/frame)/frame
    const int gravity{1};

    // rectangle dimensions
    const int width{50};
    const int heigth{80};

    // is the rectangle in the air?
    bool isInAir{};

    // jump velocity
    const int jumpVel{-22};

    int posY{window_height - heigth};
    int velocity{0};

    SetTargetFPS(144);
    while (!WindowShouldClose())
    {
        //start drawing
        BeginDrawing();
        ClearBackground(WHITE);

        // perform ground check
        if (posY >= window_height - heigth)
        {
            // rectangle is on the ground
            velocity = 0;
            isInAir = false;
        }
        else
        {
            // rectangle is in the air
            velocity += gravity;
            isInAir = true;
        }

        if (IsKeyPressed(KEY_SPACE) && !isInAir)
        {
            velocity += jumpVel;
        }

        //update position
        posY += velocity;

        DrawRectangle(window_width / 2, posY, width, heigth, BLUE);

        //stop drawing
        EndDrawing();
    }

    CloseWindow();
}