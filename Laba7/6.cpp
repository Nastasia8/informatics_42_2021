#include <iostream>
#include <math.h>
using namespace std;

//алгоритм посторения треугольника паскаля
int treygolpasc(int n)
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

    //вывод треугольника паскаля
    cout<<"1"<<"\n";
    for (j = 1;j <= k;j++)
    {
        for (c = 0; c <= j; c++)
        {
            cout<<(treygolpasc(j) / (treygolpasc(c) * treygolpasc(j - c)))<<" ";
        };
    cout<<"\n";
    };

    system("pause");
    return 0;
}