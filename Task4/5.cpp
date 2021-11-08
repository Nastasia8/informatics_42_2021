#include <iostream>
#include <math.h>

using namespace std;

void answer(float x, float y, float z);

int main(){

    float x = 0;

    float y = 0;

    float z = 0;

    cout << "Enter numbers: x = ";
    cin >> x;

    cout << "y = ";
    cin >> y;

    cout << "z = ";
    cin >> z;

    answer(x, y, z);

    return 0;
}


void answer(float x, float y, float z){

    float D = 0;

    float answer = 0;

    D = ((pow(y, 2)) - ((4*x)*z));

    cout << "Discriminant: " << D << endl;

    if(D < 0){

        cout << "No roots" << endl;
    }

    else{

        if(D == 0){

            answer = ((-y) / (2 * x));

            cout << "Roots: " << answer << endl;

        }

        else{

            answer = (((-y) + (sqrt(D))) / (2 * x));

            cout << "Roots: " << (((-y) + (sqrt(D))) / (2 * x)) << " ; " ;

            answer = (((-y) - (sqrt(D))) / (2 * x));

            cout << answer << endl;
        }
    }
}