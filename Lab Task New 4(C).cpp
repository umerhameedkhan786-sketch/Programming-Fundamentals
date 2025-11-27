#include <iostream>
using namespace std;

int main() {
    int requiredStock = 500;
    int currentStock = 420;
    
    bool isSufficient = currentStock >= requiredStock;
    bool isLessThan50Percent = currentStock < (requiredStock * 0.5);
    bool isExactlyEqual = currentStock == requiredStock;
    bool shortageGreaterThan50 = (requiredStock - currentStock) > 50;
    
    cout << "=== Warehouse Stock Analysis ===" << endl;
    cout << "Is stock sufficient? " << (isSufficient ? "Yes" : "No") << endl;
    cout << "Is stock less than 50% of required level? " << (isLessThan50Percent ? "Yes" : "No") << endl;
    cout << "Is stock exactly equal to required stock? " << (isExactlyEqual ? "Yes" : "No") << endl;
    cout << "Is the shortage greater than 50 units? " << (shortageGreaterThan50 ? "Yes" : "No") << endl;
    
    return 0;
}
