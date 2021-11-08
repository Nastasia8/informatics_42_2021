#include <stdio.h>
#include <math.h>

float calc(float a, float b, float x) {
    float res = (pow(b, 3) + pow(sin(a * x), 2)) / (acos(b * pow(x, 2)) + exp(-x / 2));
    return res;
}

int main()
{
    float a = 1.2;
    float b = 0.48;
    float x = 0.25;
    float y = calc(a, b, x);
    printf("%f", y);
    return 0;
}
