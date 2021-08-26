#include "raylib.h"
int main()
{    
    //window dimensions
        int Width;
        Width = 960;
        int height{540};
        InitWindow(Width, height, "Darren's Window");

        //circle dimensions
        int circle_x{175};
        int circle_y{100};
        int radius{25};
        
        //rectangle dimensions
        int axe_x{400};
        int axe_y{0};

        SetTargetFPS(144);
        while (WindowShouldClose() == false)
    {
          BeginDrawing();
          ClearBackground(WHITE);

          //game logic begins
          int rectangle_width{50};
          int rectangle_height{50};

          DrawCircle(circle_x, circle_y, radius, BLUE);
          DrawRectangle(axe_x, axe_y, rectangle_height, rectangle_width, RED);

          //move the axe
          axe_x = axe_y + 10;

          if (IsKeyDown(KEY_A) && circle_x > 0)
          {
              circle_x -= 10;
          }
          
          if (IsKeyDown(KEY_D) && circle_x < 960)
          {
              circle_x += 10;
          }
          
          if (IsKeyDown(KEY_W) && circle_y > 0)
          {
              circle_y -=10;
          }
          
          if (IsKeyDown(KEY_S) && circle_y < 540)
          {
              circle_y += 10;
          }
          
          //game logic ends
          EndDrawing();
    }
}




 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 /*
      int = whole number
      float = 6 to 7 digits, less memory
      Boolean = True or False 
    
    
      float root_beer;
      root_beer = 1.99;
      double cheese_burger;
      cheese_burger = 5.99;
      bool shouldHaveLunch;
      shouldHaveLunch = true;

      float root_beer = 1.99;
      double cheese_burger{5.99};
      bool shouldHaveLunch {};
    
      bool equal { 4 == 9 }; //false
      bool notequal { 4 != 9 }; //true
      bool less { 4 < 9 }; //true
      bool greater{ 4 > 9}; //false
      bool lessEqual{ 4 <= 9}; //true
      bool greaterEqual{ 4 >= 9}; //false
   */
