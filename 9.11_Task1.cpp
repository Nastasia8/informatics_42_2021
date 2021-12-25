#include <iostream>
#include <cmath>
#include <windows.h>

using namespace std;


int main(){
SetConsoleOutputCP(1251);

float a, b, c;
cout<<"Введите три числа"<<endl;
cin>>a>>b>>c;
float *vales_a = &a;
float *vales_b = &b;
float *vales_c = &c;
cout<<"Число a = "<<*vales_a<<endl;
cout<<"Число b = "<<*vales_b<<endl;
cout<<"Число c = "<<*vales_c<<endl;

    return 0;
}