#include <iostream>

using namespace std;

int main() {
    int rows,columns;
    int index = 1;
    cout << "Enter rows = ";
    cin >> rows;
    cout << "Enter columns = ";
    cin >> columns;
    int ** matrix = new int*[rows];
    for (int i = 0; i <rows; i++)
    {
        matrix[i] = new int[columns];
    }
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            matrix[i][j] = index;
            index++;
        }

    } 
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cout << matrix[i][j] << "\t";
        }
        
        cout << endl;
    }
    cout << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = columns-1; j >= 0; j--)
        {
            cout << matrix[i][j] << "\t";
        }
        
        cout << endl;
    }   

    for (int i = 0; i < rows; i++)
    {
        delete[] matrix[i];
    }
    delete matrix;
}