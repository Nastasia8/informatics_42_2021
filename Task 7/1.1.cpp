//Задание взял у Александра Бутусова 1/42
#include <iostream> //Заголовочный файл с классами, функциями и переменными для организации ввода-вывода в языке программирования C++
using namespace std; //Обявление пространства имён std
int main() //Эта строка сообщает компилятору, что есть функция с именем main, и что функция возвращает целое число типа int
{
    int rows, columns; //Целочисленный тип данных для рядов и столбцов
    int index = 1; //Целочисленный тип данных для индекс = 1
    cout << "Enter rows = "; //Вывод надписи с текстом " Введите ряды "
    cin >> rows; //Ввод данных - Ряды
    cout << "Enter columns = "; //Вывод надписи с текстом " Введите столбцы "
    cin >> columns; //Ввод данных - Столбцы
    int** matrix = new int* [rows]; //Указатель на указатель на объект матрица = указатель на объект ряды
    for (int i = 0; i < rows; i++) //Цикл с точным кол-вом действий
    {
        matrix[i] = new int[columns]; //Матрица i = столбцы
    }
    for (int i = 0; i < rows; i++) //Цикл с точным кол-вом действий
    {
        for (int j = 0; j < columns; j++) //Цикл с точным кол-вом действий
        {
            matrix[i][j] = index; //Матрица ij = индекс
            index++; //Увеличение индекс
        }
    }
    for (int i = 0; i < rows; i++) //Цикл с точным кол-вом действий
    {
        for (int j = 0; j < columns; j++) //Цикл с точным кол-вом действий
        {
            cout << matrix[i][j] << "\t"; //Вывод данных (Матрица ij горизонтальная табуляция)
        }
        cout << endl; //Конец
    }
    cout << endl; //Конец
    for (int i = 0; i < rows; i++) //Цикл с точным кол-вом действий
    {
        for (int j = columns - 1; j >= 0; j--) //Цикл с точным кол-вом действий
        {
            cout << matrix[i][j] << "\t"; //Вывод данных (Матрица ij горизонтальная табуляция)
        }
        cout << endl; //Конец
    }
    for (int i = 0; i < rows; i++) //Цикл с точным кол-вом действий
    {
        delete[] matrix[i]; //Отменяет выделение блока памяти матрица i
    }
    delete matrix; //Отменяет выделение блока памяти матрицы
}
