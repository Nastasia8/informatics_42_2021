#include <math.h>
#include <iostream>

using namespace std;

void answer(const int degree, float x){

    float answer = ((pow(sin(x), degree) + pow(cos(x), degree)) * log(x)) ;
    
    cout << answer << endl;
}


void answer(int degree, float xarray[], int arraylen){

    int i = 0;

    for (i = 0; i < arraylen; i++ ){

    float answer = ((pow(sin(xarray[i]), degree) + pow(cos(xarray[i]), degree)) * log(xarray[i]));
    
    cout << answer << endl;

    }
}