#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std; // пространство имён

int main()
{
    double a; // 1
    double b; // 5
    double sh; // шаг (0.5)
    double X;
    double newa;
    double newb;
    double c;
    double fa;
    double fc;
    double e = 0.0001;
    double x[8] = { 1.5, 1.6, 1.7, 1.8, 1.9, 2.0, 2.1, 2.2 };
    double y[8] = { 1.924, 1.710, 1.525, 1.370, 1.264, 1.190, 1.148, 1.127 };
    int dl = sizeof(x) / sizeof(x[0]); // sizeof - унарная операция (размер)
    double xi = 0;
    double yi = 0;
    double xi2 = 0;
    double xiyi = 0;
    double xi3 = 0;
    double xi4 = 0;
    double xi2yi = 0;
    double Q = 0; // линейная
    double kQ = 0; // квадратичная

    // первое задание 

    cout << "Enter a, b and sh = "; 
    cin >> a >> b >> sh;

    cout << endl;
    cout << "X" << "\t" << "y" << endl;

    int d = 0;
    for (X = a; X <= b; X += sh) // пока, то (цикл)
    {
        double f1 = exp(X) - pow(X, 2) - 2 * X;
        double f2 = exp(X + sh) - pow((X + sh), 2) - 2 * (X + sh);

        if ((((f1 > 0) && (f2 < 0)) || ((f1 < 0) && (f2 > 0))) && (d == 0)) // если вып.условие, то
        {
            newa = X;
            newb = X + sh;
            d += 1;
        }

        cout << x << "\t" << f1 << endl; // вывод
    }

    cout << endl;
    cout << "The root lies = [" << newa << "; " << newb << "]" << endl;
    cout << endl;
    cout << setw(5) << "a" << setw(15) << "b" << setw(15) << "c" << setw(15) << "b-a" << setw(15) << "f(a)" << setw(15) << "f(c)" << setw(15) << "f(a)*f(c)" << endl;
    d = 0;

    while (newb - newa > 0.0001) // цикл
    {
        c = (newa + newb) / 2;
        fa = exp(newa) - pow(newa, 2) - 2 * newa;
        fc = c * c - sin(5 * c);
        cout << setw(5) << newa << setw(15) << newb << setw(15) << c << setw(15) << newb - newa << setw(15) << fa << setw(15) << fc << setw(15) << fa * fc << endl;

        if (fa * fc < 0) // если fa * fc < 0, то
        {
            newb = c;
        }
        else if (fa * fc > 0) // иначе
        {
            newa = c;
        }
        d += 1;
    }

    cout << c << endl; // вывод
    cout << d << endl;


    // второе задание 

    cout << "xi" << "\t" << "yi" << "\t" << "xi2" << "\t" << "xi3" << "\t" << "xi4" << "\t" << "xiyi" << "\t" << "xi2yi" << endl; // "\t" горизонтальная табуляция
    for (int i = 0; i < dl; i++)
    {
        xi += x[i];
        yi += y[i];
        xi2 += x[i] * x[i];
        xiyi += x[i] * y[i];
        xi2yi += x[i] * x[i] * y[i];
        xi3 += x[i] * x[i] * x[i];
        xi4 += x[i] * x[i] * x[i] * x[i];

        cout << x[i] << "\t" << y[i] << "\t" << x[i] * x[i] << "\t" << x[i] * x[i] * x[i] << "\t" << x[i] * x[i] * x[i] * x[i] << "\t" << x[i] * y[i] << "\t" << x[i] * x[i] * y[i] << endl; // "\t" горизонтальная табуляция
    }

    cout << "+ xi" << "\t" << "+ yi" << "\t" << "+ xi2" << "\t" << "+ xi3" << "\t" << "+ xi4" << "\t" << "+ xiyi" << "\t" << "+ xi2yi" << endl;
    cout << xi << "\t" << yi << "\t" << xi2 << "\t" << xi3 << "\t" << xi4 << "\t" << xiyi << "\t" << xi2yi << endl; // "\t" горизонтальная табуляция
    
    double lb = (xiyi * xi - xi2 * yi) / (xi * xi - xi2 * dl); // линейные
    double la = (yi - lb * dl) / xi;
    double delta = (xi4 * xi2 * dl + xi3 * xi * xi2 + xi2 * xi3 * xi - xi2 * xi2 * xi2 - xi4 * xi * xi - xi3 * xi3 * dl);
    double delta1 = (xi2yi * xi2 * dl + xi3 * xi * yi + xi2 * xiyi * xi - xi2 * xi2 * yi - xi2yi * xi * xi - xi3 * xiyi * dl);
    double delta2 = (xi4 * xiyi * dl + xi2yi * xi * xi2 + xi2 * xi3 * yi - xi2 * xiyi * xi2 - xi4 * xi * yi - xi2yi * xi3 * dl);
    double delta3 = (xi4 * xi2 * yi + xi3 * xiyi * xi2 + xi2yi * xi3 * xi - xi2yi * xi2 * xi2 - xi4 * xiyi * xi - xi3 * xi3 * yi);
    double ka = delta1 / delta; // квадратичные
    double kb = delta2 / delta;
    double kc = delta3 / delta;

    for (int i = 0; i < dl; i++) // цикл
    {
        Q += pow((y[i] - (la * x[i]) - lb), 2);
        kQ += pow((y[i] - ka * x[i] * x[i] - kb * x[i] - kc), 2);
    }

    cout << " y = " << la << "x + " << lb << " c discrepat Q = " << Q << " i quadraticum dependentiam y = " << ka << "x2 + " << kb << " x " << kc << " c  discrepat Q = " << kQ << endl; // вывод
    return 0;
} 