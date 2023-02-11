#include "imager.h"

imager::imager(const int width, const int height, const Color kolor)
  : m_kolor(kolor), m_width(width), m_height(height)
{
  m_image = GenImageColor(m_width, m_height, m_kolor);
}

Image imager::get_image()
{ return m_image; }

void imager::redraw()
{
  for (int x_pos{ 0 }; x_pos < m_width; ++x_pos)
  {
    for (int y_pos{ 0 }; y_pos < m_height; ++y_pos)
    {
      ImageDrawPixel(&m_image, x_pos, y_pos, RED);
    }
  }
}
