#include "Point.hpp"


Point::Point()
	: X(0.f), Y(0.f)
{

}

Point::Point(const float x, const float y)
	: X(x), Y(y)
{

}

Point::Point(const Point &p)
	: X(p.X), Y(p.Y)
{

}


Point::~Point()
{
	std::cout << "appel au destructeur" << std::endl;
}

/*-------------------------------------------------------------------------*/

void Point::afficher() const
{
	printf("(%f,%f)\n", this->X, this->Y);
}

void Point::cloner(const Point &p)
{
	this->X = p.X;
	this->Y = p.Y;
}

const float Point::getX()
{
	return this->X;
}

const float Point::getY()
{
	return this->Y;
}
