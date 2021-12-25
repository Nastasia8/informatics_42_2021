#include <iostream>//стандартная библиотека основных операций
#include <cstdlib>//Standard Library header file
using namespace std;//облегчает ввод данных

int main()
{
    setlocale(LC_ALL, "Russian"); //подключаем русский язык
    int index = 1;//создаем индекс массива
    int temp = 0;//переменная для обмена значений 
    //создаем переменные для рядов и столбцов
    int lines = 0;
    int column = 0;
    //вводим данные
    cout << "введите количество рядов:";
    cin >> lines;
    cout << "введите количество столбцов:";
    cin >> column;

    int** matrix = new int* [lines];//для доступа к матрице объявляется переменная matrix типа указатель на указатель на тип. Переменная инициализируется оператором new, который выделяет память для массива указателей на int.
    for (int i = 0; i < lines; i++) //в цикле каждый элемент массива указателей инициализируется оператором new, который выделяет память для массива типа int
    {
        matrix[i] = new int[column];
    }
    for (int i = 0; i < lines; i++) // работа с массивом, матрица меняется путем записи ее столбцов в обратном порядке
    {
        for (int j = 0; j < column; j++) 
        {
            matrix[i][j] = index;//i отвечает за строки,j отвечает за столбцы
            index++;
        }
    }
    for (int i = 0; i < lines; i++)
    {
        for (int j = 0; j < column; j++)
            cout << matrix[i][j] << "   ";//выводится  исходная матрица
        cout << endl;
    }

    for (int i = 0; i < lines; i++)
        for (int j = 0; j < column / 2; j++)
        {//столбы в матрице меняются местами в ходе цикла, матрица меняет свой вид целиком
            temp = matrix[i][j];
            matrix[i][j] = matrix[i][column - j - 1];
            matrix[i][column - j - 1] = temp;
        }
    cout << endl;

    for (int i = 0; i < lines; i++)
    {
        for (int j = 0; j < column; j++)
            cout << matrix[i][j] << "   ";
        cout << endl;
    }

    for (int i = 0; i < lines; i++)// уничтожение
    {
        delete[]matrix[i];
    }
    delete matrix;
}