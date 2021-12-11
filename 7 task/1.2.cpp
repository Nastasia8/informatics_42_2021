#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{   
    int index = 1;
    int temp = 0;
    int lines = 0;
    int column = 0;
    cout << "Enter lines:= ";
    cin >> lines;
    cout << "Enter column:= ";
    cin >> column;

    int** a = new int* [lines];
    for (int i = 0; i < lines; i++) {
        a[i] = new int[column];
    }
    for (int i = 0; i < lines; i++) {
        for (int j = 0; j < column; j++) {
            a[i][j] = index;
            index++;
        }
    }    
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
}