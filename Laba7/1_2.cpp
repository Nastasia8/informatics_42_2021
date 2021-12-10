#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int l = 1;
    int temp = 0;
    int row, column;
    cout << "Enter row= ";
    cin >> row;
    cout << "Enter column= ";
    cin >> column;

    // объявление и заполнение двухмерного массива:
    int** a = new int* [row];
    for (int i = 0; i < row; i++) {
        a[i] = new int[column];
    }
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            a[i][j] = l;
            l++;
        }
    }

    // вывод двухмерного массива и первый способ преобразования:
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
            cout << a[i][j] << "\t";
        cout << endl;
    }
    for (int i = 0; i < row; i++)
        for (int j = 0; j < column / 2; j++)
        {
            temp = a[i][j];
            a[i][j] = a[i][column - j - 1];
            a[i][column - j - 1] = temp;
        }
    cout << endl;

    // вывод уже преобразованного массива 
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
            cout << a[i][j] << "\t";
        cout << endl;
    }

    for (int i = 0; i < row; i++)
    {
        delete[]a[i];
    }
    delete a;
}