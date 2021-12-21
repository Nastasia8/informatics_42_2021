#include <iostream>
#include <windows.h>
using std::cout;
using std::endl;

void function(int*, int*, int*);

int main(){
SetConsoleCP(CP_UTF8);
SetConsoleOutputCP(CP_UTF8);

    int a = 0;
    int b = 0;
    int c = 0;

    cout << "Были" << endl << a << endl << b << endl << c << endl;
    cout << "============" << endl << "Стали" << endl;

    function(&a, &b, &c);

    cout << a << endl << b << endl << c << endl;

    return 0;
}

void function(int *a, int *b, int *c){

    *a = 777;
    *b = 666;
    *c = 555;
}