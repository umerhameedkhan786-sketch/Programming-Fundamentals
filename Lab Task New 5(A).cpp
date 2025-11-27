#include <iostream>
using namespace std;

int main() {
    int attendance;
    bool feePaid;
    
    cout << "Enter attendance percentage: ";
    cin >> attendance;
    cout << "Is fee paid? (1 for yes, 0 for no): ";
    cin >> feePaid;
    
    bool isEligible = (attendance >= 75) && feePaid;
    
    cout << (isEligible ? "Eligible" : "Not Eligible") << endl;
    
    return 0;
}
