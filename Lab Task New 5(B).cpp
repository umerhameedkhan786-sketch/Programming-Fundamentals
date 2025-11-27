#include <iostream>
using namespace std;

int main() {
    double purchaseAmount;
    bool hasMembershipCard;
    
    cout << "Enter purchase amount: ";
    cin >> purchaseAmount;
    cout << "Do you have membership card? (1 for yes, 0 for no): ";
    cin >> hasMembershipCard;
    
    bool discountApplied = (purchaseAmount > 5000) || hasMembershipCard;
    
    cout << (discountApplied ? "Discount Applied" : "No Discount") << endl;
    
    return 0;
}
