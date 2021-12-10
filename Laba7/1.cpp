#include <iostream>

using namespace std;

int main() {
    int row,column;
    int l = 1;
    cout << "Enter row = ";
    cin >> row;
    cout << "Enter column = ";
    cin >> column;

    // объявление и заполнение двухмерного массива:
    int ** matrixs = new int*[row];
    for (int i = 0; i <row; i++)
    {
        matrixs[i] = new int[column];
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            matrixs[i][j] = l;
            l++;
        }

    }

    // вывод двухмерного массива и первый способ преобразования:
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cout << matrixs[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = column-1; j >= 0; j--)
        {
            cout << matrixs[i][j] << "\t";
        }
        cout << endl;
    }

    //очистка динамического массива:
    for (int i = 0; i < row; i++)
    {
        delete[] matrixs[i];
    }
return 0;
}