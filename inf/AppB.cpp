#include <iostream>
#include <cmath>
#include "objects.h"
#include "function.h"

using namespace std;



int main() {
    float y;

    cout << "Second task" << endl;

    float xs[5] = { 4.48, 3.56, 2.78, 5.28, 3.21 };

    function(a, b, xs, (int)(sizeof(xs) / sizeof(xs[0])), y);



}


