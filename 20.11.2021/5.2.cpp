#include <iostream>
using namespace std;
int main()
{
  int n, div = 2;
  int nod = 1;
  int m,p;
  int t1 = 0;
  int t2 = 0;
  int t3 = 0;
  int a[100];
  int b[100];
  int c[100];
  cout << "Write 3 numbers";
  cin >> n >> m >> p;
  while (n > 1)
  {
    while (n % div == 0)
    {
      a[t1] = div;
      n = n / div;
      t1 += 1;
    }
    if (div == 2) div++;
    else div += 2;
  }
  div = 2;
  while (m > 1)
  {
    while (m % div == 0)
    {
      b[t2] = div;
      m = m / div;
      t2 +=1;
    }
    if (div == 2) div++;
    else div += 2;
  }
  div = 2;
  while (p > 1)
  {
    while (p % div == 0)
    {
      c[t3] = div;
      p = p / div;
      t3 += 1;
    }
    if (div == 2) div++;
    else div += 2;
  }
  int *a1 = new int [t1];
  int *b1 = new int [t2];
  int *c1 = new int [t3];
  int massiv[100];
  int massiv1[100];
  for(int i = 0; i < t1; i++)
  {
    a1[i] = a[i];
    cout << a1[i] << " ";
  }
  cout << endl;
  for(int i = 0; i < t2; i++)
  {
    b1[i] = b[i];
    cout << b1[i] << " ";
  }
  cout << endl;
  for(int i = 0; i < t3; i++)
  {
    c1[i] = c[i];
    cout << c1[i] << " ";
  }

  cout << endl;
  
  int timer = 0; 

  for (int i = 0; i < t1 ; i++)
  {
    for (int j = 0; j < t2; j++)
    {
      if ((a1[i] == b1[j]))
      {
        massiv[timer] = a[i];
        timer += 1;
        i += 1;
      }     
      
    }
  }
  int *massiva = new int [timer];
  
  for(int i = 0; i < timer; i++)
  {
    massiva[i] = massiv[i];
  }

  int massivix[100];

  int timer2 = 0;

  for (int i = 0; i < timer; i++)
  {
    for (int j = 0; j < t3; j++)
    {
      if ((massiva[i] == c1[j]))
      {
        massivix[timer2] = massiva[i];
        timer2 += 1;
        i += 1;
      }     
      
    }
  }
  int *massivix1 = new int [timer2];
  for(int i = 0; i < timer2; i++)
  {
    massivix1[i] = massivix[i];
    nod *= massivix1[i];
  }

  cout << "b) Nod = " << nod << endl;
  
  return 0;
}