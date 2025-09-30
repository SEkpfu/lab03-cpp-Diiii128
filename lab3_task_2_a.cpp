#include <iostream>

using namespace std;

int main() {
    setlocale(0, "");

    int num_neg = 0;

    for(int i = 1; i <= 7; i++) {
        int x;
        cin >> x;
        num_neg += (x < 0);
    }
    cout << "Кол-во отрицательных чисел " << num_neg;
}