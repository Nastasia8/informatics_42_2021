#include <iostream>
using namespace std;
 int voidfunction(int f[])
{
    for(int n = 3; n < 18; n++)
    {   
 f[n]= f[n-1] + f[n-2] + f[n-3];
 cout << f[n] << endl;
    }
}
int main()
{
    int f[15];
 f[0] = 0;
 f[1] = 3;
 f[2] = 5;
 int function();

}