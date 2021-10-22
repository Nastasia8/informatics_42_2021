#include <iostream>
#include <cmath>
#include "objects.h"
#include "function.h"

using namespace std;



int main() {
    float y;

    cout << "Second task" << endl;

    float xs[5] = { 1.9, 2.15, 2.34, 2.73, 3.16 };

    function(a, b, xs, (int)(sizeof(xs) / sizeof(xs[0])), y);



}


