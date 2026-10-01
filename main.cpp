#include <iostream>
#include "OperatorOverloading.h"

int main() 
{
	Point p1(1, 4);
	Point p2(6, 2);
	
	bool result1 = p1 == p2;
	bool result2 = p1 != p2;

	if (result1)
		std::cout << "Points are equal." << std::endl;
	else
		std::cout << "Points are not equal." << std::endl;

	std::cout << std::endl;

	if (result2)
		std::cout << "Points are not equal." << std::endl;
	else
		std::cout << "Points are equal." << std::endl;

	std::cout << std::endl;

	Point c = p1 + p2;
	c.Print();

	std::cout << std::endl;

	Point d = p1 - p2;
	d.Print();

	std::cout << std::endl;

	Point e = p1 * p2;
	e.Print();

	std::cout << std::endl;

	Point f = p1 / p2;
	f.Print();

	Point g(10, 12);
	g++;
	++g;
	g.Print();

	std::cout << std::endl;

	Point h(10, 20);
	h--;
	--h;
	h.Print();

	std::cout << std::endl;
	
	Point l;
	std::cout << l[0] << std::endl;

	
}