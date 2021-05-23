#pragma once

class shape
{
private:
	double Diameter;
public:
	shape(double _Diameter);

	void setDiameter(double _Diameter);

	double getDiameter();

	virtual double calcarea() = 0;
};
