#include <iostream>
using namespace std;

int main() {
    int choice;
    double area;
    
    cout<< "=== AREA CALCULATOR ===" << endl;
    cout<< "1. Circle" << endl;
    cout<< "2. Rectangle" << endl;
    cout<< "3. Triangle" << endl;
    cout<< "Enter your choice (1-3): ";
    cin>> choice;
    
    switch(choice) {
        case 1: {
            // Circle
            double radius;
            cout<< "Enter radius of circle: ";
            cin>> radius;
            
            if (radius<=0) {
                cout<< "Invalid radius!" << endl;
                return 0;
            }
            
            area=3.14159 * radius * radius;
            cout<< "Area of circle = " << area << endl;
            break;
        }
            
        case 2: {
            // Rectangle
            double length, width;
            cout<< "Enter length of rectangle: ";
            cin>> length;
            cout<< "Enter width of rectangle: ";
            cin>> width;
            
            if (length<=0 || width<=0) {
                cout<< "Invalid dimensions!" << endl;
                return 0;
            }
            
            area=length*width;
            cout<< "Area of rectangle = " << area << endl;
            break;
        }
            
        case 3: {
            // Triangle
            double base, height;
            cout<< "Enter base of triangle: ";
            cin>> base;
            cout<< "Enter height of triangle: ";
            cin>> height;
            
            if (base<=0 || height<=0) {
                cout<< "Invalid dimensions!" << endl;
                return 0;
            }
            
            area = 0.5 * base * height;
            cout<< "Area of triangle = " << area << endl;
            break;
        }
            
        default:
            cout<< "Invalid choice!" << endl;
    }
    
    return 0;
}
