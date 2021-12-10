#include <iostream>
#include <windows.h>
using std:: cout;
using std:: endl;
using std:: cin;

int function (int);


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


int function (int n)
{
 int nMas[n];
  for (int i = 2; i <= n; ++i)
  {
    nMas[i] = i;
  }
  for (int i = 2; i < n; ++i)
  {
    for (int j = 2; (j <= i) && ((i*j) < n); ++j)
    {
       if (0 != nMas[j] ) 
        {
         nMas[j*i] = 0;
        } 
    }
  }
  for (int i = 1; i < n; ++i)
  {
    if (nMas[i] != 0)
    cout << i << " ";
  } 
  delete[] nMas;
}