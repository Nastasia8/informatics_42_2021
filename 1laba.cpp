#include <iostream>
#include <cmath>
using namespace std;
int main() {

    float x_b = 1.25;
    float x_end = 3.25;
    float step = 0.4;
    float y;

    for (;x_b < x_end;x_b += step)  {
         y = pow(abs(pow(x_b,2)-2.5),0.25)+pow(log10(pow(x_b,2)),0.3333);
        cout << y <<endl;

    }
    float xs[5] = {1.84, 2.71, 3.81, 4.56, 5.62};
    for (float x_b: xs) {
        cout << pow(abs(pow(x_b,2)-2.5),0.25)+pow(log10(pow(x_b,2)),0.3333) << endl;
    }

}