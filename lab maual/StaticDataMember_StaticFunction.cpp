#include <iostream> // Header file for input and output 
using namespace std; 

// Class definition
class Student { 
private: 
    // Static data member (common for all objects) 
    static int count; 

public: 
    // Constructor 
    Student() { 
        // Increment count whenever object is created 
        count++; 
    } 

    // Static member function 
    static void showCount() { 
        cout << "Total number of students: " << count << endl; 
        // Static function can access only static data members 
    } 
}; 

// Initialization of static data member 
int Student::count = 0; 

// Main function 
int main() { 
    Student s1; // Create first object 
    Student s2; // Create second object 
    Student s3; // Create third object 

    // Call static member function using class name
    Student::showCount(); 

    return 0; // End of program 
} 