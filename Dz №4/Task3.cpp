#include <iostream>
#include <cmath>

using namespace std;

void summ(int k, double sum, int n)  // сумма числового ряда
{
    for(n =1; n <= k; n++)
    {
        sum = 2 / (((2 * n) + 1) * ((2 * n) + 3));
        cout << sum <<endl;
    }
}

void pr(int k, double pro, int n) // произведение числового ряда
{
    for(n =1; n <= k; n++)
    {
        pro = pow((-1), (n - 1)) + n;
        cout << pro <<endl;
    }
}

int main()
{
    int k;
    int n = 1;
    double pro;
    double sum;

    cin >> k;

    summ(k, sum, n);
    pr(k, pro, n);

    return 0;
}