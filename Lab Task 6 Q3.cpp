#include <iostream>
using namespace std;

int main() {
    double currentSalary, newSalary;
    int yearsOfService;
    double increment = 0.0;
    
    cout<<"Enter current salary: $";
    cin>>currentSalary;
    
    cout<<"Enter years of service: ";
    cin>>yearsOfService;
    
    if (yearsOfService >= 10) {
        increment = 0.20; // 20% increment for 10+ years
        cout<<"Bonus Level: High (20%)" << endl;
    } else if (yearsOfService >= 5) {
        increment = 0.10; // 10% increment for 5-9 years
        cout<<"Bonus Level: Medium (10%)" << endl;
    } else if (yearsOfService >= 3) {
        increment = 0.05; // 5% increment for 3-4 years
        cout<<"Bonus Level: Low (5%)" << endl;
    } else {
        cout<<"No bonus - service period too short." << endl;
    }
    
    if (increment > 0) {
        double incrementAmount = currentSalary * increment;
        newSalary = currentSalary + incrementAmount;
        
        cout<<"\n=== Salary Details ==="<<endl;
        cout<<"Current Salary: $"<< currentSalary<<endl;
        cout<<"Years of Service: "<<yearsOfService<<" years"<<endl;
        cout<<"Increment Percentage: "<<(increment * 100)<<"%"<<endl;
        cout<<"Increment Amount: $"<<incrementAmount<<endl;
        cout<<"Updated Salary: $"<<newSalary<<endl;
    } else {
        cout<<"Current Salary remains: $"<<currentSalary<<endl;
    }
    
    return 0;
}
