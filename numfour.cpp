#include <iostream>
#include <cmath>

using namespace std;


void score(int a, int b)
{
   int n = b - a + 1;
   int sum = 0;
   for (int i = a; i <= b;i++){
       if(i%2 == 0) 
       {
           sum+=i;
       }

   }
   cout <<"summ = "<<sum<<endl;

}


int main()
{
    int a,b;
    cin >> a >> b;
    score(a, b);
}