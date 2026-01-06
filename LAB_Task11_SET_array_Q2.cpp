#include <iostream>
using namespace std;

int main()
{
    int n;
    float sum = 0, average;
    int arr[100];

    cout << "Enter how many numbers you want to calculate average of: ";
    cin >> n;

    while(n <= 0 || n > 100)
    {
        cout << "Error! Please enter a number between 1 and 100: ";
        cin >> n;
    }

    cout << "Enter " << n << " numbers:" << endl;

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum = sum + arr[i];
    }

    average = sum / n;

    cout << "Average = " << average << endl;

    return 0;
}
