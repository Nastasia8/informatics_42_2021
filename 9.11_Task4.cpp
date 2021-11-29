#include <iostream>
#include <cmath>
#include <windows.h>
#include <time.h>

using namespace std;

void fillArray(double* Array, int size){
    srand(time(0));
    for(int i = 0; i<size; i++){
        Array[i] = rand()%100;
    }
}

void printArray(double* Array, int size){
    for(int i = 0; i<size; i++){
        cout<<i+1<<". "<<Array[i]<<endl;
    }
}

void minimum(double* Array, int size){
    int minimum = 200;
    int index = 0;
    for(int i = 0; i<size; i++){
        if (Array[i] < minimum) {
            minimum = Array[i];
            index = i+1;
        }
    }
    cout<<index<<". "<<minimum<<endl;
}

int main(){
SetConsoleOutputCP(1251);
int size;
cout<<"size = ";
cin>>size;
double *Array;
Array = new double[size];
fillArray(Array,size);
printArray(Array,size);
minimum(Array,size);
    return 0;
}