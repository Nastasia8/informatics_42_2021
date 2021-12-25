#include <iostream> //Ввод и вывод данных
//Задание взял у Александра Бутусова 1/42
#include <cmath> //Использоание математических функций
using namespace std; //Использование всего, что находится в пространстве
void function(const float a, const float b, float y, float xbegin, float xend, float xtr) //Указатель функции
{
    for (; xbegin<xend; xbegin += xtr) //Цикл с точным кол-вом действий
    {
        y= (1 + pow(log10(xbegin/a), 2))/(b-exp(xbegin/a)); //Формула для решения значения y
        cout<<"y = "<<y<<endl; //Вывод значения y
    }
} 
void function(const float a, const float b, float xarr[], int size, float y) //Указатель функции
{
    for (int i=0; i< size; i++) //Цикл с точным кол-вом действий
    {
        y= (1 + pow(log10(xarr[i]/a), 2))/(b-exp(xarr[i]/a)); //Формула для решения значения y
        cout<<"y = "<<y<<endl; //Вывод значения y
    }
} 
