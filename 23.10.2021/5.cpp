#include <iostream>
#include <cmath>
using namespace std;

void calc(int x, int y, int z){
    float C1,C2;
    float D = y*y - 4*x*z;
    if (D>0) {
        C1 = (-y + sqrt(D))/2*x;
        C2 = (-y - sqrt(D))/2*x;
        cout <<"Корни = " << C1 <<" "<< C2;

     } else if (D==0) {
        C1 = -y/2*x;
        cout <<"1 Корень = " << C2 ;

     } else {
        cout<<"Корней нет.";
     }
}

int main(){
    int x,y,z;
    cin >> x>> y >> z;
    calc(x,y,z);

}