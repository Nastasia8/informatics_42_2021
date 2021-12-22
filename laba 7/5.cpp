#include <iostream>
#include <cmath>

using namespace std;

void S(int n) 
{
    int *x = new int[n + 1]; // объявление и заполнение массива

    for (int i = 0; i <= n; i++)//
    {//
        x[i] = i;//
    }//

    for (int i = 2; i * i <= n; i++) // перебор
    {//
        if (x[i])//
        {//
            for (int j = i * i; j <= n; j = j + i)//
            {//
                x[j] = 0;//
            }//
        }//
    }//

    for (int i = 2; i < n; i++) // вывод
    {//
        if (x[i])//
        {//
            cout << "[" << x[i] << "]" << " ";//
        }//
    }//

    cout << endl;
}

int main()
{   
    int n;

    cout << "white 'n' = ";
    cin >> n;

    S(n);

    return 0;
}