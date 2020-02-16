#pragma once
#include <cmath>
#include <iostream>

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

	void print(void);
	Vector2d* sum(Vector2d);
	Vector2d* sub(Vector2d);
	Vector2d* mult(double);
	double scalarMult(Vector2d);
	double length();
	double Vector2d::Cos(Vector2d);
	double tangent(Vector2d);
};

