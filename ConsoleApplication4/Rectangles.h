#pragma once
#include "shape.h"
class Rectangles : public shape
{
private:
	double Width;

public:
	Rectangles(double _Diameter, double _Width);

	void setWidth(double _Width);
	double getWidthe();


	double calcarea();
};

