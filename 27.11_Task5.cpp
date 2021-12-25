#include <iostream>
#include <cmath>
#include <windows.h>

using namespace std;

void funk(int n){
    int *array = new int[n+1];
    for(int i=0; i<=n; i++){
        array[i]=i;
    }
    for(int i=2; i*i<=n; i++){
        if(array[i]){
            for(int j=i*i; j<=n; j+=i){
                array[j]=0;
            }
        }
    }
    for(int i=2; i<n; i++){
        if(array[i]){
            cout<<array[i]<<" ";
        }
    }
    cout<<endl;
}

int main(){
SetConsoleOutputCP(1251);
int number;
cout<<"Enter the number: ";
cin>>number;
funk(number);

    return 0;
}