#include <iostream>

void replace(float*, float*);

int main(int argc, char const *argv[]){
    float first = -30.7;
    float second = 27.8;
    std::cout << "Start :" << std::endl;
    std::cout << "First: " << first << std::endl;
    std::cout << "Second: " << second << std::endl;
    replace(&first, &second);
    std::cout << "Edited value:" << std::endl;
    std::cout << "Edited first: " << first << std::endl;
    std::cout << "Edited second: " << second << std::endl;
    
}

void replace(float *first, float *second){
    float buffer = *first;
    *first = *second;
    *second = buffer;
}