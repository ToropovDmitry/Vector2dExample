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

Vector2d* Vector2d::sum(Vector2d vector)
{
	return new Vector2d(this->x + vector.x, this->y + vector.y);
}

Vector2d* Vector2d::sub(Vector2d vector)
{
	return new Vector2d(this->x - vector.x, this->y - vector.y);
}

Vector2d* Vector2d::mult(double a)
{
	return new Vector2d(this->x * a, this->y * a);
}

double Vector2d::scalarMult(Vector2d vector)
{
	return this->x * vector.x + this->y * vector.y;
}

double Vector2d::length()
{
	return sqrt(this->x * this->x + this->y * this->y);
}

double Vector2d::Cos(Vector2d other)
{
	return this->scalarMult(other) / (this->length() * other.length());
}

double Vector2d::tangent(Vector2d vector)
{
	return tan(acos(this->Cos(vector)));
}
