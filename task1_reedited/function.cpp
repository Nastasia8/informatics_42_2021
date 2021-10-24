#include <iostream>
#include <cmath>

double function(const float a, const float b,float x){
    return pow(a +b*x , 2.5)/(1+log10(a+b*x));
}
void function(const float a, const float b, const float numb[], int size){
    for (int i=0; i < size ; i++)
    {
        std::cout << numb[i]<< "\t" << pow(a +b*numb[i] , 2.5)/(1+log10(a+b*numb[i])) << std::endl;
    }
}