
#include <iostream>
#include <cmath>
#include "objects.h"
#include "function.h"

using namespace std; // пространство имён


int main() 
{
    float y, x, xk, dx; // c плав.точкой

    x = 3.2;
    xk = 6.2;
    dx = 0.6;

    cout << "First task" << endl; // вывод

    function(a, b, y, x, xk, dx);

}
