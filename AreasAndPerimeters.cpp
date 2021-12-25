#include <iostream>
#include <locale>
#include <cmath>
using namespace std;
using std::cout;
using std::cin;


double S(double side) // площадь квадрата
{
    return side * side;
}
double P(double side) // периметр квадрата
{
    return side * 4;
}
double S1(double radius) // площадь круга
{
    return radius * radius * 3.14;
}
double P1(double radius) // длина окружности
{
    return radius * 2 * 3.14;
}
double S(double sidea, double sideb, double height) // площадь трапеции
{
    return (sidea + sideb) * height / 2.0;
}
double P2(double sidea, double sideb, double sidec, double sidef) // периметр трапеции
{
    return sidea + sideb + sidec + sidef;
}
int main()
{
    setlocale(LC_ALL, "0");
    cout << " enter square side length: " << endl;
    double a;
    cin >> a;
    cout << " square area " << S(a) << endl;
    cout << " square perimetr " << P(a) << endl;
    cout << " enter   radius length: " << endl;
    double a1;
    cin >> a1;
    cout << " сircumference area " << S1(a1) << endl;
    cout << " сircumference length " << P1(a1) << endl;
    cout << " enter trapezioid bases and height: " << endl;
    double a2;
    double h;
    cin >> a >> a2 >> h;
    cout << " enter trapezioid sides " << endl;
    double a3;
    double a4;
    cin >> a3 >> a4;
    cout << " trapezioid area " << S(a, a2, h) << endl;
    cout << " trapezioid perimetr: " << P2(a, a2, a3, a4) << endl;
    system("pause");
    return 0;
}