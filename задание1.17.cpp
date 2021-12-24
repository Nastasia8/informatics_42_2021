#include <iostream>
#include <cmath>

int main(int args, char* argv[]) {
    using namespace std;

    const float a = 0.1;
    const float b = 0.5;

    float x = 0.15;
    float xk = 1.37;
    float dx = 0.25;

    for (; x < xk; x += dx) {
        cout << (a * sqrt(x) - b * log(a)/log(5)) / log10(abs(x - 1)) << endl;
    };

    float xs[5] = { 1.9, 2.15, 2.34, 2.73, 3.16 };

    for (auto x : xs) {
        cout << ((a+(tg(bx)*tg(bx)))/(b+(ctg(ax)*ctg(ax))))) << endl;
    };

    return 0;
};
