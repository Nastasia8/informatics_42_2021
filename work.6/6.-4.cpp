#include <iostream>
#include <cmath>

using namespace std; // пространство имён

int main()
{
    int x, y;
    cin >> x >> y; // ввод чисел, изначально имеющих общий делитель, в противном случае ничего не выводится 
    int a = x;
    int c = y;
    if (x > y) // если x > y, то
    {
        x = x % y;
    }
    else // иначе
    {
        y = y % x;
    }
    while ((x != 0) && (y != 0)); // цикл
    cout << a / (x + y) * c;
}