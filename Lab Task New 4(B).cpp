#include <iostream>
using namespace std;

int main() {
    int basePrice = 1200;
    
    double afterDiscount = basePrice - (basePrice * 0.25);
    double afterServiceCharge = afterDiscount + (afterDiscount * 0.08);
    double finalCost = afterServiceCharge + 50;
    
    cout << "=== Train Ticket Calculation ===" << endl;
    cout << "Base Price: " << basePrice << " PKR" << endl;
    cout << "After 25% Discount: " << afterDiscount << " PKR" << endl;
    cout << "After 8% Service Charge: " << afterServiceCharge << " PKR" << endl;
    cout << "Final Cost (with Rs. 50 fee): " << finalCost << " PKR" << endl;
    
    return 0;
}
