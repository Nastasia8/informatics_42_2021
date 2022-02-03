#include <iostream>
#include <cmath>

using namespace std; // пространство имён

int main()
{
    int x = 0, y = 0;
    cin >> x >> y; // ввод чисел, изначально имеющих общий делитель, в противном случае ничего не выводится

    if (x > y) // если x > y, то
    {
        x = x % y;
    }
    else // иначе
    {
        y = y % x;
    }

    while ((x != 0) && (y != 0)); // цикл 
    cout << (x + y);
}