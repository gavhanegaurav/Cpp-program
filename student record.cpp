#include <iostream>
using namespace std;

class Student {
    string name;
    int roll;
public:
    void setData() {
        cout << "Enter Name and Roll: ";
        cin >> name >> roll;
    }
    void display() {
        cout << "Name: " << name << ", Roll: " << roll << endl;
    }
};

int main() {
    Student s[10]; // Array of objects
    for(int i=0; i<10; i++) s[i].setData();
    for(int i=0; i<10; i++) s[i].display();
    return 0;
}