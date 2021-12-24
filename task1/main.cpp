#include <iostream>
#include <cmath>

using namespace std;

const float a = 0.05;
const float b = 0.06;

int main(int args, char *argv[]) {

    float x = 0.2;
    float x_end = 0.95;
    float x_delta = 0.15;

    while (x < x_end) {
        cout << (acos((x * x) - (b * b)) / asin((x * x) - (a * a))) << endl;
        x += x_delta;
    }

    float xs[5] = {0.15, 0.26, 0.37, 0.48, 0.56};

    for (int i = 0; i <= 5; i++) {
        cout << (acos((xs[i] * xs[i]) - (b * b)) / asin((xs[i] * xs[i]) - (a * a))) << endl;
    }

    return 0;
};