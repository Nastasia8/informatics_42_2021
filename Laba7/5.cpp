#include <iostream>

using namespace std;

// функция отсеивателя
void otseivatel (int s) {
    int *a = new int[s + 1];
    for (int i = 0; i <= s; i++) {
        a[i] = i;
    }
    for (int i = 2; i * i <= s; i++)
    {
        if (a[i]) {
            for (int j = i*i; j <= s; j += i) {
                a[j] = 0;
            }
        }
    }
    for (int i = 2; i < s; i++) {
        if (a[i]) {
            cout << a[i] << ' ';
        }
    }
    cout << endl << endl;
    delete[] a;
}

int main()
{
    int s;
    cin >> s;

    otseivatel(s);

 system("pause");
 return 0;
}