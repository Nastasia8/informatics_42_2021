#include <iostream>
#include <cmath>

using namespace std;

void function(const float a, const float b, float y, float x, float xk, float dx) {
    for (; x < xk; x += dx)
    {
        y = ((pow(a, x) - pow(b, x)) / log10(a / b)) * pow(a * b, 1 / 3);
        cout << "y = " << y << endl;
    }
}
void function(const float a, const float b, float xarr[], int size, float y) {
    for (auto x : xs) {
        y = ((pow(a, x) - pow(b, x)) / log10(a / b)) * pow(a * b, 1 / 3);
        cout << "y = " << y << endl;
    }

}
