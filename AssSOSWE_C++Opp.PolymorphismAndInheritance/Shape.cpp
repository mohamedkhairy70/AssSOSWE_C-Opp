#include "Shape.h"

shape::shape(double _Diameter)
{
	Diameter = _Diameter;
}

void shape::setDiameter(double _Diameter)
{
	Diameter = _Diameter;
}

double shape::getDiameter()
{
	
	return Diameter;
	
}

//double shape::calcarea()
//{
//
//	return 0.0;
//
//}