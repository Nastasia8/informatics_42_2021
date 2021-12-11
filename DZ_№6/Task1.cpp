#include <iostream>
#include <cmath>
using namespace std;

int main()
{
int n = 15;
int f[n];
f[0]=0;
f[1]=3;
f[2]=5;
cout << f[0] <<" " << f[1] << " " << f[2];
for(n=3; n<=15; n++)
{
    f[n] = f[n-1] + f[n-2] + f[n-3];
    cout <<" " << f[n];
}
return 0;
}