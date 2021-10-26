#include <iostream>

using namespace std;

int main() 
{
    setlocale(0, "rus");

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

    //////////////////////

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

    // нахождение и вывод минимального элемента в заданном массиве

    temp = arr[0][0];
    for (int i = 0; i < mas_rows; i++)
    {
        for (int j = 0; j < mas_cols; j++)
        {
            if (arr[i][j] < temp)
            {
                temp = arr[i][j];
            }
            else
            {
                continue;
            }
        }
    }
    cout << "Minimum array element:= " << temp << endl;

    // найти максимальный элемент в каждой строке массива, результат записать в отдельный одномерный массив. Результат отобразить на экране

    cout << endl << "A" << endl;
    int *arr_max_value_rows = new int[mas_rows];

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
        arr_max_value_rows[i] = temp;
    }

    cout << "Maximum elements of array rows:= { ";

    for (int i = 0; i < mas_rows; i++)
    {
        cout << arr_max_value_rows[i] << " ";
    }

    cout << "}" << endl;
    delete[] arr_max_value_rows;

    // найти минимальный элемент в каждом столбце массива

    cout << endl << "B" << endl;

    int* arr_max_value_cols = new int[mas_cols];
    for (int i = 0; i < mas_cols; i++)
    {
        temp = arr[0][0];
        for (int j = 0; j < mas_rows; j++)
        {
            if (arr[j][i] < temp)
            {
                temp = arr[j][i];
            }
            else
            {
                continue;
            }
           
        }
        arr_max_value_cols[i] = temp;
    }

    cout << "Minimum elements of array columns:= { ";

    for (int i = 0; i < mas_cols; i++)
    {
        cout << arr_max_value_cols[i] << " ";
    }

    cout << "}" << endl;
    delete[] arr_max_value_cols;
  
    for (int i = 0; i < mas_rows; i++)
    {
        delete[] arr[i];
    }

    delete[] arr;
    return 0;
}

