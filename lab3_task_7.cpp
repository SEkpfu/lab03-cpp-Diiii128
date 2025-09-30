#include <iostream>
#include <cmath>

using namespace std;

int main() {
    setlocale(0, "");
    int n;
    double s = 0.0;
    double x, y, x0, y0;
    cout << "Введите n\n";
    cin >> n;

    cout << "Введите x1, y1\n";
    cin >> x >> y;

    x0 = x;
    y0 = y;

    for(int i = 1; i < n; i++) {

        double x1, y1;

        cout << "Введите x" << i + 1 << ", y" << i + 1 <<"\n";
        cin >> x1 >> y1;
        
        s += pow(pow(x - x1, 2) + pow(y - y1, 2), 0.5);

        x = x1;
        y = y1;
    }
    s += sqrt(pow(x - x0, 2) + pow(y - y0, 2));
    cout << "Периметр равен " << s;
}