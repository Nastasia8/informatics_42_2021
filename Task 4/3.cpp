#include <iostream>
#include <cmath>

using namespace std;


void sum(int k)
{

    float a = 0;
    for (float n = 1; n <= k; n++)
    {
        a += 2 / ((2 * n + 1) * (2 * n + 3));
    }
    cout << "Сумма числового ряда = " << a << endl;
}
void proiz(int k)
{
    float b = 1;
    for (float n = 1; n <= k; n++)
    {
        b *= pow(-1, n - 1) + n;
    }
    cout << "Произведение числового ряда = " << b << endl;
}

int main()
{
    setlocale(LC_ALL, "Russian");

    int k;
    cout << "Введите число k: ";
    cin >> k;
    sum();
    proiz()

}
