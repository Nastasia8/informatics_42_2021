#include <math.h>
#include <iostream>

using namespace std;

void answer(const int Degree, float x){

    float answer = ((pow(sin(x), Degree) + pow(cos(x), Degree)) * log(x)) ;
    
    cout << answer << endl;
}


void answer(int Degree, float xarray[], int arraylen){

    int i = 0;

    for (i = 0; i < arraylen; i++ ){

    float answer = ((pow(sin(xarray[i]), Degree) + pow(cos(xarray[i]), Degree)) * log(xarray[i]));
    
    cout << answer << endl;

    }
}