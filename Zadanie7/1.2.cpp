#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{   
    int index = 1; // инициализируем индекс
    int temp = 0;
    int lines = 0;
    int column = 0;
    cout << "Enter lines:= ";
    cin >> lines; // количество строк
    cout << "Enter column:= ";
    cin >> column; // количество стоблцов

    //создание двумерного динамического массива
    int** a = new int* [lines];
    for (int i = 0; i < lines; i++) {
        a[i] = new int[column];
    }
    //заполнение двумерного динамического массива
    for (int i = 0; i < lines; i++) {
        for (int j = 0; j < column; j++) {
            a[i][j] = index;
            index++; // увеличение индекса
        }
    }    
    //выводим матрицу на экран
    for (int i = 0; i < lines; i++)
    {
        for (int j = 0; j < column; j++)
            cout << a[i][j] << "   ";
        cout << endl;
    }
    //переворачиваем матрицу
    for (int i = 0; i < lines; i++)
        for (int j = 0; j < column / 2; j++)
        {
            temp = a[i][j];
            a[i][j] = a[i][column - j - 1];
            a[i][column - j - 1] = temp;
        }
    cout << endl;

    //выводим на экран перевернутую матрицу
    for (int i = 0; i < lines; i++)
    {
        for (int j = 0; j < column; j++)
            cout << a[i][j] << "   ";
        cout << endl;
    }

    //очищаем ресурсы (память)
    for (int i = 0; i < lines; i++)
    {
        delete[]a[i];
    }
    delete a;
    // Разбирал задание с Александром Бутусовым, вроде понял)
}