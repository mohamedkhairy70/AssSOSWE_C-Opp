#include "Rectangles.h"

Rectangles::Rectangles(double _Diameter, double _Width): shape(_Diameter)
{
	Width = _Width;
}

void Rectangles::setWidth(double _Width)
{
	Width = _Width;
}

double Rectangles::getWidthe()
{
	return Width;
}

double Rectangles::calcarea()
{
	return  Width * getDiameter();
}

