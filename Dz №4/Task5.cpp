#include <iostream>
#include <cmath>
#include <locale.h>

using namespace std;

void descr(float y, float x, float z, float D, float f1, float f2)
{
    setlocale (LC_ALL,".866");

    cin >> y;
    cin >> x;
    cin >> z;

    D = pow(y, 2) - 4 * x * z;    // вычисление дискременанта

    if (D < 0 )
    {
        cout << "Их нет" <<endl;
    } else
         {
             if (D == 0)                          //Вычисление одного корня
             {
                 float f1 = 0;

                 f1 = -y / 2 *x;
                 cout << "f1 =" << f1 <<endl;
             } else
                     {
                         if (D > 0)                // Вычисление корня один и два
                         {
                             float f1 = 0;
                             float f2 = 0;

                             f1 = (-y + pow(D, 0.5))/ 2 *x;
                             cout << "f1 =" << f1 <<endl;
                             f2 = (-y - pow(D, 0.5))/ 2 *x;
                             cout<< "f2 =" << f2 <<endl;
                         }
                     }
         }
}



int main()
{
    float y;
    float x;
    float z;
    float D;
    float f1;
    float f2;

    descr(y, x, z, D, f1, f2);

    return 0;
}