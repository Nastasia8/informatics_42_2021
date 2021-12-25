#include <iostream>

using namespace std;

void function(int f[])
{
    for (int r = 3; r < 18; r++)
    {
        f[r] = f[r - 1] + f[r - 2] + f[r - 3];
        cout << f[r] << endl;

    }
}

int main()
{
    int f[15];
    f[0] = 0;
    f[1] = 3;
    f[2] = 5;
    function(f);
}
