#include <iostream>
#include <stdio.h>

using namespace std;

int main (int argc, char *argv[] ) {
    int x = 5;
    int &ref = x ;
    cout << "x= " << x << " ref=" << &ref << endl;

    return 0;
}