#include "Circle.h"


Circle::Circle(double _Diameter) : shape(_Diameter)
{

}

Circle::Circle() : shape(1)
{
	
}


double Circle::getBai()
{
	return Bai;
}

double Circle::calcarea()
{
	return Bai * (getDiameter() * getDiameter());
}

Circle Circle::operator=(Circle c)
{
	this->setDiameter(c.getDiameter());
	Circle f = *this;
	return f;
}

