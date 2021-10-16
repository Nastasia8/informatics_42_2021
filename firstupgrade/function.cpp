#include <iostream>
#include <cmath>

using namespace std;

void function(const float a, const float b, float y, float xbegin, float xend, float xtr ){
    for (; xbegin<xend; xbegin += xtr)
    {
        y= (1 + pow(log10(xbegin/a), 2))/(b-exp(xbegin/a));
        cout<<"y = "<<y<<endl;
    }
} 
void function(const float a, const float b, float xarr[], int size, float y){
    for (int i=0; i< size; i++){
        y= (1 + pow(log10(xarr[i]/a), 2))/(b-exp(xarr[i]/a));
        cout<<"y = "<<y<<endl;
    }

} 