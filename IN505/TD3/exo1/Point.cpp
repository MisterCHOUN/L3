#include "Point.hpp"


Point::Point() : m_x(0.f), m_y(0.f) {}

Point::Point(const float _x, const float _y) : m_x(_x), m_y(_y) {}

Point::Point(const Point& p)
{
	*this = p;
}

Point::~Point() {}

/*------------------------------------------------------------------------*/

const Point& Point::operator=(const Point& _p)
{
	m_x = _p.m_x;
	m_y = _p.m_y;
	return *this;
}

const Point& Point::operator=(const Point&& _p)
{
	m_x = _p.m_x;
	m_y = _p.m_y;
	return *this;
}

std::ostream& operator<<(std::ostream& flux, const Point& _p)
{
	flux << "[" << _p.m_x << ", " << _p.m_y << "]";
	return flux;
}

/*------------------------------------------------------------------------*/

void Point::setPosition(const float _x, const float _y)
{
	m_x = _x;
	m_y = _y;
}