#include <iostream>
#include <cmath>
#include "objects.h"
#include "function.h"

int main(){

    float lowest_x = 1.1;
    const float highest_x = 3.6;
    const float step = 0.5;

    std::cout << "For range of x: " << std::endl;
    std::cout << " x\t  y" << std::endl;

    for(lowest_x; lowest_x <= highest_x; lowest_x += step){
        std::cout << lowest_x << "\t" << function(a, b, lowest_x) << std::endl;
    }
    
    return 0;                    
}