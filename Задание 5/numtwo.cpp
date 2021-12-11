#include <iostream>
using namespace std;


void Fun(float *a, float *b)

{

cout << " b = " << *b << " a = " << *a;

}


int main()

{

float a = 5;

float b = 1;

Fun(&a,&b);

}