#include <iostream>
#include <ctime>

using namespace std;

void MX(int ** a, int s, int v, int *_arMin)
{
    for (int i=0; i<s; i++)
    {
        int mn= a[i][0]; // первый элемент в каждой строке, (считаю за минимальный элемент)

        for (int j=1; j<v; j++)
        {
            if (a[i][j]<mn)
            {
                mn = a[i][j];
            }
        }
         _arMin[i] = mn;
    }
}

int main()
{
    int s=0;
    int v=0;
    cin >> s; // "c" кол-во строк
    cin >> v; // "v" кол-во столбцов


    srand(time(0));

    int **a = new int* [s]; 

    for (int i = 0; i < s; i++)
        a[i] = new int [v]; 

    for (int i=0; i<s; i++)
    {
        for (int j=0; j<v; j++)
        {
            a[i][j]= rand() % 2000 - 1000;
            cout << a[i][j] << "\t" ;
        }
        cout << endl;
    }

    int _arMin[s];

    MX(a, s, v, _arMin);

    cout << "" << endl;
    cout << "a[-] = ";

    for (int i = 0; i < s; i++)
    {
        cout << _arMin[i] << "\t";
    }

    for (int i=0; i<s; i++)
    {
        delete[] a[i];
    }
    delete [] a;
    return 0;
}