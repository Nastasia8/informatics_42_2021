#include <iostream>

using namespace std;

void indicator (int *x, int *y, int *z);

int main(){

    int x = 1;

    int y = 2;

    int z = 3;

    indicator(&x, &y, &z);

    return 0;

}


void indicator (int *x, int *y, int *z){

    cout << "Numbers: " << *x << " " << *y << " " << *z << " " << endl;

}