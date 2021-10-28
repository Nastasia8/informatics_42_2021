#include <iostream>
#include <cmath>

using namespace std;

void pr(int a, int pro, int n, int b)
{
    b = a;

    while (b != 0)
    {
        b = b/10;
        n = n + 1;
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

    if(n = 6)
        {
            while (a != 0)
            {
                pro = pro * (a%10);
                a = a / 10;
            }
        } else
            {
                cout << "they said a six-digit number" <<endl;
            }
    cout << pro <<endl;

return 0;
}