#include <iostream>
#include <cmath>
#define M_PI 3.14159265358979323846

int P(int a, int b, int c, int d){
    int result=a+b+c+d;
    return result;
}
double P(int a, int pi){
    double result = 2*pi*a;
    return result;
}
int P(int a){
    int result = 4*a;
    return result;
}
 int S(int a, int b, int c){
     int result = ((a+b)*c)/2;
     return result;
 }
double S(int a, int pi){
     double result = pi*pow(a, 2);
     return result;
 }
int S(int a){
    int result = pow(a,2);
    return result;
}

using namespace std;

int main(){
cout<<"Trapecia:"<<endl;
int side1, side2, Base, base, hieght; 
double Perimetr, Square;
cout<<"Base = "; cin>>Base;
cout<<"base = "; cin>>base;
cout<<"Side 1 = "; cin>>side1;
cout<<"Side 2 = "; cin>>side2;
cout<<"Hieght = "; cin>>hieght;
Perimetr=P(Base,base,side1,side2);
Square=S(Base, base, hieght);
cout<<"Perimetr = "<<Perimetr<<endl;
cout<<"Square = "<<Square<<endl;
Square=0;
Perimetr=0;
cout<<"Circle:"<<endl;
double pi = M_PI;
int r;
cout<<"Radius = "; cin>>r;
Perimetr=P(r, pi);
Square=S(r, pi);
cout<<"Perimetr = "<<Perimetr<<endl;
cout<<"Square = "<<Square<<endl;
Square=0;
Perimetr=0;
cout<<"Foursquare:"<<endl;
int side;
cout<<"Side = "; cin>>side;
Perimetr=P(side);
Square=S(side);
cout<<"Perimetr = "<<Perimetr<<endl;
cout<<"Square = "<<Square<<endl;
return 0;
}