#include "Square.h"

Square::Square(double _Diameter): shape(_Diameter)
{
}

double Square::calcarea()
{
    return  getDiameter() * getDiameter();
}

