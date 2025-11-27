#include <iostream>
using namespace std;

int main() {
    int totalClasses = 60;
    int attendedClasses = 48;
    double requiredPercentage = 75.0;
    
    double attendancePercentage = (attendedClasses * 100.0) / totalClasses;
    bool requirementMet = attendancePercentage >= requiredPercentage;
    bool attendedMoreThan50 = attendedClasses > 50;
    bool attendedLessThan60Percent = attendancePercentage < 60.0;
    
    cout << "=== Student Attendance Analysis ===" << endl;
    cout << "Total Classes: " << totalClasses << endl;
    cout << "Attended Classes: " << attendedClasses << endl;
    cout << "Attendance Percentage: " << attendancePercentage << "%" << endl;
    cout << "Was the requirement met (75%)? " << (requirementMet ? "Yes" : "No") << endl;
    cout << "Did he attend more than 50 classes? " << (attendedMoreThan50 ? "Yes" : "No") << endl;
    cout << "Did he attend less than 60% of total classes? " << (attendedLessThan60Percent ? "Yes" : "No") << endl;
    
    return 0;
}
