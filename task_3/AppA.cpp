#include <iostream>
#include <cmath>
#include "function.h"
#include "objects.h"

using namespace std;

int main()
{
    float mas_value_X[] = { 2.89, 3.54, 5.21, 6.28, 3.48 };

    for (float x = 3.5; x <= 6.5; x += 0.6)
    {
        cout << function_Y(x, value_A, value_B) << endl;
    }
}
