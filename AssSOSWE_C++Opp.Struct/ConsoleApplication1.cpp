// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>



struct Point {
    int x = 0;
    int y = 0;
};
int Sum(int x, int y) {
    return x + y;
}
double Sum(double x, double y) {
    return x + y;
}

Point Sum(Point x, Point y) {
    Point _Point;
    _Point.x = x.x + y.x;
    _Point.y = x.y + y.y;
    return _Point;
}

int main()
{
    int x, y;
    double m, b;
    std::cout << "Pleasee Enter Number int :\n";
    std::cin >> x;

    std::cout << "Pleasee Enter Number int :\n";
    std::cin >> y;


    std::cout << "Sum int : " << Sum(x, y) << ":\n";


    std::cout << "Pleasee Enter Number Double :\n";
    std::cin >> m;

    std::cout << "Pleasee Enter Number Double :\n";
    std::cin >> b;

    std::cout << "Sum int : " << Sum(m, b) << ":\n";


    Point _P;
    _P.x = 2; _P.y = 2;
    Point _P2;
    _P2.x = 4; _P.y = 4;
    Point Result = Sum(_P, _P2);
    std::cout << "X Of Point : " << Result.x << ":\n" << "Y Of Point" << Result.y << ":\n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
