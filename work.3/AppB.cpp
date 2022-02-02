
#include <iostream>
#include <cmath>
#include "objects.h"
#include "function.h"

using namespace std; // пространство имен


int main() 
{
    float y; // с плав.точкой

    cout << "Second task" << endl; // вывод

    float xs[5] = { 4.48, 3.56, 2.78, 5.28, 3.21 }; // массив

    function(a, b, xs, (int)(sizeof(xs) / sizeof(xs[0])), y);

}

