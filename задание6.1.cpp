#include <iostream>
#include <cmath>

using namespace std;

void function(int f[])
{
    for (int n = 3; n < 16; n++)
    {
        f[n] = f[n - 1] + f[n - 2] + f[n - 3];
        cout << f[n];
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
