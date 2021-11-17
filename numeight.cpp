#include <iostream>
#include <ctime>

using namespace std;

int main() 
{
    srand(time(NULL));

    int minColumn = 1000;
    int maxRows = 0;
    int minimal = 1000;
    int rows;
    int column;

    cout << "Enter rows = " << endl;
    cin >> rows;
    cout << "Enter column = " << endl;
    cin >> column;
    cout << endl;

    // Создание двумерного массива

    int** MAXmassiv = new int* [rows];
    for (int i = 0; i <rows; i++)
    {
        MAXmassiv[i] = new int[column];
    }

    
    // Инициализация и вывод массива
    
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < column; j++)
        {
            MAXmassiv[i][j] = rand() % 100;
        }

    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cout << MAXmassiv[i][j] << "\t";
        }
        
        cout << endl;
    }
    cout << endl;

    // Нахождение минимального числа в массиве
    
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < column; j++)
        {
            if (MAXmassiv[i][j] < minimal)
            {
                minimal = MAXmassiv[i][j];
            }
            
        }
    }
    cout << "Minimum element of array = " << minimal << endl;
    
    // Максимальный элемент в каждой строке массива

    cout << endl;
    cout << "a" << endl;
    cout << endl;

    int *MaxvalueArray = new int[rows];

    for (int i = 0; i < rows; i++)
    {
        maxRows = 0;

        for (int j = 0; j < column; j++)
        {
            if (MAXmassiv[i][j] > maxRows)
            {
                maxRows = MAXmassiv[i][j];
            }
           
        }
        MaxvalueArray[i] = maxRows;
    }

    cout << "Maximum element in each line = { ";

    for (int i = 0; i < rows; i++)
    {
        cout << MaxvalueArray[i] << " ";
    }

    cout << "}" << endl;
    delete[] MaxvalueArray;
    
    // Минимальный элемент в каждом столбце массива

    cout << endl;
    cout << "b" << endl;
    cout << endl;

    int *MinvalueArray = new int[column];
    for (int i = 0; i < column; i++)
    {
        minColumn = 1000;
        for (int j = 0; j < rows; j++)
        {
            if (MAXmassiv[j][i] < minColumn )
            {
                minColumn = MAXmassiv[j][i];
            }
            
        }
        MinvalueArray[i] = minColumn;
    }

    cout << "Minimum element in each column = { ";

    for (int i = 0; i < column; i++)
    {
        cout << MinvalueArray[i] << " ";
    }

    cout << "}" << endl;
    delete[] MinvalueArray;
    

    for (int i = 0; i < rows; i++)
    {
        delete[] MAXmassiv[i];
    }

    
}