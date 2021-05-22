#pragma once
#include "shape.h"

class picture
{
private:
	int size = 0;
	shape* _shape[3];
	double TotalArea = 0;
public:
	picture(shape* shapes[], int _size);
	void GetPrintCalcArea();
	void SetShape(shape* shapes[], int _size);
	picture getshape();
	picture operator= (picture c);
	double GetTotalArea();
};

