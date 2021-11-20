#include <iostream>
#include <ctime>

using namespace std;

void FindMax(int ** a, int c, int v, int *_arMin)
{
    for (int i=0; i<c; i++)
    {
        int min= a[i][0]; //запоминаем первый элемент в каждой строке, считаем его за минимальный элемент
        for (int j=1; j<v; j++)
        {
            if (a[i][j]<min)
            {
                min = a[i][j];
            }
        }
         _arMin[i] = min;//записываем найденное значение
    }
}

int main()
{
    int c=0;
    int v=0;
    cin >> c;
    cin >> v;


    srand(time(0));

    int **a = new int* [c]; // где c кол-во строк

    for (int i = 0; i < c; i++)
        a[i] = new int [v]; // где v кол-во столбцов

    for (int i=0; i<c; i++)
    {
        for (int j=0; j<v; j++)
        {
            a[i][j]= rand() % 2000 - 1000;
            cout << a[i][j] << "\t" ;
        }
        cout << endl;
    }

    int _arMin[c];

    FindMax(a, c, v, _arMin);

    cout << "////////////" <<endl;

    for (int i = 0; i < c; i++)
    {
        cout << _arMin[i] << "\t";
    }

    for (int i=0; i<c; i++)
    {
        delete[] a[i];
    }
    delete [] a;
    return 0;
}