#include <cmath>
#include <iostream>

void calculate_function(float a, float b, float x, float x_end, float step) {
    for (; x < x_end; x += step) {
        std::cout << log(abs((b - x)*(b + x))) / pow(abs((x - a)*(x + a)), 0.2) << std::endl;
    };
};

void calculate_function(const float& a, const float& b, float* xs, int size) {
    for (int i = 0; i <= size; i++) {
        std::cout << log(abs((b - xs[i])*(b + xs[i]))) / pow(abs((xs[i] - a)*(xs[i] + a)), 0.2) << std::endl;
    }; 
};

