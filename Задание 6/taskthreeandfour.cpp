#include <iostream>
#include <cmath>

using namespace std;

int main()

{
    int x, y, a, b;

    cout << " Enter x : ";

    cin >> x;

    cout << " Enter y : ";

    cin >> y;
    
    a = x;

    b = y;

    do 
    {

        if(x > y)

        {

            x = x % y;

        } else

            {

                y = y % x;

            }

    }

    while( (x!=0) && (y!=0) );

    cout << " NOD (x; y) = " << ( x + y ) << endl;

    cout << " NOK (x; y) = " <<a / (x+y) * b;
 
}

