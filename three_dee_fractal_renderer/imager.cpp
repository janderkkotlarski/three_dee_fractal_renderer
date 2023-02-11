#include "imager.h"

imager::imager(const int width, const int height, const Color kolor)
  : m_kolor(kolor), m_width(width), m_height(height)
{
  m_image = GenImageColor(m_width, m_height, m_kolor);

  m_tex = LoadTextureFromImage(m_image);
}
