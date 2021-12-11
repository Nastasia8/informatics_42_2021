#include <iostream>

#include <math.h>

using namespace std;

int shitalka(int n)

{

 int i,a;

 a = 1;

 for (i = 1;i <= n;i++)
   {
      a *= i;
   };

 return a;

}

int main()
{
   int k,j,c,t = 0;

   cin >> k;

   cout << "1" << "\n";

   for (j = 1;j <= k;j++)

  {
    for (c = 0; c <= j; c++)

      {
         cout<<( shitalka(j) / (shitalka(c) * shitalka(j - c)))<<" ";
            
      };
        
    cout << "\n"; 

   };

   return 0;

}