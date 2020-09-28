#include <iostream>

#include "Point.hpp"
#include "Segment.hpp"


std::ostream& operator<<(std::ostream &os, Point &p)
{
	p.afficher(os);
	return os;
}


int main(int argc, char const *argv[])
{
	//exo4 ---------------------------------------------------
	printf("---exo4---\n\n");
	
	Point p(6.f, 9.f);
	std::cout << p << "\n";

	Point f;
	std::cout << f << "\n";

	Point g(p);
	std::cout << g << "\n";

	f.cloner(p);
	std::cout << f << "\n";


	//exo5 ---------------------------------------------------
	printf("\n\n---exo5---\n\n");

	Segment s(0, 0, 0, 10);

	std::cout << "l = " << s.longueur() << "\n";
	std::cout << s.estVertical() << "\n";
	std::cout << s.estHorizontal() << "\n";
	std::cout << s.estSurDiagonale() << "\n\n";



	Point a(0, 0), b(10, 0);
	Segment x(a, b);

	std::cout << "l = " << x.longueur() << "\n";
	std::cout << x.estVertical() << "\n";
	std::cout << x.estHorizontal() << "\n";
	std::cout << x.estSurDiagonale() << "\n\n";


	Segment v(0, 0, 10, 10);

	std::cout << "l = " << v.longueur() << "\n";
	std::cout << v.estVertical() << "\n";
	std::cout << v.estHorizontal() << "\n";
	std::cout << v.estSurDiagonale() << "\n\n";


	return 0;
}