#include <iostream>

using namespace std;

int main() {
    setlocale(0, "");
    
    int t = 0;
    while(t < 101) {
        cout << t << " градусов Цельсия" << endl;
        cout << 9.0 / 5.0 * t + 32.0 << " градусов Фаренгейта" << endl;
        t += 10;
    }
    return 0;
}