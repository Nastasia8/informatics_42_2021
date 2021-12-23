#include <iostream>
#include <cmath>
using namespace std;

float Vector(int x, int y, int z)
{
    return sqrt(x * x + y * y + z * z);
}
void Vector(int x, int y, int z, float length)
{
    cout << "unit length vector = " << x / length << " " << y / length << " " << z / length << endl;

}
int main()
{
    int x = 1;
    int y = 5;
    int z = 3;

    float length = Vector(x, y, z);

    Vector(x, y, z, length);

    return 0;
}
