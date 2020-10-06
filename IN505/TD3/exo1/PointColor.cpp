#include "PointColor.hpp"


PointColor::PointColor() : Point() {}

PointColor::PointColor(const float _x, const float _y, const Color& _color) : Point(_x, _y), m_color(_color) {}

PointColor::PointColor(const PointColor& _p)
{
	*this = _p;
}

PointColor::~PointColor() {}

/*------------------------------------------------------------------------*/

const PointColor& PointColor::operator=(const PointColor& _p)
{
	m_x = _p.m_x;
	m_y = _p.m_y;
	m_color = _p.m_color;
	return *this;
}

const PointColor& PointColor::operator=(const PointColor&& _p)
{
	m_x = _p.m_x;
	m_y = _p.m_y;
	m_color = _p.m_color;
	return *this;
}

std::ostream& operator<<(std::ostream& flux, const PointColor& _p)
{
	flux << "{" << "[" << _p.m_x << ", " << _p.m_y << "] " << _p.m_color << "}";
	return flux;
}

/*------------------------------------------------------------------------*/

void PointColor::setColor(const Color& _color) {m_color = _color;}

void PointColor::setColor(const unsigned char _red, const unsigned char _green, const unsigned char _blue)
{
	m_color.setColor(_red, _green, _blue);
}