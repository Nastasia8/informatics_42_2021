#include <iostream>
#include <cmath>

using namespace std;

void calc(int q, int y, int c) {
    float z, f;
    float a = y * y - 4 * q * c;
    if (a > 0) {
        z = (-y + sqrt(a)) / 2 * q;
        f = (-y - sqrt(a)) / 2 * q;
        cout << "K " << z << " " << f;

    }
    else if (a == 0) {
        z = -y / 2 * q;
        cout << "K " << z;

    }
    else {
        cout << "k net";
    }
}


int main() {
    int q, y, c;
    cin >> q >> y >> c;
    calc(q, y, c);
}
