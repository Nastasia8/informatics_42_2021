#include <iostream>
#include <cmath>
#include "objects.h"

using namespace std;

void task12(float A[], int SIZE)
{
    float y=0;
    for(int i=0; i<6; i++)
    {
        y=asin(pow(A[i],a))+acos(pow(A[i],b));    // задача В
         cout << y << endl;
    }
}

void task12(float Xn)
{
    float g=0;
    while (Xn < Xk)
    {
        g=asin(pow(Xn,a))+acos(pow(Xn,b));    // задача А
        cout<< g << endl;
        Xn = Xn + dX;
    }
}