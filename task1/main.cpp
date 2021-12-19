#include <iostream>
#include <cmath>

const float a = 2.0;
const float b = 1.1;

int main(int args, char* argv[]) {
    using namespace std;

    float x = 0.08;
    float x_end = 1.08;
    float step = 0.2;

    for (; x < x_end; x += step) {
        cout << log(abs((b - x)*(b + x))) / pow(abs((x - a)*(x + a)), 0.2) << endl;
    };

    float xs[5] = {0.1, 0.3, 0.4, 0.45, 0.65};

    for (auto x : xs) {
        cout << log(abs((b - x)*(b + x))) / pow(abs((x - a)*(x + a)), 0.2) << endl;
    };

    return 0;
};