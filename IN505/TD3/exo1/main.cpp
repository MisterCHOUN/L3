#include <iostream>


#include "Point.hpp"
#include "PointColor.hpp"
#include "Color.hpp"

int main(int argc, char const *argv[])
{
	Point p1(1.f, 2.f), p2;
	std::cout << p1 << " " << p2 << std::endl;
	p2 = Point(3.f, 4.f);
	Point p3(p1);
	std::cout << p1 << " " << p2 << " " << p3 << std::endl;


	Color c1(255, 255, 255), c2;
	std::cout << c1 << " " << c2 << std::endl;
	c2 = Color(125, 125, 125);
	Color c3(c1);
	std::cout << c1 << " " << c2 << " " << c3 << std::endl;


	PointColor pc1(1.f, 2.f, c2), pc2;
	std::cout << pc1 << " " << pc2 << std::endl;
	pc2 = PointColor(3.f, 4.f, c1);
	PointColor pc3(pc1);
	std::cout << pc1 << " " << pc2 << " " << pc3 << std::endl;

	return 0;
}