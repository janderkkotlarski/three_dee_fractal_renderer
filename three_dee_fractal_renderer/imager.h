#ifndef IMAGER_H
#define IMAGER_H

#include "raylib.h"

class imager
{
private:
  Color m_kolor
  { 0, 0, 0, 255 };

  const int m_width
  { 0 };

  const int m_height
  { 0 };

  Image m_image;

  Texture m_tex;

public:
  imager(const int width, const int height, const Color kolor);

};

#endif // IMAGER_H
