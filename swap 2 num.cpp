#include <iostream>
using namespace std;

class Swapper {
    int a, b;
public:
    void getData(int x, int y) { a = x; b = y; }
    void swapValues() {
        int temp = a;
        a = b;
        b = temp;
    }
    void display() { cout << "a: " << a << ", b: " << b << endl; }
};