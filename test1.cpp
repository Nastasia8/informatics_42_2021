#include <iostream>
#include <math.h>

int main (int args, char* argv[]) {

using namespace std;

const float a = 2.0;

float x = 1.2;
float x_end = 4.2;
float x_step = 0.6;


for (; x < x_end; x += x_step){
cout << pow(log10(a+x), 2)/ pow((a+x),2)<< endl;
};


float xs[5] = {1.16, 1.32, 1.47, 1.65, 1.93};

for (auto x: xs) {
cout<< pow(log10(a+x), 2)/ pow((a+x),2)<< endl;
};

return 0;
}
