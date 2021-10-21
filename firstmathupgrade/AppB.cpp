#include <iostream>
#include <cmath>
#include "objects.h"
#include "function.h"

using namespace std;



int main(){
    float y;

    cout <<"Second task"<<endl;
    
    float xarr[] = {1.21, 1.76, 2.53, 3.48, 4.52};
    
    function(a, b, xarr, (int)(sizeof(xarr)/sizeof(xarr[0])), y);
    


}
