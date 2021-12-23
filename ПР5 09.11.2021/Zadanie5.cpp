#include <iostream> //Ввод и вывод данных
//Задание взял у Александра Бутусова 1/42
#include <ctime> //Использоание даты и времени
using namespace std; //Использование всего, что находится в пространстве
void FindMin(int ** massivMegaGiga, int rows, int columns, int* MaxvalueArray) //Указатель функции (Найти минимум)
{
    int min = 1000; //Целое минимальное значение
        for (int i = 0; i < rows; i++) //Цикл с точным кол-вом действий
    {
        min = 1000; //Минимальное значение
        for (int j = 0; j < columns; j++) //Цикл с точным кол-вом действий
        {
            if (massivMegaGiga[i][j] < min) //Условие Если (Массив меньше минимума)
            {
                min = massivMegaGiga[i][j]; //Минимум равен массиву
            }
        }
        MaxvalueArray[i] = min; //Максимальное значение массива равно минимуму
    }
    cout << "Minimum element in each line = { "; //Вывод данных (Минимальный элемент в каждой строке равен)
    for (int i = 0; i < rows; i++) //Цикл с точным кол-вом действий
    {
        cout << MaxvalueArray[i] << " "; //Вывод данных (Максимальное значение массива)
    }
    cout << "}" << endl; //Вывод данных (Закрытие значения)
}
int main() //Существует функция с именем main и функция возвращает целое число типа int
{
    srand(time(NULL)); //Генератор случайного числа, используя текущую дату
    int rows; //Целое (Ряды)
    int columns; //Целое (Столбцы)
    cout << "Enter rows = " << endl; //Вывод данных (Введите ряды)
    cin >> rows; //Ввод данных (Ряды)
    cout << "Enter columns = " << endl; //Вывод данных (Введите столбцы)
    cin >> columns; //Ввод данных (Столбцы)
    cout << endl; //Конец
    int** massivMegaGiga = new int* [rows]; //Целое (Массив = новые значения рядов)
    for (int i = 0; i <rows; i++) //Цикл с точным кол-вом действий
    {
        massivMegaGiga[i] = new int[columns]; //Целое (Массив = новые значения столбцов)
    }
     for (int i = 0; i < rows; i++) //Цикл с точным кол-вом действий
    {
        for (int j = 0; j < columns; j++) //Цикл с точным кол-вом действий
        {
            massivMegaGiga[i][j] = rand() % 100; //Возвращает остаток от деления одного числа на другое
        }
    }
    for (int i = 0; i < rows; i++) //Цикл с точным кол-вом действий
    {
        for (int j = 0; j < columns; j++) //Цикл с точным кол-вом действий
        {
            cout << massivMegaGiga[i][j] << "\t"; //Вывод данных (Массив (горизонтальная табуляция)) 
        }
        cout << endl; //Конец
    }
    cout << endl; //Конец
    int *MaxvalueArray = new int[rows]; //Целое (Максимальное значение массива = новые значения рядов)
    FindMin(massivMegaGiga, rows, columns, MaxvalueArray); //Найти минимум
    delete[] MaxvalueArray; //Освобождение памяти
    for (int i = 0; i < rows; i++) //Цикл с точным кол-вом действий
    {
        delete[] massivMegaGiga[i]; //Освобождение памяти 
    }
}
