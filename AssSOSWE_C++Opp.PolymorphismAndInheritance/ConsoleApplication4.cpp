// ConsoleApplication4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#include "picture.h"
#include "Square.h"
#include "Circle.h"
#include "Rectangles.h"

using namespace std;

void PrintCalcArea(Square* square, Rectangles* rectangles, Circle* circle)
{
    shape* _shape[3];
    _shape[0] = square;
    _shape[1] = rectangles;
    _shape[2] = circle;

    picture picture(_shape, 3);
    picture.GetPrintCalcArea();
    cout << "Total Calc Area = " << picture.GetTotalArea() << "\n";
    cout << "-----------------------------------------------------\n";
}

int main()
{
    Square square(5);
    Rectangles rectangles(10, 5);
    Circle circle(5.0);
    PrintCalcArea(&square, &rectangles, &circle);

    square.setDiameter(9);
    rectangles.setDiameter(20);
    rectangles.setWidth(5);
    circle.setDiameter(10.0);

    PrintCalcArea(&square, &rectangles, &circle);

}

