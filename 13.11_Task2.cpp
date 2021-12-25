#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    float x[8] = {3.1, 3.2, 3.3, 3.4, 3.5, 3.6, 3.7, 3.8}; //создаём массив значений x. Берём тип float чтобы сохранить десятичные дроби
    float y[8] = {2.527, 2.635, 2.655, 2.563, 2.361, 2.048, 1.638, 1.118}; //создаём массив значений y
    int length = sizeof(x)/sizeof(x[0]); //создаём переменну "длина", хранящую число элементов массива X
    double xi = 0; //сам X
    double yi = 0; //сам Y
    double xi2 = 0; //X^2
    double xiyi = 0; //X * Y
    double xi3 = 0; //X^3
    double xi4 = 0; //X^4
    double xi2yi = 0; //X * Y^2
    double linQ = 0; // невязка
    double quadroQ = 0;  //

    cout << "xi" << "\t" << "yi" << "\t" << "xi2" << "\t" << "xi3" << "\t" << "xi4" << "\t" << "xiyi" << "\t" << "xi2yi" << endl; //выводим шапку для первой таблицы 
    for(int i = 0; i < length; i++)
    {
        xi += x[i]; //находим сумму всех значений X
        yi += y[i]; //находим сумму всех значений Y
        xi2 += x[i] * x[i]; //находим сумму квадратов всех значений X
        xiyi += x[i] * y[i];  //находим сумму произведений всех наборов X*Y
        xi2yi += x[i] * x[i] * y[i]; //находим сумму всех произведений (X^2 *Y)
        xi3 += x[i] * x[i] * x[i]; //находим сумму кубов всех значений X
        xi4 += x[i] * x[i] * x[i] * x[i]; //находим сумму X^4 всех значений X

        cout << x[i] << "\t" << y[i] << "\t" << x[i] * x[i] << "\t" << x[i] * x[i] * x[i] << "\t" << x[i] * x[i] * x[i] * x[i] << "\t" << x[i] * y[i] << "\t" << x[i] * x[i] * y[i] << endl; //заполняем таблицу
    }

    cout << "Sum xi" << "\t" <<"Sum yi" << "\t" << "Sum xi2" << "\t" << "Sum xi3" << "\t" << "Sum xi4" << "\t" << "Sum xiyi" << "\t" << "Sum xi2yi" << endl; //выводим шапку для второй таблицы
    cout << xi << "\t" << yi << "\t" << xi2 << "\t" << xi3 << "\t" << xi4 << "\t" << xiyi << "\t" << xi2yi << endl; // заполняем таблицу полученными в цикле результатами

    double linb = (xiyi * xi - xi2*yi) / (xi * xi - xi2 * length); //подбираем b для нахождения минимальной невязки
    double lina = (yi - linb * length) / xi;      //подбираем а для нахождения минимальной невязки, находим апроксимацию для линейной зависимости
    double delta0 = (xi4 * xi2 * length + xi3 * xi * xi2 + xi2 * xi3 * xi - xi2 * xi2 * xi2 - xi4 * xi * xi - xi3 * xi3 * length);        //находим определитель, чтобы решить систему методом Крамера
    double delta1 = (xi2yi * xi2 * length + xi3 * xi * yi + xi2 * xiyi * xi - xi2 * xi2 * yi - xi2yi * xi * xi - xi3 * xiyi * length);    //находим определитель для первой переменной
    double delta2 = (xi4 * xiyi * length + xi2yi * xi * xi2 + xi2 * xi3 * yi - xi2 * xiyi * xi2 - xi4 * xi * yi - xi2yi * xi3 * length);  //находим определитель для второй переменной
    double delta3 = (xi4 * xi2 * yi + xi3 * xiyi * xi2 + xi2yi * xi3 * xi - xi2yi * xi2 * xi2 - xi4 * xiyi * xi - xi3 * xi3 * yi);        //находим определитель для третей переменной 
    double quadroa = delta1 / delta0;  //находим первую переменную квадратичной зависимости
    double quadrob = delta2 / delta0;  //находим вторую переменную квадратичной зависимости
    double quadroc = delta3 / delta0;  //находим третью переменную квадратичной зависимости

    for(int i = 0; i < length; i++)
    {
        linQ += pow((y[i] - (lina * x[i]) - linb), 2);  //находим невязку для линейной зависимости 
        quadroQ += pow((y[i] - quadroa * x[i] * x[i] - quadrob * x[i] - quadroc),2); //находим невязку для квадратичной зависимости 
    }

    cout << "Approksimirovali eksperimental'nye dannye linejnoj zavisimost'yu  y = " << lina << " " << "x + " << linb << " " << " c nevyazkoj Q = " << linQ << " " << " i kvadratichnoj zavisimost'yu y = " << quadroa << " " << "x2 + " << quadrob << " " << "x " << quadroc << " " << " c  nevyazkoj Q = " << quadroQ << endl;
    return 0;
}