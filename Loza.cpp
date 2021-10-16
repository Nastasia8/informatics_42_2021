#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main(int argc, char *argv[])
{
    float x = 1;                 // координаты вектора a
    float y = 5;                 // координаты вектора a
    float z = 3;                 // координаты вектора a
    float vec_length_a;
    float vec_length_b;
    float x1 = 0;                // координаты вектора b
    float y1 = 0;                // координаты вектора b
    float z1 = 0;                // координаты вектора b
    float scal_product;
    float vec_length_c;
    float cosa;
    float vec_product;

    vec_length_a = pow(pow(x, 2) + pow(y, 2) + pow(z, 2), 0.5);
    cout << vec_length_a << endl;

    vec_length_b = (1, 5, 3) / vec_length_a;
    cout << vec_length_b << endl;

    cout << "enter the coordinate x1" <<endl;             // введите координату
    cin >> x1;
    cout << "enter the coordinate y1" <<endl;
    cin >> y1;
    cout << "enter the coordinate z1" <<endl;
    cin >> z1;

    scal_product = x * x1 + y * y1 + z * z1;
    cout << "c = " << scal_product <<endl;

    vec_length_c = pow(pow(x1, 2) + pow(y1, 2) + pow(z1, 2), 0.5);

    cosa = scal_product / (vec_length_a * vec_length_c);
    vec_product = vec_length_a * vec_length_c * cosa;
    cout << "vec_product = " << vec_product <<endl;

    return 0;
}