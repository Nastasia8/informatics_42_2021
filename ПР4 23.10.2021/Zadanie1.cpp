#include <iostream> //Ввод и вывод данных
//Задание взял у Александра Бутусова 1/42
#include <cmath> //Использоание математических функций
using namespace std; //Использование всего, что находится в пространстве
void calc(int op,int x, int y) //Указатель функции
{
   if(op==1) //Условие Если
   {
    cout <<"Summ = "<< x+y<<endl; //Вывод данных
   } 
  else if (op==2) //Условие Иначе если
   {
    cout <<"Minus = "<< x-y<<endl; //Вывод данных
    } 
  else if (op==3) //Условие Иначе если
   {
    cout <<"Umn = "<< x*y<<endl; //Вывод данных
    } 
  else if (op==4) //Условие Иначе если
   {
    cout <<"Del = "<<x/y<<endl; //Вывод данных
    } 
  else if(op==5) //Условие Иначе если
   {
    cout <<"Vos = "<<pow(x,y)<<endl; //Вывод данных
    } 
  else //Условие Иначе
   {
    cout<<"This operation does not exist"<<endl; //Вывод данных
    }
}
int main() //Существует функция с именем main и функция возвращает целое число типа int
{
    int op,x,y; //Передача данных
    cout <<"1 - sum"<<endl;; //Вывод данных
    cout <<"2 - minus"<<endl; //Вывод данных
    cout <<"3 - umn"<<endl; //Вывод данных
    cout <<"4 - del"<<endl; //Вывод данных
    cout <<"5 - vos"<<endl; //Вывод данных
    cout <<"Nomer operacii ="; //Вывод данных
    cin >> op >> x >> y; //Ввод данных
    calc(op,x,y); //Калькулятор операции, x и y
}
