#include <iostream>
#include <windows.h>
using std::cout;
using std::endl;

void function(int f[]);

int main(){
SetConsoleCP(CP_UTF8);
SetConsoleOutputCP(CP_UTF8);
    int f[15];
    f[0] = 0;
    f[1] = 3;
    f[2] = 5;
    cout << "Вот они слева направо 15 чисел " << endl;
    function(f);
return 0;
}

void function(int f[])
{
    for(int n = 3; n < 15; n++)
    {   
        f[n]= f[n-1] + f[n-2] + f[n-3];
        cout << f[n] << "  ";
    }
}