#include <iostream> //Ввод и вывод данных
//Задание взял у Александра Бутусова 1/42
#include <ctime> //Использоание даты и времени
using namespace std; //Использование всего, что находится в пространстве
void zapolnennie(int* massiv,int rasmer) //Указатель функции (Заполнение массива)
{   
    for (int i = 0; i < rasmer; i++) //Цикл с точным кол-вом действий
    {
        massiv[i] = rand() % 100; //Возвращает остаток от деления одного числа на другое
    }
}
void otobrashenie(int* massiv,int rasmer) //Указатель функции (Отображение массива)
{
    for (int i = 0; i < rasmer; i++) //Цикл с точным кол-вом действий
    {
        cout << massiv[i] << "\t"; //Вывод данных (Массив (горизонтальная табуляция))      
    }
}
void minimalizm(int* massiv, int rasmer, int minimal) //Указатель функции (Минимальное значение)
{
    for (int i = 0; i < rasmer; i++) //Цикл с точным кол-вом действий
    {
            if (massiv[i] < minimal) //Условие Если (Если массив меньше минимума)
            {
                minimal = massiv[i]; //Минимальное значение равно массиву
            }
    }
    cout << "Minimum element of array = " << minimal << endl; //Вывод данных (Минимальный элемент массива)
}
int main() //Существует функция с именем main и функция возвращает целое число типа int
{
    srand(time(NULL)); //Генератор случайного числа, используя текущую дату
    int minimal = 1000; //Целое минимальное значение
    int rasmer; //Целое (Размерность)
    cout << "Enter rasmer = " << endl; //Вывод данных (Введите размер)
    cin >> rasmer; //Ввод данных (Размерность)
    cout << endl; //Конец
    int *massiv = new int [rasmer]; //Целое (Массив)
    zapolnennie(massiv, rasmer); //Заполнение
    otobrashenie(massiv, rasmer); //Отображение
    minimalizm(massiv, rasmer, minimal); //Минимальное значение
    delete[] massiv; //Освобождение памяти
}
