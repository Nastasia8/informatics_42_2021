#include <iostream>
#include <ctime>

using namespace std; // пространство имён

void FindMin(int** massivMegaGiga, int rows, int columns, int* MaxvalueArray) // void не возвращает значения
{
    int min = 1000;

    for (int i = 0; i < rows; i++) // цикл
    {
        min = 1000;

        for (int j = 0; j < columns; j++)
        {
            if (massivMegaGiga[i][j] < min) // если, то
            {
                min = massivMegaGiga[i][j];
            }
        }
        MaxvalueArray[i] = min;
    }

    cout << "Minimum element in each line = { "; // вывод

    for (int i = 0; i < rows; i++) // пока, то
    {
        cout << MaxvalueArray[i] << " ";
    }
    cout << "}" << endl;
}

int main()
{
    srand(time(NULL)); // генерируемые числа всегда будут разными (случайными)

    int rows;
    int columns;

    cout << "Enter rows = " << endl; // вывод
    cin >> rows; // ввод
    cout << "Enter columns = " << endl;
    cin >> columns;
    cout << endl;


    int** massivMegaGiga = new int* [rows];
    for (int i = 0; i < rows; i++)
    {
        massivMegaGiga[i] = new int[columns];
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            massivMegaGiga[i][j] = rand() % 100;
        }
    }

    for (int i = 0; i < rows; i++) // пока, то
    {
        for (int j = 0; j < columns; j++) // цикл
        {
            cout << massivMegaGiga[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl;

    int* MaxvalueArray = new int[rows]; // (*) при обработке типов аргументов для функций массивы преобразуются в указатели на содержащийся тип

    FindMin(massivMegaGiga, rows, columns, MaxvalueArray);

    delete[] MaxvalueArray;

    for (int i = 0; i < rows; i++)
    {
        delete[] massivMegaGiga[i]; // освободить память
    }

}