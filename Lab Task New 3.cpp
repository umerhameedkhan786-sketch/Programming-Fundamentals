#include <iostream>
using namespace std;

int main() {
    double balance;
    bool isLoyal;
    
    cout << "Enter account balance: $";
    cin >> balance;
    cout << "Is customer loyal? (1 for yes, 0 for no): ";
    cin >> isLoyal;
    
    string accountType = (balance < 100) ? "Low Balance" : 
                        (balance <= 500) ? "Standard Account" : "Premium Account";
    
    bool isEligible = (balance > 200) && isLoyal;
    string offerStatus = isEligible ? "Eligible" : "Not Eligible";
    
    cout << "Account Type: " << accountType << endl;
    cout << "Special Offer Eligibility: " << offerStatus << endl;
    
    return 0;
}
