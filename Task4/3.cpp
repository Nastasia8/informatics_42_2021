#include <iostream>
#include <math.h>

using namespace std;

void summ (float k);

void production (float k);

int main(){

    float k = 0;

    cout << "Enter number k: ";
    cin >> k;

    return 0;
}


void sum(int k){

    float s = 0;

    for (float n = 1; n <= k; n++){

        s += (2 / (((2 * n) + 1) * ((2 * n) + 3)));

    }

    cout << "Sum number set: "<< s << endl;

}


void proiz(int k){

    float s = 1;
    
    for (float n = 1; n <= k; n++){

        s *= pow(-1,n-1) + n;

    }

    cout << "Production number set: "<< s << endl;

}