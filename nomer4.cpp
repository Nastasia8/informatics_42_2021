#include <iostream>
#include <cmath>

using namespace std;

void calc(int s, int d) {
    int q = d - s + 1;
    int ss = 0;
    for (int f = s; f <= d;f++) {
        if (f % 2 == 0) {
            ss += f;
        }

    }
    cout <<" Sum  " << ss << endl;
}

int main() {
    int w, e;
    cin >> w >> e;
    calc(w, e);
}
