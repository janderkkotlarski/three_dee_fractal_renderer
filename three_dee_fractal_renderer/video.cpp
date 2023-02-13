#include "video.h"



// #define RLIGHTS_IMPLEMENTATION
// #include "rlights.h"

/*
#if defined(PLATFORM_DESKTOP)
    #define GLSL_VERSION            330
#else   // PLATFORM_RPI, PLATFORM_ANDROID, PLATFORM_WEB
    #define GLSL_VERSION            100
#endif
*/

video::video()
{

}

void video::fill_window()
{
  for (int x_pos{ 0 }; x_pos < m_window_width; ++x_pos)
  {
    for (int y_pos{ 0 }; y_pos < m_window_height; ++y_pos)
    {
      DrawPixel(x_pos, y_pos, RED);
      // DrawTexture(tex, x_pos, y_pos, RED);
    }
  }
}

void video::display()
{
  SetConfigFlags(FLAG_MSAA_4X_HINT);  // Enable Multi Sampling Anti Aliasing 4x (if available)
  InitWindow(m_window_width, m_window_height, "spheres");

  SetTargetFPS(m_fps);

  Image img
  { GenImageColor(1, 1, WHITE) };

  Texture tex
  { LoadTextureFromImage(img) };

  while (!WindowShouldClose())            // Detect window close button or ESC key
  {
    BeginDrawing();

      ClearBackground(BLACK);

      DrawTexture(tex, 0, 0, WHITE);

      fill_window();

      DrawFPS(20, 20);

    EndDrawing();


  }
}
