#include <iostream>
#include <ctime>

using namespace std;

int main() 
{
    srand(time(NULL));

    int minColumns = 1000;
    int maxRows = 0;
    int minimal = 1000;
    int rows;
    int columns;

    cout << "Enter rows = " << endl;
    cin >> rows;
    cout << "Enter columns = " << endl;
    cin >> columns;
    cout << endl;

    // Создание двумерного массива

    int** massivGiga = new int* [rows];
    for (int i = 0; i <rows; i++)
    {
        massivGiga[i] = new int[columns];
    }

    
    // Инициализация и вывод массива
    
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            massivGiga[i][j] = rand() % 100;
        }

    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cout << massivGiga[i][j] << "\t";
        }
        
        cout << endl;
    }
    cout << endl;

    // Нахождение минимального числа в массиве
    
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            if (massivGiga[i][j] < minimal)
            {
                minimal = massivGiga[i][j];
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
        int maxRows = 0;

        for (int j = 0; j < columns; j++)
        {
            if (massivGiga[i][j] > maxRows)
            {
                maxRows = massivGiga[i][j];
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

    int *MinvalueArray = new int[columns];
    for (int i = 0; i < columns; i++)
    {
        minColumns = 1000;
        for (int j = 0; j < rows; j++)
        {
            if (massivGiga[j][i] < minColumns)
            {
                minColumns = massivGiga[j][i];
            }
            
        }
        MinvalueArray[i] = minColumns;
    }

    cout << "Minimum element in each column = { ";

    for (int i = 0; i < columns; i++)
    {
        cout << MinvalueArray[i] << " ";
    }

    cout << "}" << endl;
    delete[] MinvalueArray;
    

    for (int i = 0; i < rows; i++)
    {
        delete[] massivGiga[i];
    }

    
}