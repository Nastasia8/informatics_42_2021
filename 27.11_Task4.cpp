#include <iostream>
#include <cmath>
#include <windows.h>

using namespace std;

long double factorial(int k){
    if(k<0) return 0;
    if(k==0) return 1;
    else return k*factorial(k-1);
}

int main(){
SetConsoleOutputCP(1251);
int number, summa=0;
cout<<"Enter the number: ";
cin>>number;
for(int k=1; k<=number; k++){
    summa += -1*k*((5-k)/factorial(k));
}
cout<<"Summa = "<<summa<<endl;

    return 0;
}