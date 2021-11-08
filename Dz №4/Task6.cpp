#include <iostream>
#include <cmath>

using namespace std;

void pr(int a, int pro, int n, int b)
{
    b = a;

    for(n = 0; b > 0; n++)
    {
        b = b / 10;
    }

    if(n == 6)
        {
            while (a != 0)
            {
                pro = pro * (a%10);
                a = a / 10;
            }
        cout << pro <<endl;
        } else
            {
                cout << "they said a six-digit number" <<endl;
            }
}
int main()
{
    int a;
    int pro = 1;
    int n;
    int b;

    cout << "enter a six-digit number" <<endl;
    cin >> a;

    pr(a, pro, n, b);
return 0;
}