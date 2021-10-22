#include <iostream>
#include <cmath>
#include "objects.h"
#include "function.h"

using namespace std;



int main() {
    float y;

    cout << "Second task" << endl;

    float xs[5] = { 0.15, 0.26, 0.37, 0.48, 0.56 };

    function(a, b, xs, (int)(sizeof(xs) / sizeof(xs[0])), y);



}


