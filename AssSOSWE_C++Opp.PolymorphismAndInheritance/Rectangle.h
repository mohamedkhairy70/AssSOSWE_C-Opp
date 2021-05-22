#pragma once
class Rectangle
{
private:
	double length;
	double Width;
	double Diameter;
	double Perimeter;
	double SmallerAngleBetweenTheTwoDiagonals;
public:
	void setlength(double _length);
	double getlength();
	void setWidth(double _Width);
	double getWidthe();
	void setDiameter(double _Diameter);
	double getDiameter();
	void setPerimeter(double _Perimeter);
	double getPerimeter();
	void setSmallerAngleBetweenTheTwoDiagonals(double _SmallerAngleBetweenTheTwoDiagonals);
	double getSmallerAngleBetweenTheTwoDiagonals();

	double getRectangleAreaBylengthAndWidth();
	double getRectangleAreaByDiameterandOneOfTheDimensions();
	double getRectangleAreaByPerimeterIsARectangle();
	double getRectangleAreaBySmallerAngleBetweenTheTwoDiagonals();
};

