#include <iostream>
#include <math.h>
using namespace std;
#define PI 3.14159265

void per(double a, double c, double b, double d) {     //Функция: периметр трапеции

    cout<<"Perimetr of the trapeze = "<<a+b+c+d<<endl;

}
void sq(double a,double b,double h) {                  //Функция: площадь трапеции

    cout<<"Square of the trapeze = "<<(a+b)/2*h<<endl;

}
void per(double R) {                                   //Функция: периметр круга

    cout<<"Perimeter of the circle = "<<2*PI*R<<endl;

}
void sq(double R) {                                    //Функция: площадь круга

    cout<<"Area of the circle = "<<PI*R*R<<endl;

}
void per(long double A) {                              //Функция: периметр квадрата

    cout<<"The perimeter of the square = "<<4*A<<endl;

}
void sq(long double A) {                               //Функция: площадь квадрата

    cout<<"Square area = "<<A*A<<endl;

}

int main() {
double a, b, c, d, h, R;
long double A;

cout<<"Enter variables for the perimeter of the trapezoid"<<endl;
cout<<"a = ";
cin>>a;

cout<<"b = ";
cin>>b;

cout<<"c = ";
cin>>c;

cout<<"d = ";
cin>>d;

per(a,b,c,d);

cout<<"-------------"<<endl;



cout<<"Enter variables for the trapezoid area"<<endl;

cout<<"a = ";
cin>>a;

cout<<"b = ";
cin>>b;

cout<<"h = ";
cin>>h;

sq(a,b,h);

cout<<"-------------"<<endl;



cout<<"Enter variables for the perimeter of the circle"<<endl;

cout<<"R = ";
cin>>R;
per(R);

cout<<"-------------"<<endl;



cout<<"Enter variables for the area of the circle"<<endl;

cout<<"R = ";
cin>>R;
sq(R);

cout<<"-------------"<<endl;



cout<<"Enter variables for the perimeter of the square"<<endl;

cout<<"a = ";
cin>>A;
per(A);

cout<<"-------------"<<endl;



cout<<"Enter variables for the square area"<<endl;

cout<<"a = ";
cin>>A;
sq(A);

cout <<"------------------" << endl;
}