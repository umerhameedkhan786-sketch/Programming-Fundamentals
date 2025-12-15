#include <iostream>
using namespace std;

int main()
 {
const double NORMAL_RATE = 5.0;
const double HIGH_RATE = 10.0;
const double SALES_TAX_RATE = 0.29;
const double MAINTENANCE_FEE = 39.0;
const double ALLOWED_USAGE = 200.0;
    
double units, billAmount, totalBill;
    
cou<<"Enter electricity units consumed: ";
cin>>units;
    
if (units <= ALLOWED_USAGE) 
{
        billAmount = units * NORMAL_RATE;
    } 
else
 {
        billAmount = units * HIGH_RATE;
        billAmount += billAmount * SALES_TAX_RATE;
    }
    
totalBill = billAmount + MAINTENANCE_FEE;
    
cout<<"\n=== Electricity Bill Details ===" << endl;
cout<<"Units consumed: " << units << " units" << endl;
cout<<"Energy charges: $" << billAmount << endl;
cout<<"Maintenance fee: $" << MAINTENANCE_FEE << endl;
cout<<"Total bill: $" << totalBill << endl;
    
    return 0;
}
