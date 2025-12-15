#include <iostream>
using namespace std;

int main() {
double temperature;
    
cout<<"Enter current temperature in Celsius: ";
cin>> temperature;
    
if (temperature > 45) 
{
cout<<"ALERT: Temperature exceeds safe limit of 45°C!" << endl;
cout<<"Current temperature: " << temperature << "°C" << endl;
cout<<"Take necessary safety precautions!" << endl;
    }
    
cout<<"Temperature monitoring complete." << endl;
    
return 0;
}
