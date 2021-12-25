#include <iostream>

using namespace std;

int main() 
{
    int line; // строка
    int column; // столбец
    int x = 1;

    cout << "Enter line = ";
    cin >> line;

    cout << "Enter column = ";
    cin >> column;

    
    int ** MATR = new int*[line]; // объявление двумерного массива

    for (int i = 0; i <line; i++)
    {
        MATR[i] = new int[column];
    }
    
    for (int i = 0; i < line; i++) // заполнение двумерного массива
    {
        for (int j = 0; j < column; j++)
        {
            MATR[i][j] = x;
            x++;
        }

    }

    
    for (int i = 0; i < line; i++) // вывод двумерного массива 
    {
        for (int j = 0; j < column; j++)
        {
            cout << MATR[i][j] << "\t";
        }
        cout << endl;
    }
     cout << endl;

    for (int i = 0; i < line; i++) // преобразование
    {
        for (int j = column-1; j >= 0; j--)
        {
            cout << MATR[i][j] << "\t";
        }
        cout << endl;
    }

    
    for (int i = 0; i < line; i++) // очистка динамического массива
    {
        delete[] MATR[i];
    }
return 0;
}