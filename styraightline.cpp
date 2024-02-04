#include <iostream>
using namespace std;

int main() {
    double x1, y1, x2, y2, x3, y3;


    cout << "Enter coordinates of the first point (x1 y1): ";
    cin >> x1 >> y1;
    cout << "Enter coordinates of the second point (x2 y2): ";
    cin >> x2 >> y2;
    cout << "Enter coordinates of the third point (x3 y3): ";
    cin >> x3 >> y3;
    double slope1 = (y2 - y1) / (x2 - x1);
    double slope2 = (y3 - y2) / (x3 - x2);
    if (slope1 == slope2) {
        cout << "The three points are collinear and lie on the same straight line." << endl;
    } else {
        cout << "The three points are not collinear." << endl;
    }

    return 0;
}
