#ifndef MANDELBROT_2D_H
#define MANDELBROT_2D_H

#include "raylib.h"

class mandelbrot_2d
{
private:
  Vector2 m_posit
  { 0.0f, 0.0f };

  const Vector2 m_start
  { 0.0f, 0.0f };

  Vector2 m_previous
  { 0.0f, 0.0f };

  Vector2 m_current
  { 0.0f, 0.0f };

public:
  mandelbrot_2d();

  void reset();

  void reposit(const Vector2 &posit);

  void iterate();

  void iterate(const int amount);
};

#endif // MANDELBROT_2D_H
