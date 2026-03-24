#include <iostream>
using namespace std;

class MedicalBill {
    float charges;
public:
    MedicalBill(float amt) { // Constructor
        charges = amt;
        cout << "Bill generated: " << charges << endl;
    }
};

int main() {
    MedicalBill patient1(1500.50);
    return 0;
}