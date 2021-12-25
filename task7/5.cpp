#include <iostream>
#include <windows.h>
using std:: cout;
using std:: endl;
using std:: cin;

void function (int);


int main(){
SetConsoleCP(CP_UTF8);
SetConsoleOutputCP(CP_UTF8);

  int n;
  cout << "Введите число" << endl;
  cin >> n;
  cout << "Получены следующие простые числа: ";
  function (n);

 return 0;
}


void function (int n)
{
  int i, j;
  
  for (i = 2; i <= n; i++){
        for (j = 2; j <= i / 2; j++)
        {
            if (i % j == 0) break;
        }
        if (j > (i / 2))
        {
          cout << i << " ";
        } 
    }
    cout << endl;
}