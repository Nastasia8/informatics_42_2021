#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main(int argc, char *argv[])
{
    float x = 1;                 // координаты вектора a
    float y = 5;                 // координаты вектора a
    float z = 3;                 // координаты вектора a
    float x1;                    // координаты единичного вектора
    float y1;                    // координаты единичного вектора
    float z1;                    // координаты единичного вектора
    float vec_length_a;
    float vec_length_b;
    float x2 = 0;                // координаты вектора b
    float y2 = 0;                // координаты вектора b
    float z2 = 0;                // координаты вектора b
    float scal_product;
    float vec_length_c;
    float cosa;
    float sina;
    float vec_product;

    vec_length_a = pow(pow(x, 2) + pow(y, 2) + pow(z, 2), 0.5);
    cout << vec_length_a << endl;

    vec_length_b = (1, 5, 3) / vec_length_a;
    x1 = x/vec_length_a;
    y1 = y/vec_length_a;
    z1 = z/vec_length_a;
    cout << x1 << ";" << y1 <<";" << z1 <<endl;
    cout << vec_length_b << endl;

    cout << "enter the coordinate x2" <<endl;             // введите координату
    cin >> x2;
    cout << "enter the coordinate y2" <<endl;
    cin >> y2;
    cout << "enter the coordinate z2" <<endl;
    cin >> z2;

    scal_product = x * x2 + y * y2 + z * z2;
    cout << "c = " << scal_product <<endl;

    vec_length_c = pow(pow(x2, 2) + pow(y2, 2) + pow(z2, 2), 0.5);

    cosa = scal_product / (vec_length_a * vec_length_c);
    sina = pow((1 - pow(cosa,2)),0.5);
    vec_product = vec_length_a * vec_length_c * sina;
    cout << "vec_product = " << vec_product <<endl;

    return 0;
}