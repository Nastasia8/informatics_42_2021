#include <iostream>
#include <cmath>

using namespace std;


void sum(int k)
{

    float s = 0;
    for (float n = 1; n <= k; n++)
    {
        s += 2 / ((2 * n + 1) * (2 * n + 3));
    }
    cout << "summa = "<< s<< endl;
    
}
void proiz(int k)
{

    float s = 1;
    for (float n = 1; n <= k; n++)
    {
        s *= pow(-1,n-1) + n;
    }
    cout << "proiz = "<< s<< endl;
    
}

int main()
{
    int k;
    cout << "enter k = ";
    cin >> k;
    sum(k);
    proiz(k);
    
}