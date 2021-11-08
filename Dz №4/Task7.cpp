#include <iostream>

using namespace std;

void ris(int a, int b, char s)
{
    for (int i = 0; i < a; ++i)
        cout << s;
        cout << endl;
    for (int i = 0; i < b - 2; ++i)
    {
        cout << s;
        for (int j = 0; j < a - 2; ++j)
        cout << ' ';
        cout << s <<endl;
    }
    if (b > 1) {
        for (int i = 0; i < a; ++i)
        cout << s;
        cout << endl;
    }
}

int main() {
    int a, b;  //  a и b это высота и ширина
    char s;    // это символ

    cin >> a;
    cin >> b;
    cin >> s;

    ris(a, b, s);
    return 0;
}