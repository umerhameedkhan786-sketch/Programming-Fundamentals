#include <iostream>
using namespace std;

int main()
{
    int n;
    int arr[100];

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter " << n << " numbers:" << endl;

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int largest = arr[0];

    for(int i = 1; i < n; i++)
    {
        if(arr[i] > largest)
        {
            largest = arr[i];
        }
    }

    cout << "Largest number = " << largest << endl;

    return 0;
}
