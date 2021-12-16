#include <iostream>
#include <cmath>
#include <windows.h>

using namespace std;


int main(){
SetConsoleOutputCP(1251);
int number;
cout<<"Enter the number: ";
cin>>number;
int k=0;
while(number!=1){
    k++;
    if(number%2==0){
        number /= 2;
        }
    else{
        number = (number*3+1)/2;
    }
    cout<<k<<". "<<number<<endl;  
}

    return 0;
}