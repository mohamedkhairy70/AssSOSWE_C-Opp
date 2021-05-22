#pragma once
#include "shape.h"
class Circle : public shape
{
private:
	double RadiusOfTheCircle;
	const double Bai = 3.14;
public:
	Circle(double _Diameter);
	Circle();
	double getBai();
	double calcarea();
	Circle operator= (Circle c);
};

