#include <iostream>
using namespace std;


int main() {
int num, i = 1;
long long factorial = 1;


cout << "Enter a number: ";
cin >> num;


while (i <= num) {
factorial = factorial * i;
i++;
}


cout << "Factorial of " << num << " = " << factorial;
return 0;
}
