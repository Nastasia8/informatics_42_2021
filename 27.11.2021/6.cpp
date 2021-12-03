#include <iostream>
#include <math.h>
using namespace std;

int calc(int a)
{
    int g,x;
    x = 1;
    for (g = 1;g<=a; g++)
    {
        x *= g;
    };
return x;
}
int main()
{
    int z,x,c = 0;
    cin>>z;
    cout<<"1"<<"\a";
    for (x = 1;x <= z;x++)
    {
        for (c = 0; c <= x; c++)
        {
            cout<<(calc(x)/(calc(c) * calc(x-c)))<<" "; 
        }; 
    cout<<"\a";
    };
    return 0;
}