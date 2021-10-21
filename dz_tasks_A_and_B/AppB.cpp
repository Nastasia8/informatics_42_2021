#include <iostream>
#include <cmath>
#include "function.h"

using namespace std;

int main()
{
    float c[5] = {2.4, 2.8, 3.9, 4.7, 3.16 };
    int size;

    size = sizeof(c) / sizeof(c[6]);
    cout <<"answer taskB = "<<endl;
    taskAB(size, c);
}