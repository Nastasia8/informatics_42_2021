#include <iostream>
#include <cmath>

using namespace std;


void draw(int a, int e, char t) {
    for (int c = 0;c < a;c++) {
        if (c == 0) {
            for (int c = 0;c < e;c++) {
                cout << t;
            }
            cout << endl;
        }
        else if (c == a - 1) {
            for (int c = 0;c < e;c++) {
                cout << t;
            }
            cout << endl;
        }
        else if ((c != 0) && (c != a - 1)) {
            cout << t;
            for (int c = 0; c < e - 2;c++) {
                cout << " ";
            }
            cout << t << endl;
        }
    }
}

int main() {
    int a, e;
    char t;
    cin >> a >> e >> t;

    draw(a, e, t);
}