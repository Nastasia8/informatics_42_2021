#include <iostream>

using namespace std;

double fuctorial (int k) // высчитываем значение факториала 
{
    if (k < 0)
        return 0;
    if (k == 0)
        return 1;
    else // (k > 0)
        return k * fuctorial(k - 1);
}

int main () 
{
    int n; // верхний порог 
    int k = 1; // нижний порог
    int sm = 0; // начальное значение общей суммы заданного промежутка

    cout << "white 'n' = ";
    cin >> n;

    for (k = 1; k <= n; k ++)
    {
        sm = sm + (-1 * k * ((5 - k) / fuctorial(k)));
    }

    cout << "sm = " << sm;

    return 0;
}