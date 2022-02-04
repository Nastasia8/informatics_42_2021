#include <iostream>
#include <ctime>

using namespace std; // пространство имён

int main()
{
    srand(time(NULL)); // генерируемые числа всегда будут разными (случайными)

    int minColumns = 1000; // тип int
    int maxRows = 0;
    int minimal = 1000;
    int rows;
    int columns;

    cout << "Enter rows = " << endl; // вывод
    cin >> rows; // ввод 
    cout << "Enter columns = " << endl;
    cin >> columns;
    cout << endl;

    // Создание двумерного массива

    int** massivGiga = new int* [rows]; // new пытается выделить достаточно памяти для размещения новых данных и в случае успеха возвращает адрес выделенного участка памяти
    for (int i = 0; i < rows; i++)
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

    // Нахождение мин.числа в массиве

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

    // Максимальный элем. в каждой строке массива

    cout << endl;
    cout << "a" << endl;
    cout << endl;

    int* MaxvalueArray = new int[rows];

    for (int i = 0; i < rows; i++)
    {
        maxRows = 0;

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

    delete[] MaxvalueArray; // освободить память 

    // Минимальный элем. в каждом столбце массива

    cout << endl;
    cout << "b" << endl;
    cout << endl;

    int* MinvalueArray = new int[columns];
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

    delete[] MinvalueArray; // освободить память 

    for (int i = 0; i < rows; i++)
    {
        delete[] massivGiga[i];
    }
}