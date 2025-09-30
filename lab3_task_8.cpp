#include <iostream>

using namespace std;

int main() {
    setlocale(0, "");
    string ans, s1, s2;
    int n;

    cout << "Введите n\n";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        if (i % 2 == 1) {
            s1 += "o ";
            s2 += "* ";
        }
        else {
            s1 += "* ";
            s2 += "o ";
        }
    }
    s1 += "\n";
    s2 += "\n";

    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            ans += s1;
        }
        else {
            ans += s2;
        }
    }
    cout << ans;
}