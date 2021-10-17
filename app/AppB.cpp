#include <iostream>
#include <math.h>
#include "objects.h"
#include "function.h"

using namespace std;

int main(){

    float test = 0;

    float xarray[] = {0.2, 0.3, 0.38, 0.43, 0.57};

    int arraylen = (sizeof(xarray)/sizeof(xarray[0])); 

    cout << "Answer to second task: " << endl;

    answer(degree, xarray, arraylen);

    return 0;
}