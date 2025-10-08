#include <iostream>

using namespace std;

int main() {
    setlocale(0, "");
    cout << "Введите целые числа\n";
    cout << "Чтобы отказаться от ввода напишите x\n";

    string s;
    int st;
    int num = 0;
    int x;
    int s_e = 0;
    st = 0;

    while (st == 0) {
        cin >> s;
        if (s == "x") {
            st = 1;
            break;
        }
        else {
            x = stoi(s);

            if ((x & 1) == 0) {
                s_e += 1;
            }
            num += 1;}
    }
    cout << "Кол-во четных чисел "<< s_e << endl;
    cout << "Общее кол-во чисел " << num;
}