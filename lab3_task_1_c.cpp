#include <iostream>
#include <cmath>

using namespace std;

int main() {
    setlocale(0, "");
    double pi_value = M_PI;

    for(double x = 0; x < 2 * pi_value + pi_value / 6.0 ; x += pi_value / 6.0) {
        cout << "x = " << x << ", ";
        cout << "y = " << cos(x) << endl;
    }
    cout << pi_value / 6.0;

}