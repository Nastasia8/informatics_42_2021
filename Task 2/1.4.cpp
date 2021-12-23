#include <iostream>
#include <cmath>
using namespace std;

void Vector(int x,int a,int y,int b,int z,int c)
{
    cout<<" Произведение векторов = "<<y*c - z*b<<"; "<<-1*(x*c - z*a)<<"; "<<x*b - y*a<< "; " << endl;
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
 
    cout <<"Векторное произведение векторов"<<endl;
    cout << "Введите переменные ";
    cin >> a >> b >> c;
    Vector(x, y, z, a, b, c);

    
    return 0;
}