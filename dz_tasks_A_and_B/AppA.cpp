#include <iostream>
#include <cmath>
#include "function.h"

using namespace std;

int main()
{
    float v[6] = {1.56, 2.19, 2.82, 3.45, 4.08, 4.71};
    int size;

    size = sizeof(v) / sizeof(v[6]);
    cout<< size <<endl;
    cout <<"answer taskA: "<<endl;
    taskAB(v, size);

    return 0;
}