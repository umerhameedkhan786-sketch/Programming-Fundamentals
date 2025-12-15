#include <iostream>
using namespace std;

int main() {
    char op;
    double num1, num2, result;
    
    cout<< "=== SIMPLE CALCULATOR ===" << endl;
    cout<< "Enter first number: ";
    cin>> num1;
    
    cout<< "Enter operator (+, -, *, /): ";
    cin>> op;
    
    cout<< "Enter second number: ";
    cin>> num2;
    
    switch(op) {
        case '+':
            result = num1 + num2;
            cout<< num1<< " + " <<num2<< " = " << result << endl;
            break;
            
        case '-':
            result = num1 - num2;
            cout<< num1<< " - " <<num2<< " = " << result << endl;
            break;
            
        case '*':
            result = num1 * num2;
            cout<<num1<< " * " <<num2<< " = " << result << endl;
            break;
            
        case '/':
            if(num2 != 0) {
                result = num1 / num2;
                cout<<num1<< " / " << num2 << " = " << result << endl;
            } else {
                cout<< "Error: Cannot divide by zero!" << endl;
            }
            break;
            
        default:
            cout<< "Error: Invalid operator!" << endl;
    }
    
    return 0;
}
