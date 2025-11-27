#include <iostream>
using namespace std;

int main() {
    int number;
    
    cout << "Enter an integer: ";
    cin >> number;
    string result = (number % 2 == 0) ? "even" : "odd";
    
    cout << "The number " << number << " is " << result << endl;
    
    return 0;
}
