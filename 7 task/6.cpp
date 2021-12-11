#include <iostream>
#include <math.h>
using namespace std;

int calc(int n)
{
    int i,x;
    x = 1;
    for (i = 1;i <= n;i++)
    {
        x *= i;
    };

return x;
}

int main()
{
    int k,j,c,t = 0;
    cin>>k;
    cout<<"1"<<"\n";
    for (j = 1;j <= k;j++)
    {
        for (c = 0; c <= j; c++)
        {
            cout<<(calc(j) / (calc(c) * calc(j - c)))<<" ";
            
        };
        
    cout<<"\n";
    };
    return 0;
}