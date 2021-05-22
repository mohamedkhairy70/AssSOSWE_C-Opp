#include "picture.h"
#include <iostream>
using namespace std;

picture::picture(shape* shapes[], int _size)
{
	size = _size;
	for (int i = 0; i < size; i++)
	{
		_shape[i] = shapes[i];
		TotalArea += _shape[i]->calcarea();
	}
}

void picture::SetShape(shape* shapes[], int _size)
{
	size = _size;
	for (int i = 0; i < size; i++)
	{
		_shape[i] = shapes[i];
		TotalArea += _shape[i]->calcarea();
	}
}

picture picture::getshape()
{
	this->SetShape(_shape, size);
	return *this;
}

void picture::GetPrintCalcArea()
{
	for (int i = 0; i < size; i++)
	{
		cout << _shape[i]->getDiameter() << " : "  << _shape[i]->calcarea() << endl;;
		
	}
}

picture picture::operator=(picture c)
{
	this->SetShape(c._shape,c.size);
	return *this;
}

double picture::GetTotalArea()
{
	return TotalArea;
}
