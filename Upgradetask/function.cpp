#include <iostream>
#include <cmath>

using namespace std;

void function(const float b, float y, float x, float x_end, float step ){
    for (; x < x_end; x += step)
    {
        y= (1 + pow (sin(pow(b,3) + pow(x,3)),2 )) / (pow (pow(b,3)+pow(x,3),1/3));
        cout<<"y = "<<y<<endl;
    }
} 
void function(const float b, float xs[], int size, float y){
    for (int i=0; i< size; i++){
        y= (1 + pow (sin(pow(b,3) + pow(xs[i],3)),2 )) / (pow (pow(b,3)+pow(xs[i],3),1/3));
        cout<<"y = "<<y<<endl;
    }

}  