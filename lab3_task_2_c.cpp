#include <iostream>
#include <cmath>

using namespace std;

int main() {
    setlocale(0, "");
    int a, m;
    cin >> a;

    m = a;

    for(int i = 1; i <= 6; i++) {
        int x;
        cin >> x;
        m = min(m, x);
    }
    cout << "Минимальное число " << m;
}