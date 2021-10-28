#include <iostream>

using namespace std;

void SM(int n, int k, int S)
{  for (n; n<=k; n++)
    {  
        if(n%2==0)
      {
        S=S+n;
      }
        else S=S+0;
    }
     cout << S << endl;
}

int main()
{   
    int S=0;
    int n;
    int k;

    cout << "white n, k" << endl;

    cin >> n;
    cin >> k;

     SM(n, k, S);

    return 0;
}
