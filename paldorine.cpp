#include <iostream>
using namespace std;

class Palindrome {
public:
    // Inline member function
    inline void check(int n) {
        int temp = n, rev = 0, rem;
        while(temp != 0) {
            rem = temp % 10;
            rev = rev * 10 + rem;
            temp /= 10;
        }
        if(n == rev) cout << "Palindrome" << endl;
        else cout << "Not Palindrome" << endl;
    }
};