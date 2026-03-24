// Program: Employee Info with Multilevel & Hierarchical Inheritance Program Code :
#include <iostream>
#include <string>
using namespace std;

// Base class: Employee
class Employee
{
protected:
    int empId;
    string empName;
    float basicSalary;

public:
    void getEmployeeInfo()
    {
        cout << "Enter Employee ID: ";
        cin >> empId;
        cout << "Enter Employee Name: ";
        cin >> empName;
        cout << "Enter Basic Salary: ";
        cin >> basicSalary;
    }
};

// Derived class (Multilevel): Department
class Department : public Employee
{
protected:
    string deptName;

public:
    void getDepartmentInfo()
    {
        cout << "Enter Department Name: ";
        cin>>deptName;
    }
};

// Derived class (Multilevel): PF (from Department)

class PF : public Department
{
protected:
    float pfAmount;

public:
    void calculatePF()
    {
        pfAmount = basicSalary * 0.12; // 12% of basic salary
    }

    void displayPFInfo()
    {
        cout << "\n--- Employee Details (Multilevel Inheritance) ---\n";
        cout << "Employee ID	: " << empId << endl;
        cout << "Employee Name : " << empName << endl;
        cout << "Department	: " << deptName << endl;
        cout << "Basic Salary : " << basicSalary << endl;
        cout << "PF Amount (12%) : " << pfAmount << endl;
    }
};

// Another Derived class (Hierarchical) from Employee
class Project : public Employee
{
protected:
    string projectName;

public:
    void getProjectInfo()
    {
        cout << "Enter Project Name: ";
        getline(cin, projectName);
    }

    void displayProjectInfo()
    {
        cout << "\n--- Employee Project Info (Hierarchical Inheritance) ---\n";
        cout << "Employee ID	: " << empId << endl;
        cout << "Employee Name : " << empName << endl;
        cout << "Project Name  : " << projectName << endl;
    }
};

int main()
{
    // Object for multilevel inheritance
    PF emp1;
    cout << "--- Enter Employee Info for PF ---\n";
    emp1.getEmployeeInfo();
    emp1.getDepartmentInfo();
    emp1.calculatePF();
    emp1.displayPFInfo();

    // Object for hierarchical inheritance
    Project emp2;
    cout << "\n--- Enter Employee Info for Project ---\n";
    emp2.getEmployeeInfo();
    emp2.getProjectInfo();
    emp2.displayProjectInfo();
}
