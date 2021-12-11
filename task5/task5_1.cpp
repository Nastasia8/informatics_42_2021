#include <iostream>
using namespace std;

void function(int*, int*, int*);

int main(int argc, char const *argv[]){
    int a = 10;
    int b = 5;
    int c = 7;

    cout << a << endl;
    cout << b << endl;
    cout << c << endl;

    function(&a, &b, &c);

    cout << "" << endl;
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    
}

void function(int *first, int *second, int *thrid){
    
    *first += 5;
    *second += 10;
    *thrid -= 3;
}