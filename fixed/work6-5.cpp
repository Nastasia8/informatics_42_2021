#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a, b, c;
    int n; // a + b
    cin >> a >> b >> c; //нужно вводить числа, чтобы они уже изначально имели общий делитель 
    //иначе ниего не выведется 
    do {
        if (a > b)
        {
            a = a % b;
        }
        else
        {
            b = b % a;
        }
    }
    while ((a != 0) && (b != 0));

    n = a + b;
    do { //у нас цикл делать пока, поэтому н работала программа(
        if (n > c)
        {
            n = a % c;
        }
        else
        {
            c = c % n;

        }
    }
    while ((n != 0) && (c != 0));

    cout << " NOD = " << (n + c);
    
} //это номер 5 под буквой А