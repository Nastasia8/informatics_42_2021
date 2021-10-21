#include <iostream>
#include <cmath>
#include "objects.h"

using namespace std;

void taskAB(float v[], int size)
{
    float g = 0;
   for(int n = 0; n < size; n++)
    {
        g = pow(((a + b * v[n]) / pow(v[n], 3)), 0.2);
    cout<< g <<endl;
    }
}

void taskAB(int size, float c[])
{
    float y = 0;
    for(int i = 0; i < size; i++)
    {
        y = pow(((a + b * c[i]) / pow(c[i], 3)), 0.2);
    cout << y <<endl;
    }
}