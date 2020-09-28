#include "Segment.hpp"


Segment::Segment()
	: p1(0, 0), p2(0, 0)
{

}

Segment::Segment(float x1, float y1, float x2, float y2)
	: p1(x1, y1), p2(x2, y2)
{

}

Segment::Segment(const Point &point1, const Point &point2)
	: p1(point1), p2(point2)
{

}

Segment::~Segment()
{
	
}


/*-------------------------------------------------------------------------*/

std::ostream& operator<<(std::ostream &os, Segment &p)
{
	os << "{" << p.getPoint1() << p.getPoint2() << "}";
	return os;
}

/*-------------------------------------------------------------------------*/


float Segment::longueur()
{
	return sqrt( pow(p2.getX() - p1.getX(), 2) + pow(p2.getY() - p1.getY(), 2) );
}

bool Segment::estVertical()
{
	return p1.getX() == p2.getX();
}

bool Segment::estHorizontal()
{
	return p1.getY() == p2.getY();
}

bool Segment::estSurDiagonale()
{
	return !(this->estHorizontal() || this->estVertical());
}

Point& Segment::getPoint1()
{
	return p1;
}

Point& Segment::getPoint2()
{
	return p2;
}
