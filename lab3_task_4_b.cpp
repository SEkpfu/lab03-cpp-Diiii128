#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n;
    double x;
    double ans, a;
    ans = 0.0;

    cin >> n >> x;

    a = sqrt(x);

    for (int i = 1; i <= n; i ++) {
        double a;
        a += x;
        ans = sqrt(a);
        a = ans;
    }
    cout << ans;
}