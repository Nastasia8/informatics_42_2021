#include <iostream>
#include <cmath>
#include "objects.h"
#include "function.h"

int main(){

    
    const float numbs[] = {1.2 , 1.28 , 1.36 , 1.46 , 2.35};

    std::cout << "For significant x: " << std::endl;
    std::cout << " x\t  y" << std::endl;

    function(a , b , numbs , (int)(sizeof(numbs)/sizeof(numbs[0])));
    
    return 0;                    
}