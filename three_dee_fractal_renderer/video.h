#ifndef VIDEO_H
#define VIDEO_H

#include "imager.h"

#include "raylib.h"

#include <string>

class video
{
private:
  const std::string m_title_name
  { "3D Fractal Renderer" };

  const int m_window_width
  { 800 };

  const int m_window_height
  { 800 };

  const int m_fps
  { 120 };

  const int m_square_side
  { m_window_width };

  const int m_square_pos_x
  { 0 };

  const int m_square_pos_y
  { 0 };

  const Color m_square_color
  { GREEN };

  imager m_img
  { m_window_width, m_window_height, m_square_color };

public:
  video();

  void fill_window(const Texture &tex);

  void display();
};

#endif // VIDEO_H
