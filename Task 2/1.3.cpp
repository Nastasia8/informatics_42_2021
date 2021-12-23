#include <iostream>
#include <cmath>

using namespace std;

float Scalar(int x,int a,int y,int b,int z,int c)
{
    return x*a + y*b + z*c;
}

int main()
{
    setlocale(LC_ALL, "Russian");

    int x = 1;
    int y = 5;
    int z = 3;
    int a;
    int b;
    int c;

    cout <<"Вычислите скалярное произведение векторов "<<endl;

    cout <<"Введите переменные ";
    cin >>a>>b>>c;
    
    cout <<"Скалярное произведение = "<< Scalar(x, a, y, b, z, c)<<endl;
 
    return 0;
}