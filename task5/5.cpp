#include <iostream>
#include <windows.h>
#include <time.h>
using std::cin;
using std::cout;
using std::endl;

void FindMax(int **arr, int mas_rows, int mas_cols, int *arMax);

int main(){
SetConsoleCP(CP_UTF8);
SetConsoleOutputCP(CP_UTF8);

    srand(time(NULL));
    int max = 0;
    int mas_rows;
    int mas_cols;
    cout << "Введите число строк массива" << endl;
    cin >> mas_rows;
    cout << "Введите число стобцов массива" << endl;
    cin >> mas_cols;
    cout << endl;

    int **arr = new int *[mas_rows];
    for (int i = 0; i < mas_rows; i++)
    {
        arr[i] = new int[mas_cols];
    }

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


    int* arMax = new int[mas_rows];
    FindMax(arr, mas_rows, mas_cols, arMax);




    for (int i = 0; i < mas_rows; i++)
    {
        delete [] arr[i];
    }
    delete [] arr;
    return 0;
}

void FindMax(int **arr, int mas_rows, int mas_cols, int *arMax)
{
    int max;
        for (int i = 0; i < mas_rows; i++)
        {
            max = arr[0][0];

         for (int j = 0; j < mas_cols; j++)
            {
                if (arr[i][j] > max)
                {
                    max = arr[i][j];
                }
            }
            arMax[i] = max;
        }

        cout << "Максимальное значение в каждой строке массива = { ";

        for (int i = 0; i < mas_rows; i++)
        {
            cout << arMax[i] << " ";
        }
        cout << "}" << endl;
    delete[]  arMax; 
}