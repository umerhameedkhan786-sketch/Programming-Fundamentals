#include <iostream>
#include <string>
using namespace std;

int main() {
    int jobLevel, experienceYears;
    string remoteStatus;
    double basicSalary = 0, experienceBonus = 0, remoteBonus = 0;
    double grossSalary, tax = 0, finalSalary;
    
    // Input Section
    cout<< "=== Employee Salary Calculator ===\n" << endl;
    
    cout<< "Enter Job Level (1-4): ";
    cin>> jobLevel;
    
    cout<< "Enter Years of Experience: ";
    cin>> experienceYears;
    
    cout<< "Working in Remote Area? (yes/no): ";
    cin>> remoteStatus;
    
    // Calculate Basic Salary based on Job Level
    switch(jobLevel) {
        case 1:
            basicSalary = 120000;
            break;
        case 2:
            basicSalary = 85000;
            break;
        case 3:
            basicSalary = 60000;
            break;
        case 4:
            basicSalary = 40000;
            break;
        default:
            cout << "Invalid Job Level! Using default (Level 4)" << endl;
            basicSalary = 40000;
            jobLevel = 4;
    }
    
    // Calculate Experience Bonus
    if (experienceYears >= 15) {
        experienceBonus = basicSalary * 0.25;
    } else if (experienceYears >= 10) {
        experienceBonus = basicSalary * 0.15;
    } else if (experienceYears >= 5) {
        experienceBonus = basicSalary * 0.10;
    } else {
        experienceBonus = 0;
    }
    
    // Calculate Remote Bonus
    if (remoteStatus == "yes" || remoteStatus == "Yes" || remoteStatus == "YES") {
        remoteBonus = basicSalary * 0.08;
    } else {
        remoteBonus = 0;
    }
    
    // Calculate Gross Salary
    grossSalary = basicSalary + experienceBonus + remoteBonus;
    
    // Calculate Tax
    if (grossSalary >= 150000) {
        tax = grossSalary * 0.30;
    } else if (grossSalary >= 100000) {
        tax = grossSalary * 0.20;
    } else if (grossSalary >= 60000) {
        tax = grossSalary * 0.10;
    } else {
        tax = 0;
    }
    
    // Calculate Final Salary
    finalSalary = grossSalary - tax;
    
    // Display Results
    cout<< "\n=== Salary Calculation Results ===" << endl;
    cout<< "-----------------------------------" << endl;
    cout<< "Job Level: " << jobLevel << endl;
    cout<< "Experience: " << experienceYears << " years" << endl;
    cout<< "Remote Area: " << remoteStatus << endl;
    cout<< "-----------------------------------" << endl;
    cout<< "Basic Salary: $" << basicSalary << endl;
    cout<< "Experience Bonus: $" << experienceBonus << endl;
    cout<< "Remote Bonus: $" << remoteBonus << endl;
    cout<< "Gross Salary: $" << grossSalary << endl;
    cout<< "Tax Deduction: $" << tax << endl;
    cout<< "-----------------------------------" << endl;
    cout<< "FINAL SALARY: $" << finalSalary << endl;
    cout<< "===================================" << endl;
    
    return 0;
}
