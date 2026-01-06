#include <iostream>
using namespace std;

int main() {
    float temp, total = 0, highest;
    
    cout << "Enter temperature for day 1: ";
    cin >> temp;
    highest = temp;
    total += temp;

    for (int i = 2; i <= 7; i++) {
        cout << "Enter temperature for day " << i << ": ";
        cin >> temp;
        total += temp;

        if (temp > highest) {
            highest = temp;
        }
    }

    cout << "Average Temperature = " << total / 7 << endl;
    cout << "Highest Temperature = " << highest << endl;

    return 0;
}
