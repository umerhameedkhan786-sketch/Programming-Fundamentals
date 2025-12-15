#include <iostream>
using namespace std;

int main() {
    int choice;
    double amount, converted;
    
    cout<< "=== CURRENCY CONVERTER ===" << endl;
    cout<< "Convert USD to:" << endl;
    cout<< "1. PKR (Pakistani Rupees)" << endl;
    cout<< "2. GBP (British Pounds)" << endl;
    cout<< "3. EUR (Euros)" << endl;
    cout<< "Enter your choice (1-3): ";
    cin>> choice;
    
    cout<< "Enter amount in USD: $";
    cin>> amount;
    
    if (amount<0) {
        cout<< "Invalid amount!" << endl;
        return 0;
    }
    
    switch(choice) {
        case 1:
            // 1 USD = 280 PKR (approximate)
            converted = amount * 280;
            cout<< "$"<< amount<< " USD = "<< converted<< " PKR"<< endl;
            break;
            
        case 2:
            // 1 USD = 0.79 GBP (approximate)
            converted = amount * 0.79;
            cout<< "$"<< amount<< " USD = £"<< converted<< " GBP"<< endl;
            break;
            
        case 3:
            // 1 USD = 0.92 EUR (approximate)
            converted = amount * 0.92;
            cout<< "$"<< amount<< " USD = €"<< converted<< " EUR"<< endl;
            break;
            
        default:
            cout<< "Invalid choice!"<< endl;
    }
    
    return 0;
}
