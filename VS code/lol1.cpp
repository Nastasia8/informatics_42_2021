#include <iostream>
#include <cmath>
using namespace std;

int main()
{  
   int i=0;
   float A[i]={0.08,0.26,0.35,0.41,0.53};
   int a=2, b=3;

   float y=0;
   float g=0;
   
   float Xn=0.11;
   float Xk=0.36;
   float dX=0.05;

   int count;
   cout<<"write 1 or 2";
   cin >> count;
   

   switch (count)

   {
    case 1:
    {
   while (i<=4)
   {
      y=asin(pow(A[i],a))+acos(pow(A[i],b));
      cout<<"y = "<< y << endl;
      i++;
   }
   break;
    }
   case 2:
  {
   while (Xn<=Xk)
   {
      g=asin(pow(Xn,a))+acos(pow(Xn,b));
      cout<<"g = "<< g << endl;
      Xn=Xn+dX;
   }
   break;
   }
return 0;

} }