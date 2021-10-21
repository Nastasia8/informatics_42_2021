#include <iostream>
#include <cmath>

using namespace std;

int main(){
    float y,xbegin,xend,xtr;
    const float a = 1.1;
    const float b = 0.09;
    xbegin = 1.2;
    xend = 2.2;
    xtr = 0.2;

    cout<<"First task"<<endl;
    
    for (; xbegin<xend; xbegin += xtr)
    {
        y= (log10(xbegin*xbegin-1))/(log(a*xbegin*xbegin-b)/log(5));
        cout<<"y = "<<y<<endl;
    }

    cout <<"Second task"<<endl;
    
    float xarr[5] = {1.21, 1.76, 2.53, 3.48, 4.52};

    for (float xbegin : xarr){
        y= (log10(xbegin*xbegin-1))/(log(a*xbegin*xbegin-b)/log(5));
        cout<<"y = "<<y<<endl;
    }


}
