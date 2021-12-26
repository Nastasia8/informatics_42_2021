#include <iostream>
#include <cmath>
using namespace std;

float Vector(int x, int y, int z)
{
    return sqrt(x * x + y * y + z * z);
}

int main()
{
    setlocale(LC_ALL, "Russian");

    int x = 1;
    int y = 5;
    int z = 3;

    float length = Vector(x, y, z);

    cout << " Длина вектора = " << length << endl;

    return 0;
}
