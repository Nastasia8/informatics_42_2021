#include <iostream>
#include <cmath>
#include "objects.h"

double funct(float x){
    return pow(a +b*x , 2.5)/(1+log10(a+b*x));
}  

int main(){

    std::cout << "For range of x: " << std::endl;
    std::cout << " x\t  y" << std::endl;

    double y = 0;
    for(lowest_x; lowest_x <= highest_x; lowest_x += step){
        y = funct(lowest_x);
        std::cout << lowest_x << "\t" << y << std::endl;
    }

    std::cout << "For significant x: " << std::endl;
    std::cout << " x\t  y" << std::endl;

    for (int i=0; i < sizeof(numbs)/sizeof(numbs[0]) ; i++)
    {
       std::cout << numbs[i] << "\t" << funct(numbs[i]) << std::endl;
    }
    
    return 0;                    
}
