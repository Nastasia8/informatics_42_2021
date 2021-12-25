#include <iostream>
#include <math.h>
using namespace std;

double LengthVector(double x, double y, double z) {     ////Функция: длина вектора
    return  sqrt(pow(x, 2) + pow(y, 2) + pow(z, 2));
}


int main() {
    double x = 1;
    double y = 5;
    double z = 3;
    double a, b, c;

    double length = LengthVector(x, y, z);
    cout << "Length Vector = " << length << endl;
    cout <<"------------------" << endl;
    cout << "Unitle Vector = (" << x / length << "; " << y / length << "; " << z / length << ")" << endl;
    cout <<"------------------" << endl;
    cout << "Enter the new coordinates of the vector a, b, c" << endl;
    cout << "Input a = ";
    cin >> a;
    cout << "Input b = ";
    cin >> b;
    cout << "Input c = ";
    cin >> c;
    cout <<"------------------" << endl;
    cout << "Scalar Product = " << x * a + y * b + z * c << endl;
    cout <<"------------------" << endl;
    cout << "Vector Product = " << (y * c - z * b) << "i " << -1 * (x * c - z * a) << "j " << (y * c - z * b)<<"k" << endl;
    cout <<"------------------" << endl;
    return 0;
}