#include <iostream>

using namespace std;

int main ()
{
    float c;
    float a;
    float b;

    cout << "enter three values" <<endl;

    cin >>c;
    cin >>a;
    cin >>b;

    float *values_c = &c;
    float *values_a = &a;
    float *values_b = &b;

    cout << "values_c =" << *values_c <<endl;
    cout << "values_a =" << *values_a <<endl;
    cout << "values_b =" << *values_b <<endl;

return 0;
}