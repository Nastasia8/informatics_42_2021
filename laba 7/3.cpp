#include <iostream>

using namespace std;

void S( int x )
{
    while (x != 1)
    {
    if (x % 2 == 0)
    {   
        x = x / 2;
    }
    else
    {
        x = x * 3;
        x = x + 1;
        x = x / 2;
    }
    cout << "x = " << x << endl;
    }
}

int main()
{
    int x;

    cout << "write x = " << endl;
    cin >> x;

    S(x);

    return 0;
}
