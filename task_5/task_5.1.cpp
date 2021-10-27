#include <iostream>

void function(int*, int*, int*);

int main(int argc, char const *argv[]){
    int first = 228;
    int second = 2;
    int thrid = 3;
    function(&first, &second, &thrid);
    std::cout << first << std::endl;
    std::cout << second << std::endl;
    std::cout << thrid << std::endl;
}

void function(int *first, int *second, int *thrid){
    
    *first = *first / *second / *thrid;
    *second = *first + 10;
    *thrid -= 3;
}