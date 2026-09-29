#include <iostream>
using namespace std;

// Base class
class Employee
{
public:
    // Virtual function
    virtual void calculateSalary()
    {
        cout << "Calculating employee salary" << endl;
    }
};

// Derived class 1
class FullTimeEmployee : public Employee
{
public:
    // Override calculateSalary()
    void calculateSalary() override
    {
        cout << "Full-Time Employee Salary: Rs. 80,000" << endl;
    }
};

// Derived class 2
class PartTimeEmployee : public Employee
{
public:
    // Override calculateSalary()
    void calculateSalary() override
    {
        cout << "Part-Time Employee Salary: Rs. 40,000" << endl;
    }
};

int main()
{
    // Create objects of derived classes
    FullTimeEmployee fullTime;
    PartTimeEmployee partTime;

    // Base-class pointer
    Employee* ptr;

    // Pointer points to FullTimeEmployee object
    ptr = &fullTime;

    // Calls FullTimeEmployee's function
    ptr->calculateSalary();

    // Pointer now points to PartTimeEmployee object
    ptr = &partTime;

    // Calls PartTimeEmployee's function
    ptr->calculateSalary();

    return 0;
}