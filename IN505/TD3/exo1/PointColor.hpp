#pragma once

#include <iostream>

#include "Point.hpp"
#include "Color.hpp"


class PointColor : public Point
{
public:
	PointColor();
	PointColor(const float _x, const float _y, const Color& _color);
	PointColor(const PointColor& _p);
	~PointColor();

	const PointColor& operator=(const PointColor& _p);
	const PointColor& operator=(const PointColor&& _p);
	friend std::ostream& operator<<(std::ostream& flux, const PointColor& _p);

	void setColor(const Color& _color);
	void setColor(const unsigned char _red, const unsigned char _green, const unsigned char _blue);
	

private:
	Color m_color;
};