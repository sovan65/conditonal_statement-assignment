#include <iostream>
using namespace std;

int main() {
    double side1, side2, side3;
    cout << "Enter length of side 1: ";
    cin >> side1;
    cout << "Enter length of side 2: ";
    cin >> side2;
    cout << "Enter length of side 3: ";
    cin >> side3;
    if (side1 + side2 > side3 && side1 + side3 > side2 && side2 + side3 > side1) {
        if (side1 == side2 && side2 == side3) {
            cout << "Triangle is equilateral." << endl;
        } else if (side1 == side2 || side1 == side3 || side2 == side3) {
            cout << "Triangle is isosceles." << endl;
        } else {
            cout << "Triangle is scalene." << endl;
        }
    } else {
        cout << "Invalid triangle: Sum of any two sides must be greater than the third side." << endl;
    }

    return 0;
}
