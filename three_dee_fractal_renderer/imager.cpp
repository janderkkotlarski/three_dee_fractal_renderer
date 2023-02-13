#include "imager.h"

#include "mandelbrot_2d.h"

imager::imager(const int width, const int height, const Color kolor)
  : m_kolor(kolor), m_width(width), m_height(height)
{
  m_image = GenImageColor(m_width, m_height, m_kolor);
}

Image imager::get_image()
{ return m_image; }

void imager::redraw()
{
  mandelbrot_2d mandel;

  for (int x_pos{ 0 }; x_pos < m_width; ++x_pos)
  {
    for (int y_pos{ 0 }; y_pos < m_height; ++y_pos)
    {
      const Vector2 posit
      { 0.5f*float(x_pos)/float(m_width) - 1.0f,
        0.5f*float(y_pos)/float(m_height) - 1.0f };

      const int amount
      { 10 };

      // ImageDrawPixel(&m_image, x_pos, y_pos, mandel.point(posit, amount));

      DrawPixel(x_pos, y_pos, RED);
    }
  }
}
