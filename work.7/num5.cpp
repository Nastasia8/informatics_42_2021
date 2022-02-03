#include <iostream>
#include <cmath>

using namespace std; // пространство имён

void fun(int n) // void не возвращает значения
{
    int* x = new int[n + 1];
    for (int i = 0; i <= n; i++)
    {
        x[i] = i;
    }
    for (int i = 2; i * i <= n; i++)
    {
        if (x[i])
        {
            for (int j = i * i; j <= n; j += i)
            {
                x[j] = 0;
            }
        }
    }
    for (int i = 2; i < n; i++)
    {
        if (x[i])
        {
            cout << x[i] << ' ';
        }
    }
    cout << endl;
}

int main()
{
    int n;
    cin >> n;

    fun(n);

    return 0;
}