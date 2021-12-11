#include <iostream>

using namespace std;

//функция для проверки условия
long double sumryad(int l) {
    if(l < 0)
        return 0;
    if (l == 0)
        return 1;
    else
        return l * sumryad(l - 1);
}

int main () {
    int n = 0;
    int sum = 0;
    cout << "Enter number = ";
    cin >> n;

    //вычисление функцие ряда
    for(int l = 1; l <= n; l++) {
        sum += -1 * l * ((5 - l) / sumryad(l));
    }

    cout << sum;

system("pause");
return 0;
}