#include <iostream>

#include <cmath>

#include <iomanip>

using namespace std;

int main()

{
    float x[8] = {0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8};

    float y[8] = {3.030, 3.142, 3.358, 3.463, 3.772, 3.251, 3.170, 3.665};

    int length = sizeof(x)/sizeof(x[0]);

    double x_i = 0;

    double y_i = 0;

    double xi_2 = 0;

    double xi_yi = 0;

    double xi_3 = 0;

    double xi_4 = 0;

    double xi_2yi = 0;

    double linQ = 0;

    double quadroQ = 0;

    cout << "x(i)" << "\t" << "y(i)" << "\t" << "x(i_2)" << "\t" << "x(i_3)" << "\t" << "x(i_4)" << "\t" << "x(i_yi)" << "\t" << "x(i_2yi)" << endl;

    for(int i = 0; i < length; i++)

    {   

        x_i += x[i]; // сумма х

        y_i += y[i]; // сумма у

        xi_2 += x[i] * x[i];

        xi_yi += x[i] * y[i];

        xi_2yi += x[i] * x[i] * y[i];

        xi_3 += x[i] * x[i] * x[i];

        xi_4 += x[i] * x[i] * x[i] * x[i];

        cout << x[i] << "\t" << y[i] << "\t" << x[i] * x[i] << "\t" << x[i] * x[i] * x[i] << "\t" << x[i] * x[i] * x[i] * x[i] << "\t" << x[i] * y[i] << "\t" << x[i] * x[i] * y[i] << endl;

    }

    cout << "Sum xi" << "\t" <<"Sum yi" << "\t" << "Sum xi_2" << "\t" << "Sum xi_3" << "\t" << "Sum xi_4" << "\t" << "Sum xi_yi" << "\t" << "Sum xi_2yi" << endl;

    cout << x_i << "\t" << y_i << "\t" << xi_2 << "\t" << xi_3 << "\t" << xi_4 << "\t" << xi_yi << "\t" << xi_2yi << endl;

    double lin_b = (xi_yi * x_i - xi_2*y_i) / (x_i * x_i - xi_2 * length); // поиск значений для линейной зависимости

    double lin_a = (y_i - lin_b * length) / x_i; // поиск значений для линейной зависимости

    double delta = (xi_4 * xi_2 * length + xi_3 * x_i * xi_2 + xi_2 * xi_3 * x_i - xi_2 * xi_2 * xi_2 - xi_4 * x_i * x_i - xi_3 * xi_3 * length); // решение матрицы методом Крамера

    double deltaOne = (xi_2yi * xi_2 * length + xi_3 * x_i * y_i + xi_2 * xi_yi * x_i - xi_2 * xi_2 * y_i - xi_2yi * x_i * x_i - xi_3 * xi_yi * length); // решение матрицы методом Крамера

    double deltaTwo = (xi_4 * xi_yi * length + xi_2yi * x_i * xi_2 + xi_2 * xi_3 * y_i - xi_2 * xi_yi * xi_2 - xi_4 * x_i * y_i - xi_2yi * xi_3 * length); // решение матрицы методом Крамера

    double deltaThree = (xi_4 * xi_2 * y_i + xi_3 * xi_yi * xi_2 + xi_2yi * xi_3 * x_i - xi_2yi * xi_2 * xi_2 - xi_4 * xi_yi * x_i - xi_3 * xi_3 * y_i); // решение матрицы методом Крамера

    double quadroa = deltaOne / delta; // считаем свободные элементы

    double quadrob = deltaTwo / delta; // считаем свободные элементы

    double quadroc = deltaThree / delta; // считаем свободные элементы

    for(int i = 0; i < length; i++)

    {

        linQ += pow((y[i] - (lin_a * x[i]) - lin_b), 2); // поиск линейная невязки

        quadroQ += pow((y[i] - quadroa * x[i] * x[i] - quadrob * x[i] - quadroc),2); // поиск квадротичной невязки

    }

    cout << "Approksimirovali eksperimental'nye dannye linejnoj zavisimost'yu  y = " << lin_a << "x + " << lin_b << " c nevyazkoj Q = " << linQ << " i kvadratichnoj zavisimost'yu y = " << quadroa << "x2 + " << quadrob << "x " << quadroc << " c  nevyazkoj Q = " << quadroQ << endl;

    return 0;

}