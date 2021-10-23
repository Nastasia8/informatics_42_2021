#include <iostream>
#include <math.h>

using namespace std;

int main(){

    int choise = 0;

    float x = 0;

    float y = 0;

    cout << "Enter the number to select the operation: 1: +; 2: -; 3: *; 4: / ; 5: x^y " <<endl;
    cin >> choise;

    cout << "Enter number x: ";
    cin >> x;

    cout << "Enter number y: ";
    cin >> y;

    switch(choise){

        case 1:
            cout << "x + y = " << (x + y) << endl;
            break;

        case 2:
            cout << "x - y = " << (x - y) << endl;
            break;

        case 3:
            cout << "x * y = " << (x * y) << endl;
            break;

        case 4:
            cout << "x / y = " << (x / y) << endl;
            break;

        case 5:
            cout << "x^y = " << pow(x, y) << endl;
            break;   
    }


    return 0;
}