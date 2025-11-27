#include <iostream>
using namespace std;

int main() {
    double temperature;
    bool isWindowClosed;
    
    cout << "Enter temperature in Celsius: ";
    cin >> temperature;
    cout << "Is window closed? (1 for yes, 0 for no): ";
    cin >> isWindowClosed;
    
    bool shouldTurnOn = (temperature > 30) && isWindowClosed;
    
    cout << (shouldTurnOn ? "AC ON" : "AC OFF") << endl;
    
    return 0;
}
