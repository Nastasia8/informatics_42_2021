#include <iostream>
#include <windows.h>
using std::cout;
using std::endl;

void inverse_function(float*, float*);


int main() {
SetConsoleCP(CP_UTF8);
SetConsoleOutputCP(CP_UTF8);

    float a = 34.5, b = 67.9;
    cout << "Изначально " << endl << a << "  " << b << endl << "========" << endl;

    inverse_function(&a, &b);
    cout << "Результат работы " << endl << a << "  " << b << endl;
    return 0;
}

void inverse_function(float *a, float *b){

    float c = *a;
    *a = *b;
    *b = c;
}