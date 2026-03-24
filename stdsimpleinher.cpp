/*Program:- 8.1	Write a C++ program to read and print
 students information using two classes and simple inheritance.*/
#include <iostream>
#include <string>
using namespace std;

// Base Class
class Person
{
protected:
    string name;

public:
    void getName()
    {
        cout << "Enter student name: ";
        getline(cin, name);
    }
};

// Derived Class (Simple Inheritance)
class Student : public Person
{
private:
    int rollNumber;
    float marks;

public:
    void getDetails()
    {
        // Accessing base class method
        getName();
        cout << "Enter roll number: ";
        cin >> rollNumber;
        cout << "Enter marks: ";
        cin >> marks;
    }

    void displayInfo()
    {
        cout << "\n--- Student Information ---" << endl;
        cout << "Name: " << name << endl; // Accessing protected member of base class
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main()
{
    Student s;

    // Reading data
    s.getDetails();

    // Printing data
    s.displayInfo();
}