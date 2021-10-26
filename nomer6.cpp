#include <iostream>
#include <cmath>

using namespace std;


void calc(int z) {
    int r = 1;
    while (z > 0) {
        r *= z % 10;
        z /= 10;
    }
    cout << r;
}

int main() {
    long z;
    cin >> z;
    while (z < 100000 || z>999999) {
        cout << "nesootvet" << endl;
        cin >> z;
    }
    calc(z);
}