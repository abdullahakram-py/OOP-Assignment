#include <iostream>
using namespace std;

// Base class
class Employee
{
public:
    // Original display() function
    void display()
    {
        cout << "Employee display function" << endl;
    }
};

// Derived class
class Manager : public Employee
{
public:
    // Overriding display() function
    void display()
    {
        cout << "Manager display function" << endl;
    }
};

int main()
{
    // Create an object of Manager
    Manager m;

    // Calls Manager's display() function
    m.display();

    return 0;
}