#include <iostream>
#include <cmath>

using namespace std;

float ScalarProduct(int x,int a,int y,int b,int z,int c)
{
    return x*a + y*b + z*c;
}

int main()
{
    setlocale(LC_ALL, "Russian");

    int x = 1;
    int y = 5;
    int z = 3;
    int a,b,c;

    cout <<"1.3"<<endl;

    cout <<"Введите переменные ";
    cin >>a>>b>>c;
    
    cout <<"Скалярное произведение = "<<ScalarProduct(x, a, y, b, z, c)<<endl;
 
    return 0;
}