#include <iostream>
using namespace std;

 double factorial(int k) {
    if (k < 0)
        return 0;
    if (k == 0)
        return 1;
    else
        return k * factorial(k - 1);
}

int main() {

    setlocale(LC_ALL, "Russian");
    
    int num, sum = 0;
    cout << "Введите число: ";
    cin >> num;
    for (int k = 1; k <= num; k++)
    {
        sum += -1 * k * ((5 - k) / factorial(k));
    }
    cout << "Сумма = " << sum << endl;

    return 0;
}
