#include <iostream>
#include <cmath>
#include <windows.h>

using namespace std;

void funk(int n){
    int prod = 1;
    while (n>0) {
        prod *= n % 10;
        n /= 10;
    }
    cout<<"Proizvedenie = "<<prod<<endl;
}

int main(){
SetConsoleOutputCP(1251);
long n;
cout<<"Enter the number: ";
cin>>n;
while ((n<100000) || (n>999999)) {
    cout<<"Number isn't correct"<<endl;
    cin >>n;
}
funk(n);

    return 0;
}