#include <iostream>
#include <cmath>

using namespace std;

int main() {
    void calc(int);
    long count;
    cout << "Enter count" << endl;
    cin >> count;
    while (count < 100000 || count>999999) {
        cout << "мnumber doesn't fit" << endl;
        cin >> count;
    }
    calc(count);
}

void calc(int count) {
    int proizvedenie = 1;
    while (count > 0) {
        proizvedenie *= count % 10;
        count /= 10;
    }
    cout << proizvedenie;
}

