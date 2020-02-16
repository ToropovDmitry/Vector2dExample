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

Vector2d Vector2d::operator+(const Vector2d& vector) const
{
	return Vector2d(this->x + vector.x, this->y + vector.y);
}

Vector2d Vector2d::operator-(const Vector2d& vector) const
{
	return Vector2d(this->x - vector.x, this->y - vector.y);
}

Vector2d Vector2d::operator*(double a) const
{
	return Vector2d(this->x * a, this->y * a);
}

Vector2d operator*(double a, Vector2d& vector)
{
	return vector * a;
}

double Vector2d::operator*(const Vector2d& vector) const

{
	return this->x * vector.x + this->y * vector.y;
}

Vector2d& Vector2d::operator++()
{
	x++;
	y++;
	return *this;
}

Vector2d Vector2d::operator++(int)
{
	Vector2d temp(x, y);
	x++;
	y++;
	return temp;
}

Vector2d& Vector2d::operator--()
{
	x--;
	y--;
	return *this;
}

Vector2d Vector2d::operator--(int)
{
	Vector2d temp(x, y);
	x--;
	y--;
	return temp;
}

const Vector2d& Vector2d::operator+=(const Vector2d &vector)
{
	x += vector.x;
	y += vector.y;
	return *this;
}

const Vector2d& Vector2d::operator-=(const Vector2d &vector)
{
	x -= vector.x;
	y -= vector.y;
	return *this;
}

const Vector2d& Vector2d::operator*=(double a)
{
	x *= a;
	y *= a;
	return *this;
}

Vector2d::operator std::string()
{
	std::string s = "(" + std::to_string(x) + ";" + std::to_string(y) + ")";
	return s;
}

double Vector2d::length()
{
	return sqrt(this->x * this->x + this->y * this->y);
}

double Vector2d::Cos(Vector2d other)
{
	return this->operator*(other) / (this->length() * other.length());
}

double Vector2d::tangent(Vector2d vector)
{
	return tan(acos(this->Cos(vector)));
}
