#include <iostream>
using namespace std;

int main() {
    int popA, popB, years = 0;
    float rateA, rateB;

    cout << "Enter population of Town A: ";
    cin >> popA;
    cout << "Enter growth rate of Town A (%): ";
    cin >> rateA;

    cout << "Enter population of Town B: ";
    cin >> popB;
    cout << "Enter growth rate of Town B (%): ";
    cin >> rateB;

    while (popA < popB) {
        popA = popA + (popA * rateA / 100);
        popB = popB + (popB * rateB / 100);
        years++;
    }

    cout << "After " << years << " years:" << endl;
    cout << "Population of Town A = " << popA << endl;
    cout << "Population of Town B = " << popB << endl;

    return 0;
}
