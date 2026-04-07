/* WAP to demonstrate Class and object: Write a CPP program to
calculate the percentage of n number of subject’s marks of n number of
students. */ 

#include <iostream> 
#include <string> // Added to ensure the string data type works correctly

using namespace std; 

// Class definition 
class Student { 
private: 
    // Data members
    int rollNo;         // Stores roll number of the student 
    string name;        // Stores name of the student
    string div;         // Stores Division of the student 
    float marks[10];    // Stores marks of subjects (maximum 10)
    float total;        // Stores total marks 
    float percentage;   // Stores calculated percentage 
    int n;              // Stores number of subjects 

public: 
    // Function to accept student details and marks 
    void getData() { 
        cout << "\nEnter Roll Number: "; 
        cin >> rollNo; 

        cin.ignore(); // Clear the input buffer before reading strings

        cout << "Enter name: "; 
        getline(cin, name); 

        cout << "Enter Division: "; 
        getline(cin, div); 

        cout << "Enter number of subjects: "; 
        cin >> n; 

        total = 0; // Initialize total to zero 

        // Loop to accept marks of each subject 
        for (int i = 0; i < n; i++) { 
            cout << "Enter marks of subject " << i + 1 << ": "; 
            cin >> marks[i]; 
            total = total + marks[i]; // Add marks to total 
        } 
    } 

    // Function to calculate percentage 
    void calculate() { 
        // Assuming marks are out of 100, the average is the percentage
        percentage = total / n; 
    } 

    // Function to display student result 
    void display() { 
        cout << "\nRoll Number : " << rollNo; 
        cout << "\nName        : " << name; 
        cout << "\nDivision    : " << div; 
        cout << "\nTotal Marks : " << total; 
        cout << "\nPercentage  : " << percentage << "%\n"; 
    } 
}; 

// Main function 
int main() { 
    int stud; // Stores number of students 

    cout << "Enter number of students: "; 
    cin >> stud; 

    Student s[10]; // Array of objects of Student class (maximum 10 students)

    // Loop for each student 
    for (int i = 0; i < stud; i++) { 
        cout << "\n--- Student " << i + 1 << " ---"; 
        
        s[i].getData();   // Call function to accept data
        s[i].calculate(); // Call function to calculate percentage 
        s[i].display();   // Call function to display result 
    } 

    return 0; // End of program 
}