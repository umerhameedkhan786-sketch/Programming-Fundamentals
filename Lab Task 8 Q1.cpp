#include <iostream>
using namespace std;

int main() {
    int category, item, quantity;
    double price=0, total, discount=0, finalTotal;
    
    cout<< "=== SHOPPING SYSTEM ==="<< endl;
    cout<< "1. Electronics"<< endl;
    cout<< "2. Clothing"<< endl;
    cout<< "3. Groceries"<< endl;
    cout<< "Select category (1-3): ";
    cin>> category;
    
    if (category==1) {
        // Electronics
        cout<< "\nElectronics Items:" << endl;
        cout<< "1. Laptop ($1000)" << endl;
        cout<< "2. Smartphone ($700)" << endl;
        cout<< "3. Headphones ($150)" << endl;
        cout<< "Select item (1-3): ";
        cin>> item;
        
        if (item==1) {
            price = 1000;
            cout<< "You selected: Laptop" << endl;
        } else if (item == 2) {
            price = 700;
            cout<< "You selected: Smartphone" << endl;
        } else if (item == 3) {
            price = 150;
            cout<< "You selected: Headphones" << endl;
        } else {
            cout<< "Invalid item!" << endl;
            return 0;
        }
        
    } else if (category == 2) {
        // Clothing
        cout<< "\nClothing Items:" << endl;
        cout<< "1. Jacket ($120)" << endl;
        cout<< "2. T-shirt ($40)" << endl;
        cout<< "3. Jeans ($60)" << endl;
        cout<< "Select item (1-3): ";
        cin>> item;
        
        if (item==1) {
            price = 120;
            cout<< "You selected: Jacket" << endl;
        } else if (item == 2) {
            price = 40;
            cout<< "You selected: T-shirt" << endl;
        } else if (item == 3) {
            price = 60;
            cout<< "You selected: Jeans" << endl;
        } else {
            cout<< "Invalid item!" << endl;
            return 0;
        }
        
    } else if (category==3) {
        // Groceries
        cout<< "\nGrocery Items:" << endl;
        cout<< "1. Milk ($2)" << endl;
        cout<< "2. Bread ($3)" << endl;
        cout<< "3. Eggs ($5)" << endl;
        cout<< "Select item (1-3): ";
        cin>> item;
        
        if (item == 1) {
            price = 2;
            cout<< "You selected: Milk" << endl;
        } else if (item == 2) {
            price = 3;
            cout<< "You selected: Bread" << endl;
        } else if (item == 3) {
            price = 5;
            cout<< "You selected: Eggs" << endl;
        } else {
            cout<< "Invalid item!" << endl;
            return 0;
        }
        
    } else {
        cout<< "Invalid category!" << endl;
        return 0;
    }
    
    cout<< "Enter quantity: ";
    cin>> quantity;
    
    if (quantity <= 0) {
        cout<< "Invalid quantity!" << endl;
        return 0;
    }
    
    total = price * quantity;
    
    // Apply discount
    if (total > 500) {
        discount = total * 0.20;  // 20% discount
    } else if (total >= 100) {
        discount = total * 0.10;  // 10% discount
    } else {
        discount = 0;  // No discount
    }
    
    finalTotal = total - discount;
    
    cout<< "\n=== INVOICE ===" << endl;
    cout<< "Item Price: $" << price << endl;
    cout<< "Quantity: " << quantity << endl;
    cout<< "Subtotal: $" << total << endl;
    cout<< "Discount: $" << discount << endl;
    cout<< "Final Total: $" << finalTotal << endl;
    
    return 0;
}
