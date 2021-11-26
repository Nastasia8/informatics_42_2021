#include <iostream>
#include <cmath>

using namespace std;

void translating_numbers(int);

int main()
{   
    int n;
    cout << "Введите число от 0 до 325" << endl;
    cin >> n;
    if (n<= -1 || n > 325){
        cout << "Введите число из указанного диапазона" << endl;
    } else  translating_numbers(n);
    
return 0;
}



void translating_numbers(int n)
{
    int binar = 0;
    int octal = 0;
    int hexadecimal = 0;
    int x = n;
    int y = n;
    for(int i = 0; n>0; i++)
    {
        binar += (n % 2) * pow(10.0, i);
        n/=2;
    }
    cout << "В двоичной системе данное число = " << binar << endl;
    for(int i = 0; x>0; i++)
    {
        octal += (x % 8) * pow(10.0, i);
        x/=8; 
    }
    cout << "В восьмеричной системе данное число = " << octal << endl;
    for(int i = 0; y>0; i++)
    {
        hexadecimal += (y % 16) * pow(10.0, i);
        y/=16;  
    }
    cout << "В шестнадцатеричной системе данное число = " << hexadecimal << endl;
}