#pragma once

#include <iostream>

class Point
{
public:
	Point();
	Point(const float x, const float y);
	Point(const Point &p);
	~Point();

	void afficher() const;
	void cloner(const Point &p);
	const float getX();
	const float getY();
	
private:
	float X, Y;
};