#include <iostream>
#include <string>
using namespace std;

int main() {
    int billNumber;
    string customerName, dish;
    float price, gstPercent, finalPrice;

    cout << "Enter Bill Number: ";
    cin >> billNumber;
    cin.ignore();

    cout << "Enter Customer Name: ";
    getline(cin, customerName);

    cout << "Enter Dish Name: ";
    getline(cin, dish);

    cout << "Enter Price of the Dish: ";
    cin >> price;

    cout << "Enter GST percentage: ";
    cin >> gstPercent;

    finalPrice = price + (price * gstPercent / 100);    
    
    cout << "\n----- Restaurant Bill -----\n";
    cout << "Bill Number   : " << billNumber << endl;
    cout << "Customer Name : " << customerName << endl;
    cout << "Dish          : " << dish << endl;
    cout << "Base Price    : Rs. " << price << endl;
    cout << "GST (" << gstPercent << "%) : Rs. " << (price * gstPercent / 100) << endl;
    cout << "Final Price   : Rs. " << finalPrice << endl;
    cout << "---------------------------\n";

    return 0;
}