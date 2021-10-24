#include <iostream>
#include <cmath>

using namespace std;

void function(float y, float x_b, float x_end, float step ){
    for (; x_b<x_end; x_b += step)
    {
        y = pow(abs(pow(x_b,2)-2.5),0.25)+pow(log10(pow(x_b,2)),0.3333);
        cout << y <<endl;
    }
} 
void function(float xs[], int size, float y){
    for (int i=0; i< size; i++){
        cout << pow(abs(pow(xs[i],2)-2.5),0.25)+pow(log10(pow(xs[i],2)),0.3333) << endl;

    }

} 