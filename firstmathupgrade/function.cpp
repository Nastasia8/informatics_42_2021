#include <iostream>
#include <cmath>

using namespace std;

void function(const float a, const float b, float y, float xbegin, float xend, float xtr ){
    for (; xbegin<xend; xbegin += xtr)
    {
        y= (log10(xbegin*xbegin-1))/(log(a*xbegin*xbegin-b)/log(5));
        cout<<"y = "<<y<<endl;
    }
} 
void function(const float a, const float b, float xarr[], int size, float y){
    for (int i=0; i< size; i++){
        y= (log10(xarr[i]*xarr[i]-1))/(log(a*xarr[i]*xarr[i]-b)/log(5));
        cout<<"y = "<<y<<endl;
    }

} 
