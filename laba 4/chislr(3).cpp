#include <iostream>
#include <cmath>

using namespace std;

void sm(float S, int n, float k)
{ 
   for(n; n<=k; n++)
    {   
        S=S+2/((2*n+1)*(2*n+3)); 
    }
    cout << "S = " << S << endl;
}
 void pr(float P, int n, float k)
 {
     for(n; n<=k; n++)
    {   
        P= n + pow(-1,n-1); 
    }
    cout << "P = " << P << endl;
 }

int main()
{   
    int n=1;
    float S;
    float k;
    float P;

    cout << "white k" << endl;
    cin >> k;

    sm(S, n, k);
    pr(P, n, k);

    return 0;
}
