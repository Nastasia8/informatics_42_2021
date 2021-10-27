#include <iostream>
#include <math.h>
#include <windows.h>
using std::cout;
using std::endl;
using std::cin;

int main() {
SetConsoleCP(CP_UTF8);
SetConsoleOutputCP(CP_UTF8);

    int a, b;
    int sum = 0;
    cout << "Введите начало" << endl;
    cin>>a;

    cout << "Введите конец" << endl;
    cin>>b;

// Для цикла while
    if ( a > b ) 
    {
        cout << "Ошибка. Начало не может быть больше конца" << endl;
    }
    while (a <= b) 
    {
        
          if (a % 2 == 0 )
            {
                 sum += a;
            }     
            a += 1;            
    } 

    cout << "Сумма =" << sum << endl;


    cout << "-----------------------" << endl;


// Для цикла for
    for (float sum; a <= b;) 
    {

        sum += (a % 2 == 0) ? a:0;
        a += 1;
    }
    cout << "Сумма =" << sum << endl;
    return 0;
}