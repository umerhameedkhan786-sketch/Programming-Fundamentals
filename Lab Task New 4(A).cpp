#include <iostream>
using namespace std;

int main() {
    int burgerPrice = 350;
    int drinkPrice = 120;
    int friesPrice = 150;
    
    int burgerQty = 2;
    int drinkQty = 1;
    int friesQty = 1;
    
    int totalBill = (burgerPrice * burgerQty) + (drinkPrice * drinkQty) + (friesPrice * friesQty);
    double salesTax = totalBill * 0.07;
    double finalAmount = totalBill + salesTax;
    int totalItems = burgerQty + drinkQty + friesQty;
    double averageCost = finalAmount / totalItems;
    
    cout << "=== Café Billing ===" << endl;
    cout << "Total Bill: " << totalBill << " PKR" << endl;
    cout << "Sales Tax (7%): " << salesTax << " PKR" << endl;
    cout << "Final Amount: " << finalAmount << " PKR" << endl;
    cout << "Average Cost per Item: " << averageCost << " PKR" << endl;
    
    return 0;
}
