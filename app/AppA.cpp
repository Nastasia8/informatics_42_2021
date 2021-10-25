#include <iostream>
#include <math.h>
#include "objects.h"
#include "function.h"

using namespace std;

int main(){

    float xbegin = 0.11;

    float xend = 0.36;

    float xtr = 0.05;

    float x = 0;

    cout << "Answer to first task: " << endl;

    for (x = xbegin; x < xend; x += xtr){

    answer(Degree, x);

    }

    return 0;
}

