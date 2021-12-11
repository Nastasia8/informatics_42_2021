#include <iostream>
#include <cmath>

using namespace std;


void score(int n) {
    int mult = 1;
    while (n > 0) {
        mult *= n % 10;
        n /= 10;
    }
    cout << mult;
}

int main(){
    long n;
    cin >> n;
    while (n<100000 || n>999999) {
        cout << "The number does not meet the requirements" << endl;
        cin >>n;
    }
    score (n);





}