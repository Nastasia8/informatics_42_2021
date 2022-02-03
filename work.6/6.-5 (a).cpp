#include <iostream>
#include <cmath>

using namespace std; // пространство имён

int main()
{
    int a, b, c; // тип int
    int n; // a + b
    cin >> a >> b >> c; // ввод чисел, изначально имеющих общий делитель, в противном случае ничего не выводится 

    if (a > b) // если a > b, то 
    {
        a = a % b;
    }

    else // иначе
    {
        b = b % a;
    }

    while ((a != 0) && (b != 0)); // пока выполн.условие

    n = a + b;

    if (n > c) 
    {
        n = a % c;
    }

    else
    {
        c = c % n;
    }
    while ((n != 0) && (c != 0));
    cout << " NOD = " << (n + c); // вывод

} 