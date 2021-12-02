#include <iostream>

using namespace std;

int main() {

    char symbol;
    int cathet = 0;
    int i = 0, g = 0, k = 0;

    cout << "Enter cathet: ";
    cin >> cathet;
    
    if (cathet < 0){
        cout << "Incorrect value of the cathet...";
        exit(0);
    }

    cout << "Enter symbol: ";
    cin >> symbol;

    cout << "Methode with for: " << endl;

    for (i = 0; i < cathet; i++) {
        for (g = (i + 1); g > 0; g--) {
            cout << symbol;
        }
        cout << endl;
    }
    cout << endl;

    for (i = cathet; i > 0; i--) {
        for (g = i; g > 0; g--) {
            cout << symbol;
        }
        cout << endl;
    }
    cout << endl;

    for (i = cathet; i > 0; i--){
        for (g = i; g > 0; g--){
            cout << " ";
        }
        for (k = cathet - i; k > 0; k--){
            cout << symbol;
        }
        cout << endl;
    }
    cout << endl;

    for (i = 0; i < cathet; i++){
        for (g = i; g > 0; g--){
            cout << " ";
        }
        for (k = cathet - i; k > 0; k--){
            cout << symbol;
        }
        cout << endl;
    }
    cout << endl;

    cout << "Methode with while: " << endl;

    i = 0;
    while (i < cathet) {
        g = i + 1;
        while (g > 0) {
            cout << symbol;
            g--;
        }
        cout << endl;
        i++;
    }
    cout << endl;

    i = cathet;
    while (i > 0) {
        g = i;
        while (g > 0) {
            cout << symbol;
            g--;
        }
        cout << endl;
        i--;
    }

    i = 0;
    while (i <= cathet){
        k = i;
        g = cathet - k;
        while(k < cathet){
            cout << " ";
            k++;
        }
        while(g < cathet){
            cout << symbol;
            g++;
        }
        cout << endl;
        i++;
    }

    cout << endl;

    i = cathet;
    while (i >= 0){
        k = i;
        g = cathet - k;
        while(k < cathet){
            cout << " ";
            k++;
        }
        while(g < cathet){
            cout << symbol;
            g++;
        }
        cout << endl;
        i--;
    }


    return 0;
}