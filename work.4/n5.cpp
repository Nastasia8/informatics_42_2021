#include <iostream>
#include <cmath>

using namespace std; // пространство имён

void calc(int x, int y, int z) // void не возвращает значения
{
    float f1, f2; // с плав.точкой
    float D = y * y - 4 * x * z;
    if (D > 0) // если, то
    {
        f1 = (-y + sqrt(D)) / 2 * x;
        f2 = (-y - sqrt(D)) / 2 * x;
        cout << "Korni -> " << f1 << " " << f2;
    }
    else if (D == 0) // иначе
    {
        f1 = -y / 2 * x;
        cout << "Koren -> " << f1;
    }
    else 
    {
        cout << "Kornei net";
    }

}

int main()
{
    int x, y, z; // тип int
    cin >> x >> y >> z;
    calc(x, y, z)
}
