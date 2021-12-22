#include <iostream>
#include <cmath>

using namespace std;

int factor(int n) // нахождение факториала
{//
    int x = 1;//
    for (int i = 1; i <= n; i++)//
    {//
        x *= i;//
    }//

    return x;//
}//

int main()
{
    int height; // высота треугольника
    int j; // строка, которая в данный момент используется
    int c; // число, которое в данный момент используется

    cout << "white 'h = ";     
    cin >> height;

    cout << endl << "pascal's triangle" << endl;

    cout << "1" << endl;

    for (j = 1; j <= height; j++)
    {
        for (c = 0; c <= j; c++)
        {
            cout << (factor(j) / (factor(c) * factor(j - c))) << " ";
        }
        cout << endl;
    }
    return 0;
}