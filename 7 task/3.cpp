#include <iostream>

using namespace std;

void calculate (int number) {
    while(number > 1) {
        if (number % 2 == 0) {
            number /= 2;
        } else {
            number *= 3;
            number += 1;
            number /= 2;
        }
        cout << number << endl;
    }
}

int main () {
    int number;

    cin >> number;

    calculate(number);

}