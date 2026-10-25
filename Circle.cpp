#include <iostream>

using namespace std;

int main() {
    double radius;
    const double PI = 3.14159;

    
    cout << "Enter the radius of the circle: "<<endl;
    cin >> radius;

    double area = PI * radius * radius;

    cout << "The Area of the Circle = " << area << endl;
}