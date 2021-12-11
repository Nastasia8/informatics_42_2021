#include <iostream>

using namespace std;

void value (float*);

void value (float a, float b, float *pa, float *pb, float *pc)
{
    pa = pb;
    cout << "value_a =" << *pa <<endl;

    pb = pc;
    cout << "value_b =" << *pb <<endl;

}

int main () 
{
    float a = 67.9;
    float b = 34.5;
    float *pa = &a;
    float *pb = &b;
    float *pc = &a;

    value(a,b,pa,pb,pc);

return 0;
}