#include <iostream>
#include <cmath>

using namespace std;

double modul(int x, int y, int z){
    double m=(pow((pow(x,2)+pow(y,2)+pow(z,2)), 1/2));
    return m;
} 

int main(){
int x=1, y=5, z=3, leigth=0;
leigth=modul(x, y, z);
cout<<"1. Leigth of vector = "<<leigth<<endl;
int b;
b=(x/leigth)+(y/leigth)+(z/leigth);
cout<<"2. b = "<<b<<endl;
int x1, y1, z1, scalar;
cout<<"x = "; cin>>x1;
cout<<"y = "; cin>>y1;
cout<<"z = "; cin>>z1;
scalar=x*x1+y*y1+z*z1;
cout<<"3. Scalarnoe proizvedenie = "<<scalar<<endl;
double vector, i, j, k;
i=(y*z1-z*y1);
j=-(x*z1-z*x1);
k=(x*y1-y*x1);
vector=modul(i,j,k);
cout<<"4. Vectornoe proizvedenie = "<<vector<<endl;
return 0;
}