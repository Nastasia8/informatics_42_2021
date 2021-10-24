#include <iostream>
#include <cmath>
#include "function.h"

using namespace std;



int main(){
    float y;

    cout <<"Second task"<<endl;
    float xs[] = {1.84, 2.71, 3.81, 4.56, 5.62};
    
    function(xs, (int)(sizeof(xs)/sizeof(xs[0])), y);
    


}