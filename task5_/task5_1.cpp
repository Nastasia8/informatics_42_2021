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

float myFunc(float x) {
    return ((2 / x) - PI * std::cos(PI * x));
}

std::forward_list<float*> foundDigits(float begin, float end, float step) { // here we find intervals of sign  changing
    std::forward_list<float*> digits;
    for (float i = begin; i < end; i += step) {
        if (isPositive(myFunc(i)) != isPositive(myFunc(i + step))) { 
            float* pair = new float[2];
            pair[0] = i;
            pair[1] = i + step;
            digits.push_front(pair);
        }
    }
    return digits;
}

float findRoot(std::_Fwd_list_iterator<float*> pair) { // here was used half division method
    float a = (*pair)[0];
    float b = (*pair)[1];
    float c = (a + b) / 2;
    while (myFunc((a + b) / 2) >= 0.01) {
        if(myFunc(c) * myFunc(a) < 0) {
            b = c; 
        };
        if(myFunc(c) * myFunc(b) < 0) {
            a = c;
        };
    }
    return c;
}

int main(int args, char** argv) {
    float begin, end, step;

    std::cout << "Enter begin of range: ";
    std::cin >> begin;
    std::cout << "Enter end of range: ";
    std::cin >> end;
    std::cout << "Enter step: ";
    std::cin >> step;
    
    std::forward_list<float> answers;
    std::forward_list<float*> signChangeIntervals = foundDigits(begin, end, step);
    
    auto iter = signChangeIntervals.begin();
    while (iter != signChangeIntervals.end()) {
        answers.push_front(findRoot(iter));
        iter++;
    }

    int xNumber = 1;
    auto iter2 = answers.begin();
    while (iter2 != answers.end()) {
        std::cout << "x_" << xNumber << " = "<< *iter2 << std::endl;
        xNumber++;
        iter2++;
    }

    return 0;
}
