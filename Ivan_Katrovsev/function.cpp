#include <iostream>
#include <cmath>

using namespace std;

void function(const float a, const float b, float y, float x, float xk, float dx) {
    for (; x < xk; x += dx)
    {
        y = (acos(x * x - b * b) / asin(x * x - a * a));
        cout << "y = " << y << endl;
    }
}
void function(const float a, const float b, float xs[5], int size, float y) {
    for (auto x : xs) {
        y = (acos(x * x - b * b) / asin(x * x - a * a));
        cout << "y = " << y << endl;
    }

}
