#include <iostream>

using namespace std;

void FindMax(int** arr, int mas_rows, int mas_cols, int* arMax)
{
    int temp;
    for (int i = 0; i < mas_rows; i++)
    {
        temp = arr[0][0];

        for (int j = 0; j < mas_cols; j++)
        {
            if (arr[i][j] > temp)
            {
                temp = arr[i][j];
            }
            else
            {
                continue;
            }
        }
        arMax[i] = temp;
    }

    cout << "Maximum elements of array rows:= { ";

    for (int i = 0; i < mas_rows; i++)
    {
        cout << arMax[i] << " ";
    }

    cout << "}" << endl;
    delete[]  arMax; 
}

int main()
{
    setlocale(0, "rus");
    srand(time(NULL));
    int temp = 0;
    int mas_rows;
    int mas_cols;
    cout << "Enter the number of array rows" << endl;
    cin >> mas_rows;
    cout << "Enter the number of columns in the array" << endl;
    cin >> mas_cols;
    cout << endl;

    int** arr = new int* [mas_rows];
    for (int i = 0; i < mas_rows; i++)
    {
        arr[i] = new int[mas_cols];
    }



    // заполнение и вывод многомерного массива
    for (int i = 0; i < mas_rows; i++)
    {
        for (int j = 0; j < mas_cols; j++)
        {
            arr[i][j] = rand() % 100;
        }

    }

    for (int i = 0; i < mas_rows; i++)
    {
        for (int j = 0; j < mas_cols; j++)
        {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl;
    int* arMax = new int[mas_rows];
    FindMax(arr, mas_rows, mas_cols, arMax);

    for (int i = 0; i < mas_rows; i++)
    {
        delete[] arr[i];
    }

    delete[] arr;
    return 0;
}

