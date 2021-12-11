#include <iostream>
#include <cmath>

using namespace std;

int D(float x, float y, float z, float f1, float f2, float ds)
{ 
    return pow(y,2)-4*x*z;
}
  
int main()
{ 
    float x;
    float y;
    float z;
    float f1;
    float f2;
    float ds;
    
    cin >> x;
    cin >> y;
    cin >> z;

    if (D(x,y,z,f1,f2,ds) < 0)
   {
      cout << "haven't solutions" << endl;
   } else  if (D(x,y,z,f1,f2,ds) == 0)
            {float f1;
             f1=-y/(2*x);
               cout << "f1 = " << f1 << endl;
            } else 
                {
                    float f1;
                     f1=(-y+sqrt(ds))/(2*x);
                    float f2;
                     f2=(-y-sqrt(ds))/(2*x);
                        cout << "f1 = " << f1 << endl;
                        cout << "f2 = " << f2 << endl;
                }    



  return 0;
}
