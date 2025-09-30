#include <iostream>

using namespace std;

int main() {
    setlocale(0, "");

    int sum_2 = 0;

    for(int i = 1; i <= 7; i++) {
        int x;
        cin >> x;
        sum_2 += ((x <= 99 && x >= 10) || (x <= -10 && x >= -99)) * x;
    }
    cout << "Сумма двузначных чисел " << sum_2;
}