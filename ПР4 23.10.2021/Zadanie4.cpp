#include <iostream> //Ввод и вывод данных
//Задание взял у Александра Бутусова 1/42
#include <cmath> //Использоание математических функций
using namespace std; //Использование всего, что находится в пространстве
void calc(int x, int y) //Указатель функции (Калькулятор)
{
   int n = y-x+1; //Целочисленные
   int sum = 0; //Начальное значение
   for (int i = x; i<=y;i++) //Цикл с точным кол-вом действий
   {
       if(i%2 == 0) //Условие Если (Взятие остатка от деления)
       {
           sum+=i; //Сумма прибавляется
       }
   }
   cout <<"Summ = "<<sum<<endl; //Вывод данных
}
int main() //Существует функция с именем main и функция возвращает целое число типа int
{
    int x,y; //Целочисленные (x и y)
    cin >> x>> y; //Вввести (x и y)
    calc(x,y); //Калькулятор (x и y)
}
