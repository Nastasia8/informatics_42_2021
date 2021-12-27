#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int x=0, y=0; 
    cin >> x >> y; //вводятся числа с общим делителем

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