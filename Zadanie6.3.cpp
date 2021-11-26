#include <iostream>
#include <cmath>
using namespace std;
int main()
{

    int x, y;
    cout << "Enter x and y : ";
    cin >> x >> y;
    do
    {
        if (x > y)
        {
            x = x % y;
        }
         
        else {
            y = y % x;
        }

    } while ((x != 0) && (y != 0));
    cout << "Nod = " << (x + y);




}