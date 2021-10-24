#include <iostream>
#include <cmath>
#include "function.h"
#include "objects.h"

using namespace std;

int main()
{
    float mas_value_X[] = { 2.89, 3.54, 5.21, 6.28, 3.48 };
 
    function_Y(value_A, value_B, mas_value_X, int(sizeof(mas_value_X) / sizeof(float)));
}
