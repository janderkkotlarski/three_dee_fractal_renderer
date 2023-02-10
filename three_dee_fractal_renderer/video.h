#ifndef VIDEO_H
#define VIDEO_H

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
  { 100 };

  const int m_square_pos_x
  { 50 };

  const int m_square_pos_y
  { 30 };

  const Color m_square_color
  { GREEN };



public:
  video();

  void display();
};

#endif // VIDEO_H
