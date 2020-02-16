#pragma once
#include <cmath>
#include <iostream>
#include <string>

class Vector2d
{
private:
	double x, y;
public:
	Vector2d();
	Vector2d(double, double);
	Vector2d(double, double, double, double);
	Vector2d(const Vector2d&);

	~Vector2d();

	void setx(double);
	double getx();

	void sety(double);
	double gety();

	operator std::string();
	Vector2d Vector2d::operator+(const Vector2d& vector) const;
	Vector2d Vector2d::operator-(const Vector2d& vector) const;
	Vector2d Vector2d::operator*(double a) const;
	friend Vector2d operator*(double, Vector2d& vector);
	double Vector2d::operator*(const Vector2d& vector) const;
	Vector2d& operator++();
	Vector2d operator++(int);
	Vector2d& operator--();
	Vector2d operator--(int);
	const Vector2d& operator+=(const Vector2d &);
	const Vector2d& operator-=(const Vector2d &);
	const Vector2d& operator*=(double a);	
	double length();
	double Vector2d::Cos(Vector2d);
	double tangent(Vector2d);
};

