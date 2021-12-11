#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a,b,x,y;
    cout << "Введите X и Y: ";
    cin >> x >> y;
    a = x;
    b = y;
    do 
    {
        if(x > y)
        {
            x = x % y;
        } else {
            y = y % x;
        }
    }
    while((x!=0)&&(y!=0));
    cout << a/(x+y)*b;
}