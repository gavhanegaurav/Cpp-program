#include <iostream>
#include <string>
using namespace std;
// Base Class 1: Personal Information
class StudentInfo
{
protected:
  string name;
  int rollNo;

public:
  void getBasicInfo()
  {
    cout << "Enter Student Name: ";
    cin >> name;
    cout << "Enter Roll Number: ";
    cin >> rollNo;
  }
};

// Base Class 2: Academic Results
class Result
{
protected:
  float mathMarks;
  float scienceMarks;

public:
  void getMarks()
  {
    cout << "Enter Marks for Mathematics: ";
    cin >> mathMarks;
    cout << "Enter Marks for Science: ";
    cin >> scienceMarks;
  }
};

// Derived Class: Inheriting from both StudentInfo and Result

class FinalReport : public StudentInfo, public Result
{
public:
  void displayReport()
  {
    float total = mathMarks + scienceMarks;
    float percentage = (total / 200) * 100;

    cout << "\n===============================" << endl;
    cout << "       STUDENT FINAL REPORT      " << endl;
    cout << "===============================" << endl;
    cout << "Name:        " << name << endl;
    cout << "Roll No:     " << rollNo << endl;
    cout << "Math:        " << mathMarks << "/100" << endl;
    cout << "Science:     " << scienceMarks << "/100" << endl;
    cout << "Total:       " << total << "/200" << endl;
    cout << "Percentage:  " << percentage << "%" << endl;
    cout << "===============================" << endl;
  }
};

int main()
{
  FinalReport student1;

  // Accessing methods from both base classes via the derived object
  student1.getBasicInfo();
  student1.getMarks();

  // Displaying the consolidated information
  student1.displayReport();
}