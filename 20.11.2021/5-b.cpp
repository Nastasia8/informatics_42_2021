#include <iostream>
using namespace std;

int main()
{
  int N,div = 2;
  int NOD = 1;
  int Z,X;
  int t1 = 0;
  int t2 = 0;
  int t3 = 0;
  int a[100];
  int b[100];
  int c[100];
  cout << "Введите 3 числа: ";
  cin >>N>>Z>>X;
  while (N>1)
  {
    while (N % div == 0)
    {
      a[t1] = div;
      N = N / div;
      t1 += 1;
    }
    if (div == 2) div++;
    else div += 2;
  }
  div = 2;
  while (Z > 1)
  {
    while (Z % div == 0)
    {
      b[t2]=div;
      Z = Z/div;
      t2+=1;
    }
    if (div==2) div++;
    else div+=2;
  }
  div=2;
  while (X>1)
  {
    while (X%div == 0)
    {
      c[t3]=div;
      X =X/div;
      t3+= 1;
    }
    if (div == 2) div++;
    else div += 2;
  }
  int *a1 = new int [t1];
  int *b1 = new int [t2];
  int *c1 = new int [t3];
  int XS[100]; //массив 1
  int XSX[100]; //массив 2
  for(int g = 0; g < t1; g++)
  {
    a1[g]=a[g];
    cout<<a1[g]<< " ";
  }
  cout<<endl;
  for(int g = 0; g < t2; g++)
  {
    b1[g]=b[g];
    cout <<b1[g]<< " ";
  }
  cout<<endl;
  for(int g=0; g < t3; g++)
  {
    c1[g]=c[g];
    cout << c1[g] << " ";
  }

  cout<<endl;
  
  int timer=0; 

  for (int g=0; g < t1 ; g++)
  {
    for (int f=0; f < t2; f++)
    {
      if ((a1[f]==b1[f]))
      {
        XS[timer]=a[f];
        timer += 1;
        f+= 1;
      }     
    }
  }
  int *XS1 = new int [timer];
  
  for(int g=0; g<timer; g++)
  {
    XS1[g] = XS[g];
  }

  int XSX[100];

  int timer2 = 0;

  for (int g = 0; g < timer; g++)
  {
    for (int f = 0; f < t3; f++)
    {
      if ((XS1[g] == c1[f]))
      {
        XSX[timer2] = XS1[g];
        timer2 += 1;
        g+= 1;
      }     
    }
  }
  int *XSX1 = new int [timer2];
  for(int g = 0; g < timer2; g++)
  {
    XSX1[g] = XSX[g];
    NOD *= XSX1[g];
  }
  cout << "Наибольший общий делитель = " << NOD << endl;
  return 0;
}