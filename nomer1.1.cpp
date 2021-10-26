#include <iostream>
#include <cmath>

using namespace std;


void calc(int z, int w, int t) {
    if (z == 1) {

        cout << "Sum " << w + t << endl;
    }
    else if (z == 2) {

        cout << "Min " << w - t << endl;
    }
    else if (z == 3) {

        cout << "umhoz " << w * t << endl;
    }
    else if (z == 4) {
        cout << "del " << w / t << endl;
    }
    else if (z == 5) {
        cout << "vosvedenie " << pow(w, t) << endl;
    }
    else {
        cout << "net" << endl;
    }

}


int main() {

    int z, w, t;
    cout << "1" << endl;;
    cout << "2 " << endl;
    cout << "3 " << endl;
    cout << "4 " << endl;
    cout << "5 " << endl;
    cout << "Nomer ";
    cin >> z >> w >> t;

    calc(z, w, t);
}