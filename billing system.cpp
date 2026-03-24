#include <iostream>
using namespace std;

class Bill {
    float units, total;
public:
    void getUnits() { cin >> units; }
    void calculate() {
        total = units * 5; // Assuming 5 per unit
        float discount = total * 0.02;
        cout << "Final Bill (2% Discount): " << total - discount << endl;
    }
};