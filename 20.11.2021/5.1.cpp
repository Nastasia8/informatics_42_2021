#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int x,y,z,nod1;
    cout << "Enter x and y and z : ";
    cin >> x >> y >> z;
    do 
    {
        if(x > y)
        {
            x = x % y;
        } else {
            y = y % x;
        }
    } while((x != 0) && (y != 0));
    nod1=x+y;
    do
    {
      if(nod1 > z)
      {
          nod1 = x % z;
      } else {
          z = z % nod1;
      }
    } while ((nod1 != 0) && (z != 0));
    
    cout << "a) Nod = " << (nod1+z);

}