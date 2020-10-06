#pragma once


#include <iostream>


class Point
{
public:
	Point();
	Point(const float _x, const float _y);
	Point(const Point& p);
	~Point();

	const Point& operator=(const Point& _p);
	const Point& operator=(const Point&& _p);
	friend std::ostream& operator<<(std::ostream& flux, const Point& _p);

	void setPosition(const float _x, const float _y);

protected:
	float m_x, m_y;
};