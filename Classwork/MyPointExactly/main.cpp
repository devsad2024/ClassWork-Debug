#include "Point.h"
#include <iostream>


int main()
{
	Point p1(1, 2);
	Point p2;
	p2 = p1;
	Point p3(p2);

	std::cout << "p3=" << p3 << std::endl;
	std::cout << "p2=" << p2 << std::endl;

	return 0;
}
