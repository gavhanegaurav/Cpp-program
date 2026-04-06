#include <iostream>
#include <iomanip>
#include <string> 

using namespace std;

// Definition of class HotelBill
class HotelBill {
private:
    // Data members
    int tableNo, items;
    string customerName;
    long long contact;
    float total, discount, payable;

public:
    // Member function to accept customer details
    void getCustomerDetails() {
        cout << "Enter Table Number: ";
        cin >> tableNo;

        // Clear input buffer before taking string input
        cin.ignore();

        cout << "Enter Customer Name: ";
        getline(cin, customerName);

        cout << "Enter Customer Contact Number: ";
        cin >> contact;
    }

    // Member function to accept order details
    void getOrderDetails() {
        int qty;      // Quantity of each item
        float price;  // Price of each item
        total = 0;    // Initialize total bill amount
        
        items = 3;    // Set items to exactly 3


        // Loop runs exactly 3 times
        for (int i = 1; i <= 3; i++) {
            cout << "\nItem " << i << " Quantity: ";
            cin >> qty;

            cout << "Item " << i << " Price: ";
            cin >> price;

            // Calculate total amount
            total += qty * price;
        }
    }

    // Member function to calculate discount and final payable amount
    void calculateBill() {
        // Apply discount based on total amount
        if (total >= 2000) {
            discount = total * 0.20; // 20% discount
        } else if (total >= 1000) {
            discount = total * 0.10; // 10% discount
        } else {
            discount = 0;            // No discount
        }

        // Calculate final payable amount
        payable = total - discount;
    }

    // Member function to display the final bill
    void displayBill() {
        cout << "\n---------- HOTEL BILL ---------- \n";
        cout << "Table No       : " << tableNo << endl;
        cout << "Customer Name  : " << customerName << endl;
        cout << "Contact Number : " << contact << endl;

        // Display bill amount with two decimal places
        cout << fixed << setprecision(2);
        cout << "Total Amount   : Rs. " << total << endl;
        cout << "Discount       : Rs. " << discount << endl;
        cout << "Payable Amount : Rs. " << payable << endl;
    }
};

int main() {
    // Create an object of HotelBill class
    HotelBill bill;

    // Call member functions using object
    bill.getCustomerDetails();
    bill.getOrderDetails();
    bill.calculateBill();
    bill.displayBill();

    return 0;
}