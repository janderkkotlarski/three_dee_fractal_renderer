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

void video::display()
{
  SetConfigFlags(FLAG_MSAA_4X_HINT);  // Enable Multi Sampling Anti Aliasing 4x (if available)
  InitWindow(m_window_width, m_window_height, "spheres");

  SetTargetFPS(m_fps);

  Texture tex
  { LoadTextureFromImage(m_img.get_image()) };

  while (!WindowShouldClose())            // Detect window close button or ESC key
  {
    BeginDrawing();

      ClearBackground(BLACK);

      DrawTexture(tex, 0, 0, WHITE);

    EndDrawing();
  }
}
