#include <iostream>
#include <cmath>

using namespace std;

float Discriminant(int x, int y, int z){
    int f1, f2;
    double D = pow(y,2) - 4*x*z;
    if (D<0){
        cout<<"Korney net";
    }
    if (D==0){
        f1 = (-y)/(2*x);
        cout<<"F = "<<f1<<endl;
    }
    if (D>0){
        f1 = (-y+sqrt(D))/(2*x);
        f2 = (-y-sqrt(D))/(2*x);
        cout<<"F1 = "<<f1<<endl;
        cout<<"F2 = "<<f2<<endl;
    }
}


int main(){
int x, y, z;
cout<<"x = ";
cin>>x;
cout<<"y = ";
cin>>y;
cout<<"z = ";
cin>>z;
Discriminant(x,y,z);
return 0;
}