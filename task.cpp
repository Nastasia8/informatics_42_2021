#include <iostream>
#include <cmath>
int main(int args, char* argv[]){
    using namespace std;
    const float b = 2.5;
    float x = 1.28;
    float x_end = 3.28;
    float step = 0.4;
    for (; x < x_end; x += step){
        cout << (1 + pow (sin(pow(b,3) + pow(x,3)),2 )) / (pow (pow(b,3)+pow(x,3),1/3))<< endl;
    };
    float xs[5] = {1.1, 2.4, 3.6, 1.7, 3.9};
    for (auto x : xs) {
        cout << (1 + pow (sin(pow(b,3) + pow(x,3)),2 )) / (pow (pow(b,3)+pow(x,3),1/3))<< endl;
    };
    return 0;   
};