#include <iostream>
#include <string>
using namespace std;

// Student class
class Student
{
public:
    string name;
    float marks;

    // Function to display student information
    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main()
{
    // 1. Create a Student object
    Student student;

    // Assign values
    student.name = "Hanzla";
    student.marks = 80;

    // 2. Create a pointer to Student object
    Student* ptr;

    // 3. Store address of student object
    ptr = &student;

    // 4. Access object using pointer and -> operator
    ptr->display();

    // Access individual data members using ->
    cout << "Name using pointer: " << ptr->name << endl;
    cout << "Marks using pointer: " << ptr->marks << endl;

    return 0;
}