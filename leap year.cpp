#include <iostream>
using namespace std;

class DateTool {
public:
    void isLeap(int y) {
        if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
            cout << y << " is a Leap Year." << endl;
        else
            cout << y << " is not a Leap Year." << endl;
    }
};

int main() {
    DateTool dt;
    dt.isLeap(2024);
    return 0;
}