#include <iostream>
#include <algorithm>
#include <forward_list>
#include <cmath>

const float PI = 3.14;

bool isPositive(float number) {
    if (number > 0) {
        return 1;
    }
    return 0;
}

float myfunc(float x) {
    return ((2 / x) - PI * std::cos(PI * x));
}

std::forward_list<float*> foundDigits(float begin, float end, float step) {
    std::forward_list<float*> digits;
    for (float i = begin; i < end; i += step) {
        if (isPositive(myfunc(i)) != isPositive(myfunc(i + step))) { 
            float* pair = new float[2];
            pair[0] = i;
            pair[1] = i + step;
            digits.push_front(pair);
        }
    }
    return digits;
}

float ChooseRoot(float* pair) {
    return 0;
}

int main(int args, char** argv) {
    float begin, end, step;

    std::cout << "Enter begin of range: ";
    std::cin >> begin;
    std::cout << "Enter end of range: ";
    std::cin >> end;
    std::cout << "Enter step: ";
    std::cin >> step;

    std::forward_list<float*> signChangeIntervals = foundDigits(begin, end, step);
    auto iter = signChangeIntervals.begin();
    while (iter != signChangeIntervals.end()) {
        std::cout << ((*iter)[0] + (*iter)[1]) / 2 << std::endl;
        iter++;  
    }

    return 0;
}
