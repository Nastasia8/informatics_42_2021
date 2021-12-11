#include <iostream>
#include <cmath>
using namespace std;

int NOD(int a, int b) // определение функции наибольшего общего делителя
{
    while(a > 0 && b > 0)

        if(a > b)
            a %= b;

        else
            b %= a;

    return a + b;
}

int NOK(int a, int b) // определение функции наименьшего общего кратного
{
    return a *b / NOD(a,b);
}

int main()
{

int a;
int b;
cin >> a;
cin >> b;

cout << NOD(a,b) <<endl;
cout << NOK(a,b) <<endl;

return 0;
}
