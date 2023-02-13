#include "mandelbrot_2d.h"

mandelbrot_2d::mandelbrot_2d()
{
  reset();
}

void mandelbrot_2d::reset()
{ m_current = m_start; }

void mandelbrot_2d::reposit(const Vector2 &posit)
{
  m_posit = posit;

  reset();
}

void mandelbrot_2d::iterate()
{
  m_previous = m_current;

  m_current.x = m_posit.x + m_previous.x*m_previous.x - m_previous.y*m_previous.y;
  m_current.y = m_posit.y + 2.0f*m_previous.x*m_previous.y;
}

void mandelbrot_2d::iterate(const int amount)
{


}
