#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int temp = 0;
    int lines = 0;
    int column = 0;
    cout << "Enter lines:= ";
    cin >> lines;
    cout << "Enter column:= ";
    cin >> column;

    //a
    cout << "A" << endl;
    int** a = new int* [lines];
    for (int i = 0; i < lines; i++)
        a[i] = new int[column];

    //заполнение массива
    for (int i = 0; i < lines; i++)
        for (int j = 0; j < column; j++)
            a[i][j] = rand() % 10;

    cout << "matrix:" << endl;
    for (int i = 0; i < lines; i++)
    {
        for (int j = 0; j < column; j++)
            cout << a[i][j] << "   ";
        cout << endl;
    }
    
    for (int i = 0; i < lines; i++)
        for (int j = 0; j < column / 2; j++)
        {
            temp = a[i][j];
            a[i][j] = a[i][column - j - 1];
            a[i][column - j - 1] = temp;
        }
    cout << endl;

    cout << "matrix_mod_a:" << endl;
    for (int i = 0; i < lines; i++)
    {
        for (int j = 0; j < column; j++)
            cout << a[i][j] << "   ";
        cout << endl;
    }

    for (int i = 0; i < lines; i++)
    {
        delete[]a[i];
    }
    delete a;
    
    //b
    cout << "B" << endl;

    int** b = new int* [lines];
    for (int i = 0; i < lines; i++)
        b[i] = new int[column];

    int** b1 = new int* [lines];
    for (int i = 0; i < lines; i++)
        b1[i] = new int[column];

    //заполнение массива
    for (int i = 0; i < lines; i++)
        for (int j = 0; j < column; j++)
            b[i][j] = rand() % 10;

    cout << "matrix:" << endl;
    for (int i = 0; i < lines; i++)
    {
        for (int j = 0; j < column; j++)
            cout << b[i][j] << "   ";
        cout << endl;
    }

    for (int i = 0; i < lines; i++)
        for (int j = 0; j < column; j++)
        {
            b1[i][j] = b[i][column - j - 1];
        }
    cout << "matrix_mod_b:" << endl;
    for (int i = 0; i < lines; i++)
    {
        for (int j = 0; j < column; j++)
            cout << b1[i][j] << "   ";
        cout << endl;
    }
}
