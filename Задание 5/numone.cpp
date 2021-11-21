#include <iostream>
using namespace std;


void Fun(int *td, int *ph, int *jg)

{

cout << " td = " << *td << " ph = " << *ph << " jg = " << *jg;

}


int main()

{

int td = 5;

int ph = 1;

int jg = 9;

Fun(&td,&ph,&jg);

}