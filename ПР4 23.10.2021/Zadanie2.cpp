#include <iostream> <iostream> //Ввод и вывод данных
//Задание взял у Александра Бутусова 1/42
#include <cmath> //Использоание математических функций
using namespace std; //Использование всего, что находится в пространстве
void calc(int P, int n, int vibor) //Указатель функции (Калькулятор)
{   
    if (vibor!=0) //Условие Если (Не равно нулю)
    {
    int month = n*12; //Целочисленные (Месяц = срок депозита * 12)
    float m = month/vibor; //Переменные с плавающей точкой
    float I = 15; //Переменные с плавающей точкой
    int S = (P * (pow((1 +((I/100) / (m/12))), ((m/12) * n)))); //Целочисленные (Стоимость вклада)
    cout <<"Summa vklada = "<<S; //Вывод данных
    } 
  else //Условие Иначе
  {
        cout << "x3"<<endl; //Вывод данных
    }
}
int main() //Существует функция с именем main и функция возвращает целое число типа int
{
    int P,n,vibor; //Передача данных
    cout << "Enter P,n = "; //Вывод данных
    cin >> P >> n; //Ввод данных
    cout <<"Choose one of three values"<<endl; //Вывод данных
    cout <<"1 - 3"<<endl; //Вывод данных
    cout <<"2 - 6"<<endl; //Вывод данных
    cout <<"3 - 12"<<endl; //Вывод данных
    cin >> vibor; //Ввод данных
    switch(vibor) //Сделать выбор
    {
        case 1: //Выбор 1
            cout<<"You selected 1"<<endl; //Вывод данных
            vibor = 3; //Выбор 3 м
            break; //Окончание
        case 2: //Выбор 2
            cout<<"You selected 2"<<endl; //Вывод данных
            vibor = 6; //Выбор 6 м
            break; //Окончание
        case 3: //Выбор 3
            cout<<"You selected 3"<<endl; //Вывод данных
            vibor = 12; //Выбор 12 м
            break; //Окончание
        default: //Стандартная альтернатива
            cout<<"This operation does not exist"<<endl; //Вывод данных
            vibor = 0; //Выбор 0 м
            break; //Окончание
    }
    calc(P,n,vibor); //Калькулятор
    }
