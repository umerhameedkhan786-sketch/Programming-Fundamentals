#include <iostream>
using namespace std;

int main() {
    int n, num;
    int evenSum = 0, oddSum = 0;

    cout << "How many numbers you want to enter: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cout << "Enter number " << i << ": ";
        cin >> num;

        if (num % 2 == 0)
            evenSum += num;
        else
            oddSum += num;
    }

    cout << "Sum of Even Numbers = " << evenSum << endl;
    cout << "Sum of Odd Numbers = " << oddSum << endl;

    return 0;
}
