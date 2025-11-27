#include <iostream>
using namespace std;

int main() {
    double balance = 100.0;
    cout << "=== Mobile Recharge Bonus ===" << endl;
    cout << "Initial Balance: " << balance << " PKR" << endl;
    balance += balance * 0.10; // 10% bonus
    cout << "Balance after 10% bonus: " << balance << " PKR" << endl;
    
    int assignmentMarks = 85;
    cout << "\n=== Assignment Grace Marks ===" << endl;
    cout << "Original Marks: " << assignmentMarks << endl;
    assignmentMarks += 5; // Adding 5 grace marks
    cout << "Marks after grace: " << assignmentMarks << endl;
    
    double fuelLevel = 50.0; // liters
    cout << "\n=== Car Fuel Consumption ===" << endl;
    cout << "Initial Fuel: " << fuelLevel << " liters" << endl;
    fuelLevel -= 2.0; // Consuming 2 liters per trip
    cout << "Fuel after one trip: " << fuelLevel << " liters" << endl;
    
    return 0;
}
