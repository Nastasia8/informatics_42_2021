#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int z,x,c,NOD;
    cout << "Введите Z,X,C: ";
    cin >> z >> x >> c;
    do 
    {
        if(z > x)
        {
            z = z % x;
        } else {
            x = x % z;
        }
    } while((z != 0)&&(x != 0));
    NOD=z+x;
    do
    {
      if(NOD > c)
      {
          NOD = z % c;
      } else {
          c = c % NOD;
      }
    } while ((NOD!= 0) && (c!= 0));
    cout<<"Наибольший общий делитель = "<<(NOD+c);
}