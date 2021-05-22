// ConsoleApplication2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int Sum() {

    int x, y;
    std::cout << "Please Enter Number One int :\n";
    std::cin >> x;

    std::cout << "Please Enter Number Two int :\n";
    std::cin >> y;

    return x + y;
}
double Sub() {
    double m, b;
    std::cout << "Please Enter Number One Double :\n";
    std::cin >> m;

    std::cout << "Please Enter Number Two Double :\n";
    std::cin >> b;
    return m - b;
}
double Div() {
    double m, b;
    std::cout << "Please Enter Number One Double :\n";
    std::cin >> m;

    if (m == 0) {
        std::cout << "Please add the number One Double again. :\n";
        std::cin >> m;
    }

    std::cout << "Please Enter Number Two Double :\n";
    std::cin >> b;
    
    return m / b;
}
double Hit() {
    double m, b;
    std::cout << "Pleasee Enter Number One Double :\n";
    std::cin >> m;

    std::cout << "Please Enter Number Two Double :\n";
    std::cin >> b;

    return m * b;
}

int main()
{
    char Op;
   
    std::cout << "Please Enter Oprator For Calc +,-,/,*\n";
    std::cin >> Op;
    switch (Op)
    {
    case '+':
        std::cout << Sum();
        break;
    case '-':
        std::cout << Sub();
        break;
    case '/':
        std::cout << Div();
        break;
    case '*':
        std::cout << Hit();
        break;
    default:
        std::cout << "Can Not Calc\n";
        break;
    }

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
