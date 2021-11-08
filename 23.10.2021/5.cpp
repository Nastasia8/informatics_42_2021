#include <iostream>
#include <cmath>

using namespace std;


void calc(int x, int y, int z){
    float f1,f2;
    float D = y*y - 4*x*z;
    if (D>0) {
        f1 = (-y + sqrt(D))/2*x;
        f2 = (-y - sqrt(D))/2*x;
        cout <<"Korni -> " << f1 <<" "<< f2;

     } else if (D==0) {
        f1 = -y/2*x;
        cout <<"Koren -> " << f1 ;

     } else {
        cout<<"Korney net";
     }

}


int main(){
    int x,y,z;
    cin >> x>> y >> z;
    calc(x,y,z);

   


}