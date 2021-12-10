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
    int c;
    int n;
    cout << "Введите три числа" << endl;
    cin>> a >> b >> c;
    int x = a;
    int y = b;
    int z = c;
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
    n = (a+b); 
    do
    {
      if(n > z)
      {
          n = x % z;
      } else {
          z = z % n;
      }
    } while ((n != 0) && (z != 0));
    
    cout << "Наибольший общий делитель (" << x  << "; " << y << "; " << c << ") = " << (n+z);

}