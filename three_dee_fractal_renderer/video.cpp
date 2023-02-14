#include "video.h"

#include "mandelbrot_2d.h"

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
  mandelbrot_2d mandel;

  for (int x_pos{ 0 }; x_pos < m_window_width; ++x_pos)
  {
    for (int y_pos{ 0 }; y_pos < m_window_height; ++y_pos)
    {
      const Vector2 posit
      { m_dult*(float(x_pos)/float(m_window_width) - 0.5f),
        m_dult*(float(y_pos)/float(m_window_height) - 0.5f) };


      // ImageDrawPixel(&m_image, x_pos, y_pos, mandel.point(posit, amount));

      DrawPixel(x_pos, y_pos, mandel.point(posit, m_depth));
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
