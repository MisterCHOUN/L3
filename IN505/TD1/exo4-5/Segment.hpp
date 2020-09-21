#pragma once

#include <iostream>
#include <cmath>

#include "Point.hpp"

class Segment
{
public:
	Segment();
	Segment(float x1, float y1, float x2, float y2);
	Segment(const Point &point1, const Point &point2);
	~Segment();
	
	float longueur();
	bool estVertical();
	bool estHorizontal();
	bool estSurDiagonale();

private:
	Point p1, p2;
};