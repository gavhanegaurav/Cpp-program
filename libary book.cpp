#include <iostream>
using namespace std;

class Book {
    string title;
    int copies;
public:
    void setDetails(string t, int c) {
        title = t;
        copies = c;
    }
    void issueBook() {
        if (copies > 0) {
            copies--;
            cout << "Book Issued. Remaining: " << copies << endl;
        } else {
            cout << "Book Out of Stock!" << endl;
        }
    }
};

int main() {
    Book b1;
    b1.setDetails("C++ Primer", 2);
    b1.issueBook();
    b1.issueBook();
    b1.issueBook(); // Will show out of stock
    return 0;
}