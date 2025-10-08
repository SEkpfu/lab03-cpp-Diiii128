#include <iostream>
#include <cmath>

using namespace std;

int main() {
    setlocale(0, "");
    for(double x = -1.5; x < 1.6; x += 0.25) {
        if (x > 1.0) {
            cout << "x = " << x << ", ";
            cout << "y = " << 1.0 + sqrt(abs(cos(x))) << endl;
        }
        else {
            if (x < -0.5) {
                cout << "x = " << x << ", ";
                cout << "y = " << 1.0 - x * x << endl;
            }
            else {
                cout << "x = " << x << ", ";
                cout << "y = " << x + 1.0 << endl;
            }
        }
    }

}