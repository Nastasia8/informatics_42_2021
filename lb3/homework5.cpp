#include <iostream>
#include <cmath>

using namespace std;

void z(int a, int b, int c) 
{
    float f1, f2;
    float D = a * a - 4 * b * c;
    if (D > 0) 
    {
        f1 = (-b + sqrt(D)) / 2 * a;
        f2 = (-b - sqrt(D)) / 2 * a;
        cout << "Корни:" << f1 << " " << f2;
    }
    else if (D == 0) {
        f1 = -b / 2 * a;
        cout << "Корни:" << f1;
    }
    else 
    {
        cout << "Нет корней";
    }
}

int main() 
{
    int a, b, c;
    cin >> a >> b >> c;
    z(a, b, c);
}