#include <iostream>

using namespace std;

int main() {
    int choice;
    cout << "1. Circle\n2. Rectangle\n3. Square\nChoice: ";
    cin >> choice;

    if (choice == 1) {
        double r;
        cout << "Enter radius: ";
        cin >> r;
        cout << "Area = " << 3.14159 * r * r << endl;
    }
    else if (choice == 2) {
        double l, w;
        cout << "Enter length & width: ";
        cin >> l >> w;
        cout << "Area = " << l * w << endl;
    }
    else if (choice == 3) {
        double s;
        cout << "Enter side: ";
        cin >> s;
        cout << "Area = " << s * s << endl;
    }
    else {
        cout << "Invalid choice!" << endl;
    }

}