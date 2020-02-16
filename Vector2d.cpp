#include "stdafx.h"
#include "Vector2d.h"


Vector2d::Vector2d()
{
	this->x = 0;
	this->y = 0;
}

Vector2d::Vector2d(double x, double y)
{
	this->x = x;
	this->y = y;
}

Vector2d::Vector2d(double x0, double x1, double y0, double y1)
{
	this->x = x1 - x0;
	this->y = y1 - y0;
}

Vector2d::Vector2d(const Vector2d& vector)
{
	this->x = vector.x;
	this->y = vector.y;
}

Vector2d::~Vector2d()
{
}

void Vector2d::setx(double x)
{
	this->x = x;
}

double Vector2d::getx()
{
	return this->x;
}

void Vector2d::sety(double y)
{
	this->y = y;
}

double Vector2d::gety()
{
	return this->y;
}

void Vector2d::print()
{
	std::cout << this->x << " " << this->y << std::endl;
}

void Vector2d::sum(Vector2d vector)
{
	x = x + vector.x;
	y = y + vector.y;
}
