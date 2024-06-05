#include <iostream>
#include "point2D.h"

int main()
{
	point2D p1{}, p2{};
	p1.SetXY(2, 2);
	p2.SetXY(4, 3);

	p1.Print();
	std::cout << p1.Distance() << std::endl;

	p2.Print();
	std::cout << p2.Distance() << std::endl;
}