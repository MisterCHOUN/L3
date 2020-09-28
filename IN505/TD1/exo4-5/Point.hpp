#pragma once

#include <iostream>

class Point
{
public:
	Point();
	Point(const float x, const float y);
	Point(const Point &p);
	~Point();

	void afficher(std::ostream &os) const;
	void cloner(const Point &p);
	const float getX();
	const float getY();

	friend std::ostream& operator<<(std::ostream &os, Point &p);

private:
	float X, Y;
};