#include <iostream>
#include <string>
using namespace std;

// Base class
class Person
{
public:
    string name;
    int age;

    // Function to display Person information
    void displayPerson()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

// Derived class inheriting from Person
class Student : public Person
{
public:
    int rollNo;
    string department;

    // Function to display Student information
    void displayStudent()
    {
        cout << "Roll No: " << rollNo << endl;
        cout << "Department: " << department << endl;
    }
};

int main()
{
    // Create an object of Student
    Student s;

    // Assign values to inherited members
    s.name = "Hanzla";
    s.age = 20;

    // Assign values to Student members
    s.rollNo = 72;
    s.department = "Software Engineering";

    // Display Person information
    s.displayPerson();

    // Display Student information
    s.displayStudent();

    return 0;
}