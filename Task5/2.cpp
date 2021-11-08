#include <iostream>

using namespace std;

void changes(float *x, float *y);

int main (){

    float x = 0;

    float y = 0;

    cout << "Enter the numbers: ";
    cin >> x >> y;
    
    

    changes(&x, &y);

    return 0;
}

void changes(float *x, float *y){

    float a = 0;

    float b = 0;

    a = *y;

    b = *x;

    cout << "Answer: " << a << " " << b << endl;

}



