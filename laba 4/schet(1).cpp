#include <iostream>
#include <cmath>
using namespace std;


int main()
{ 
   cout << "white x, y" << endl;

   float x;
   float y;
   float sum;
   float proiz;
   float delen;
   char vichit;
   float pw;

  cin >> x;
  cin >> y;

  int select;
  cout << "write 1 or 2 or 3 or 4 or 5" << endl;
  cin >> select;
  
 

  switch(select)
  {
      case 1:
      { sum=x+y;
         cout << "sum = " << sum << endl;
         break;
      }

      case 2:
      { proiz=x*y;
         cout << "proiz = " << proiz << endl;
        break; 
      }

      case 3:
      { if(y!=0)
            { 
              
              delen=x/y;
              cout << "delen = " << delen << endl;
            }
        if(y==0)
        {
          cout << "nea" << endl;
        }
        break; 
      }

      case 4:
      { vichit=x-y;
         cout << "vichit = " << vichit << endl;
        break; 
      }

      case 5:
      { pw=pow(x,y);
         cout << "pw = " << pw << endl;
        break; 
      }
  }
    return 0;
}