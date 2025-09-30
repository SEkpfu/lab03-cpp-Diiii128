#include <iostream>

using namespace std;

int main() {
    setlocale(0, "");
    cout << "Введите натуральные числа\n";

    int n, m, ans;
    n = 1;
    ans = 0;

    while (n != 0) {
        cin >> n;
        if (n > m) {
            ans = 0;
            m = n;
        }
        if (n == m) {
            ans ++;
        }
    }
    cout << "Кол-во элементов, равных наибольшему элементу " << ans;
}