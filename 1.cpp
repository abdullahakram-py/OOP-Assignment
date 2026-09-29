#include <iostream>
using namespace std;

class Calculator
{
public:
    // Add two integers
    int add(int a, int b)
    {
        return a + b;
    }

    // Add two double values
    double add(double a, double b)
    {
        return a + b;
    }

    // Add three integers
    int add(int a, int b, int c)
    {
        return a + b + c;
    }
};

int main()
{
    // Create an object of Calculator
    Calculator calc;

    // Calling add(int, int)
    cout << "Addition of two integers: "
         << calc.add(10, 20) << endl;

    // Calling add(double, double)
    cout << "Addition of two doubles: "
         << calc.add(10.5, 20.5) << endl;

    // Calling add(int, int, int)
    cout << "Addition of three integers: "
         << calc.add(10, 20, 30) << endl;

    return 0;
}