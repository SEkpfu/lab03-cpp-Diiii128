#include <iostream>
#include <cmath>

using namespace std;

int main() {
    setlocale(0, "");

    float x = 0.0;

    do {
        cout << "x = " << x << ", ";
        cout << "y = " << log(x + 1) * sin(x) << endl;
        x += 0.5;
    } while (x < 5.5);

    return 0;
}