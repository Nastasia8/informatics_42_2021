#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int x=0, y=0; 
    cin >> x >> y; //вводятся числа уже изначально имеющие общий делитель, иначе ничего не выведится

        if (x > y)
        {
            x = x % y;
        }
        else {
            y = y % x;
        }
   
    while ((x != 0) && (y != 0));
    cout << (x + y);
}