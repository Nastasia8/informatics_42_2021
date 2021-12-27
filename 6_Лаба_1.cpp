#include<iostream>
#include <cmath>

using namespace std;

int main()
{
    const int N=15;
    int f[N],f0,f1,f2,f3,i,n;
    f[0]=0;
    f[1]=3;
    f[2]=5;
    cout<<"f[0] = 0"<<endl<<"f[1] = 3"<<endl;
    for (i=2; i<N; i++)
    {
        f[i+1]=f[i]+f[i-1]+f[i-2];
        cout <<"f["<<i<<"] = "<<f[i]<<endl;
    }
    
    return 0;

}