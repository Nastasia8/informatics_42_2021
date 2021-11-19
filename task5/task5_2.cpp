#include <iostream>
using namespace std;

void function(float *a, float *b){
    float c = *a;
    *a = *b;
    *b = c;
}

int main(int argc, char const *argv[]){
    float a = -15.28;
    float b = 50.1;
    cout << "First: " << a << endl;
    cout << "Second: " << b << endl;

    function(&a, &b);

    cout << "" << endl;
    cout << "First: " << a << endl;
    cout << "Second: " << b << endl;
    
}