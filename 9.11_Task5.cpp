#include <iostream>
#include <cmath>
#include <windows.h>
#include <time.h>

using namespace std;

void FindMin(long **arr, int rows, int cols){
    double Min[rows];
    for(int i = 0; i<rows; i++){
        int minimum = 1000000;
        for(int j = 0; j<cols; j++){
            if (arr[i][j] < minimum) {
                minimum = arr[i][j];
            }
        }
        Min[i] = minimum;
    }
    for(int k = 0; k<rows; k++){
        cout<<k+1<<". "<<Min[k]<<" ";
    }
}
int main(){
SetConsoleOutputCP(1251);
int rows, cols;
cout<<"rows = "; cin>>rows;
cout<<"cols = "; cin>>cols;
long **Array = new long* [rows];
for(int i = 0; i<rows; i++){
    Array[i] = new long[i+1];
}
srand(time(0));
for(int i = 0; i<rows; i++){
    for(int j = 0; j<cols; j++){
        Array[i][j] = rand()%10000;
        cout<<Array[i][j]<<" ";
    }
    cout<<endl;
}
FindMin(Array,rows,cols);
return 0;
}