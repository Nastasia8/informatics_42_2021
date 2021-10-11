#include <iostream>
#include <cmath>

double funct(float x){
    const float a = 2.5;
    const float b = 4.6;

    return pow(a +b*x , 2.5)/(1+log10(a+b*x));
}  

int main(){
    
    float lowest_x = 1.1;
    const float highest_x = 3.6;
    const float step = 0.5;
    float numbs[] = {1.2 , 1.28 , 1.36 , 1.46 , 2.35};

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
