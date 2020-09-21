#include <iostream>

#include "Point.hpp"
#include "Segment.hpp"


int main(int argc, char const *argv[])
{
	//exo4 ---------------------------------------------------
	printf("---exo4---\n\n");
	
	Point p(12.f, 13.f);
	p.afficher();

	Point f;
	f.afficher();

	Point g(p);
	g.afficher();

	f.cloner(p);
	f.afficher();


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