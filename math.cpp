#include <iostream>
#include <cmath>

using namespace std;

int main(){
    float y,xbegin,xend,xtr;
    const float a = 2.0;
    const float b = 0.95;
    xbegin = 1.25;
    xend = 2.75;
    xtr = 0.3;

    cout<<"First task"<<endl;
    
    for (; xbegin<xend; xbegin += xtr)
    {
        y= (1 + pow(log10(xbegin/a), 2))/(b-exp(xbegin/a));
        cout<<"y = "<<y<<endl;
    }

    cout <<"Second task"<<endl;
    
    float xarr[5] = {2.2, 3.78, 4.51, 6.58, 1.2};

    for (float xbegin : xarr){
        y= (1 + pow(log10(xbegin/a), 2))/(b-exp(xbegin/a));
        cout<<"y = "<<y<<endl;
    }


}
