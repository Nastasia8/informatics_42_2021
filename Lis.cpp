#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char *argv[])
{
    const float a = 7.2;
    const float b = 1.3;

    int select;
    int i = 4;
    int n = 5;

    double c[5] = { 2.4, 2.8, 3.9, 4.7, 3.16 };         // Массив для задачи B т.е. это x1,x2 и т.д.
    double g = 0;                                       // g это переменная функции для задачи A
    double y = 0;                                       // y это переменная функция для задачи B
    double v[6] = { 1.56, 2.19, 2.82, 3.45, 4.08, 4.71};


    cout << "select task type 1 or 2" <<endl;
    cin >> select;

    switch(select)
    {
        case 1:                                         // Case 1 это задача B
        {
            while(i >= 0)
            {
                y = pow(((a + b * c[i]) / pow(c[i], 3)), 0.2);
                cout << "y = " << y << endl;
                i--;
            }
            break;
        }
        case 2:                                         // Case 2 это задача A
        {
            while(n >= 0)
            {
                g = pow(((a + b * v[n]) / pow(v[n], 3)), 0.2);
                cout << "g = " << g << endl;
                n--;
            }
            break;
        }
        default:
            printf("select something else");
            break;
    }
    return 0;
}