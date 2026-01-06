#include <iostream>
using namespace std;


int main() {
int i = 1, sum = 0;
while (i <= 10) {
sum = sum + i;
i++;
}
cout << "Sum of first ten natural numbers = " << sum;
return 0;
}
