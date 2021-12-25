#include <iostream>
#include <cmath>

using namespace std;

double funk(double a, double x){
    double y=pow(a, pow(x, 2)-1)-log10(pow(x, 2)-1)+pow(pow(x, 2)-1, 1/3);
    return y;
}

int main(){
double xn = 1.2, xk = 3.7, a=1.6, y=0;
cout<<"A"<<endl;
for(double x=xn; x<=xk; x+=0.5){
    double y=funk(a,x);
    cout<<"If x ="<<x<<", y = "<<y<<endl;
    }
cout<<"B"<<endl;
double X[5]={1.28,1.36, 2.47, 3.68, 4.56};
for(int i=0; i<5; i++){
    y=funk(a, X[i]);
    cout<<"If x ="<<X[i]<<", y ="<<y<<endl;
}
    return 0;
}