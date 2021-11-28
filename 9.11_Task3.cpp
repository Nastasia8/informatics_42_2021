#include <iostream>
#include <cmath>
#include <windows.h>
#include <time.h>

using namespace std;


int main(){
SetConsoleOutputCP(1251);
int n;
cout<<"n = ";
cin>>n;
double *M;
    M = new double[n];
srand(time(0));
int minimum = 200;
int index = 0;
for(int i = 0; i<n; i++){
    M[i] = rand()%100;
    cout<<i+1<<". "<<M[i]<<endl;
    if (M[i] < minimum) {
        minimum = M[i];
        index = i;
    }
}
cout<<endl;
cout<<index<<". "<<minimum<<endl;

    return 0;
}