#include <iostream> //Ввод и вывод данных
//Задание взял у Александра Бутусова 1/42
using namespace std; //Использование всего, что находится в пространстве
int main() //Существует функция с именем main и функция возвращает целое число типа int
{
  int n, div = 2; //Целое n div
  int nod = 1; //Целое нод = 1
  int m,p; //Целое m p
  int t1 = 0; //Целое t1=0
  int t2 = 0; //Целое t2=0
  int t3 = 0; //Целое t3=0
  int a[100]; //Целое a[100]
  int b[100]; //Целое b[100]
  int c[100]; //Целое c[100]
  cout << "Write 3 numbers"; //Вывод данных (Введите 3 числа)
  cin >> n >> m >> p; //Ввод данных (n m p)
  while (n > 1) //Цикл Пока (n>1)
  {
    while (n % div == 0) //Пока % от Див = 0
    {
      a[t1] = div; //a=div
      n = n / div; //формула n
      t1 += 1; //ti=t1+1
    }
    if (div == 2) div++; //если div=2
    else div += 2; //иначе div=div+2
  }
  div = 2; //приравнение
  while (m > 1) //пока m>1
  {
    while (m % div == 0) //пока %div=0
    {
      b[t2] = div; //b=div
      m = m / div; //формула m
      t2 +=1; //t2=t2+1
    }
    if (div == 2) div++; //если div = 2
    else div += 2; //иначе div=div+2
  }
  div = 2; //приравнение
  while (p > 1) //пока p>1
  {
    while (p % div == 0) //пока % от div = 0
    {
      c[t3] = div; //c=div
      p = p / div; //формула 
      t3 += 1; //t3=t3+1
    }
    if (div == 2) div++; //если div=2
    else div += 2; //иначе div=div+2
  }
  int *a1 = new int [t1]; //Целое a1=ti
  int *b1 = new int [t2]; //Целое b1=t2
  int *c1 = new int [t3]; //Целое c1=t3
  int massiv[100]; //Целое massiv[100]
  int massiv1[100]; //Целое massiv1[100]
  for(int i = 0; i < t1; i++) //Цикл с точным кол-вом действий
  {
    a1[i] = a[i]; //a1=a
    cout << a1[i] << " "; //Вывод a1
  }
  cout << endl; //Конец
  for(int i = 0; i < t2; i++) //Цикл с точным кол-вом действий
  {
    b1[i] = b[i]; //b1=b
    cout << b1[i] << " "; //Вывод b1
  }
  cout << endl; //Конец
  for(int i = 0; i < t3; i++) //Цикл с точным кол-вом действий
  {
    c1[i] = c[i]; //c1=c
    cout << c1[i] << " "; //Вывод c1
  }
  cout << endl; //Конец
  int timer = 0; //Целое таймер = 0
  for (int i = 0; i < t1 ; i++) //Цикл с точным кол-вом действий
  {
    for (int j = 0; j < t2; j++) //Цикл с точным кол-вом действий
    {
      if ((a1[i] == b1[j])) //Условие Если (a1=b1)
      {
        massiv[timer] = a[i]; //таймер=a
        timer += 1; //таймер=таймер+1
        i += 1; //i=i+1
      }     
    }
  }
  int *massiva = new int [timer]; //Целое a=timer
    for(int i = 0; i < timer; i++) //Цикл с точным кол-вом действий
  {
    massiva[i] = massiv[i]; a=massiv //массив
  }
  int massivix[100]; //Целое x[100]
  int timer2 = 0; //Целое таймер2=0
  for (int i = 0; i < timer; i++) //Цикл с точным кол-вом действий
  {
    for (int j = 0; j < t3; j++) //Цикл с точным кол-вом действий
    {
      if ((massiva[i] == c1[j])) //Если a=c1
      {
        massivix[timer2] = massiva[i]; //x=a
        timer2 += 1; //timer2= timer2+1
        i += 1; //i=i+1
      }     
    }
  }
  int *massivix1 = new int [timer2]; //Целое x1 = timer2
  for(int i = 0; i < timer2; i++) //Цикл с точным кол-вом действий
  {
    massivix1[i] = massivix[i]; //x1=x
    nod *= massivix1[i]; //nod=nod*x1
  }
  cout << "b) Nod = " << nod << endl; //Вывод b) НОД =
  return 0; //Завершения работы функции
}