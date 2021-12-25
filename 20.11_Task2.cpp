#include <iostream>
#include <cmath>
#include <windows.h>

using namespace std;

void algoritm(int n){
    int bin = 0;
    int octo = 0;
    int hex = 0;
    int a = n;
    int b = n;
    for(int i=0; n>0; i++){
        bin += (n%2) * pow(10.0, i);
        n/=2;
    }
    for(int i=0; a>0; i++){
        octo += (a%8) * pow(10.0, i);
        a/=8;
    }
    for(int i=0; b>0; i++){
        hex += (b%16) * pow(10.0, i);
        b/=16;
    }
    cout<<"binar: "<<bin<<endl;
    cout<<"octopic: "<<octo<<endl;
    cout<<"hexademical: "<<hex<<endl;
}

int main(){
SetConsoleOutputCP(1251);   
int n;
cout<<"Enter the number: ";
cin>>n;
while((n<0)||(n>325)){
    cout<<"Write correct number: ";
    cin>>n;
} 
algoritm(n);

  return 0;
}

