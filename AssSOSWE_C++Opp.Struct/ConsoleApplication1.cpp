// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

struct Point {
    int x = 0;
    int y = 0;
    Point operator+ (Point c)
    {
        x += c.x;
        y += c.y;
        return *this;
    }
};

template<typename T>
T Sum(T x, T y) {
    return x + y;
}


int main()
{

    std::cout << "Sum int : " << Sum(5, 4) << ":\n";


    std::cout << "Sum int : " << Sum(5.5, 4.5) << ":\n";


    Point _P;
    _P.x = 2; _P.y = 2;
    Point _P2;
    _P2.x = 4; _P.y = 4;
    Point Result = Sum(_P, _P2);
    std::cout << "X Of Point : " << Result.x << "\n" << "Y Of Point : " << Result.y << "\n";
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
