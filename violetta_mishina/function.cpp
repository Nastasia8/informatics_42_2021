#include <iostream>
#include <cmath>

using namespace std;

void function(const float a, const float b, float y, float x, float xk, float dx) {
    for (; x < xk; x += dx)
    {
        y = (a * sqrt(x) - b * log(a)/log(5)) / log10(abs(x - 1));
        cout << "y = " << y << endl;
    }
}
void function(const float a, const float b, float xs[5], int size, float y) {
    for (auto x : xs) {
        y = (a * sqrt(x) - b * log(a)/log(5)) / log10(abs(x - 1));
        cout << "y = " << y << endl;
    }

}
