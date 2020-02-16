// Vector2dExample.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "Vector2d.h"


int main()
{
	Vector2d a = Vector2d(1, -2);
	Vector2d b = Vector2d(3, 4);	
	std::cout << (std::string)a << std::endl;
	std::cout << (std::string)b << std::endl;
	std::cout << (std::string)(a + b) << std::endl;
	std::cout << (std::string)(a - b) << std::endl;	
	std::cout << (std::string)(2 * b) << std::endl;
	Vector2d c = Vector2d(5, 5);
	c--;
	std::cout << (std::string)c << std::endl;
	c++;
	std::cout << (std::string)c << std::endl;	 
	std::cout << a * b << std::endl;	
	return 0;
}

