#include <iostream>
#include <cmath>
#include <windows.h>
#include <time.h>

using namespace std;


int main(){
SetConsoleOutputCP(1251);
int size;
cout<<"size = ";
cin>>size;
double *Array;
    Array = new double[size];
srand(time(0));
int minimum = 200;
int index = 0;
for(int i = 0; i<size; i++){
    Array[i] = rand()%100;
    cout<<i+1<<". "<<Array[i]<<endl;
    if (Array[i] < minimum) {
        minimum = Array[i];
        index = i;
    }
}
cout<<endl;
cout<<index<<". "<<minimum<<endl;

    return 0;
}
