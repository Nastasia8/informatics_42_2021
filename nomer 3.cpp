#include <iostream>
#include <cmath>

using namespace std;


void sum(int k)
{

    float x = 0;
    for (float z = 1; z <= k; z++)
    {
        x += 2 / ((2 * z + 1) * (2 * z + 3));
    }
    cout << "sum" << x << endl;

}
void proiz(int k)
{

    float x = 1;
    for (float z = 1; z <= k; z++)
    {
        x *= pow(-1, z - 1) + z;
    }
    cout << "pro= " << x << endl;

}

int main()
{
    int v;
    cout << "vvidite k = ";
    cin >> v;
    sum(v);
    proiz(v);

}
