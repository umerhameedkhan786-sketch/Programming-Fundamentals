#include <iostream>
using namespace std;

int main()
{
    int arr[5];
    int sum = 0;

    cout << "Enter 5 numbers:" << endl;

    for(int i = 0; i < 5; i++)
    {
        cin >> arr[i];
        sum = sum + arr[i];
    }

    cout << "Sum of 5 numbers = " << sum << endl;

    return 0;
}
