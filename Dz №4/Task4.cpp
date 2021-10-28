#include <iostream>
#include <cmath>

using namespace std;

void sum(int k, int n, int summ)
{
    for(k; k <= n; k++)
        {
            if (k % 2 == 0)
            {
                summ = summ + k;
            }
        }
    
    cout<< summ <<endl;
}

int main ()
{
    int k;
    int n;
    int summ = 0;

    cin >> k;
    cin >> n;

    sum(k, n, summ);

return 0;
}

