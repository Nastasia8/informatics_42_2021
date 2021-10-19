#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char *argv[])
{
    const float a = 7.2;
    const float b = 1.3;

    int select;
    int i = 4;

    double c[5] = { 2.4, 2.8, 3.9, 4.7, 3.16 };         // Массив для задачи B т.е. это x1,x2 и т.д.
    double g = 0;                                           // g это переменная функции для задачи A
    double y = 0;                                           // y это переменная функция для задачи B

    float Xn = 1.56;                                    // Xn - это x начало
    float Xk = 4.71;                                    // Xk - это х конец
    float dX = 0.63;                                    // dX - это разница конца и начала

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
            while(Xn <= Xk)
            {
                g = pow(((a + b * Xn) / pow(Xn, 3)), 0.2);
                cout << "g = " << g << endl;
                Xn = Xn + dX;
            }
            break;
        }
    }
    return 0;
}