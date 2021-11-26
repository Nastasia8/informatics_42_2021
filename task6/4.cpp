#include <iostream>
#include <cmath>
#include <windows.h>
using std::cout;
using std::endl;
using std::cin;


int main() {
SetConsoleCP(CP_UTF8);
SetConsoleOutputCP(CP_UTF8);
    int a;
    int b;
    cout << "Введите два числа" << endl;
    cin>> a >> b;
    int x = a;
    int y = b;
    do 
    {
       
        if(a > b)
        {
            a = a % b;
        }   else
            {
                b = b % a;
            }
    }
    while((a!=0) && (b!=0));
    cout << "Наименьшее общее кратное (" << x  << "; " << y << ") = "<< (x * y)/ (a+b);
    
    return 0;
}