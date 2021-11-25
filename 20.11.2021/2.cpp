#include <iostream>
#include <cmath>
using namespace std;

void function(int F)
{
    int two = 0; //двоичная
    int eight = 0; //восьмиричная
    int sixteen = 0; //шестандцатиричная
    int a = F;
    int b = F;
    for(int g = 0; F>0; g++)
    {
        two += (F % 2) * pow(10.0, g);
        F/=2;
    }
    for(int g = 0; a>0; g++)
    {
        eight += (a % 8) * pow(10.0, g);
        a/=8;
    }
    for(int g = 0; b>0; g++)
    {
        sixteen += (b % 16) * pow(10.0, g);
        b/=16;
    }
    cout << two << endl;
    cout << eight << endl;
    cout << sixteen << endl;
}
int main()
{   
    int F;
    cin >> F;
    while(F<0 || F>325)
    {
        cout << "Введите число от 0-325: ";
        cin >> F;
    } 
    function(F);
}
