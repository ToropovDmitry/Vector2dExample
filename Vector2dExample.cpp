// Vector2dExample.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "Vector2d.h"


int main()
{
	Vector2d a = Vector2d(1, -2);
	Vector2d b = Vector2d(0, 3, 0, 4);
	Vector2d c = Vector2d(b);
	c.print();
	c.setx(5);
	c.sety(8);
	c.print();
	std::cout << a.length() << std::endl;
	std::cout << b.length() << std::endl;
	std::cout << a.scalarMult(b) << std::endl;
	std::cout << a.tangent(b) << std::endl;
	a.print();
	b.print();
	a.sum(b);
	a.print();
	a.sub(b);
	a.print();
	a.mult(2);
	a.print();
	return 0;
}

