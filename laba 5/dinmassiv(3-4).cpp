#include <iostream>
#include <ctime> // для рандомных значений

using namespace std;

void ABC(int i, int* a)
{
    cout << a[i] << " ";
}

void MNNUB(int* a, int c)
{
    int mn = a[0]; // присваивание "mn" самому первому элементу 

    for (int i=0; i<c; i++)
    {
        if (a[i] < mn)
        {
            mn = a[i]; // минимальное значение
        }
    }
    cout << mn <<endl;
}

void completion(int i, int* a, int c)
{
    srand( time(0) );
    for (int i=0; i<c; i++)
    {
    a[i] = -1000 + rand() % 1000; // от -1000 до 1000 РАНДОМНО 
    conclusion(i,a);
    }

}

int main()
{
    int i=0;
    int c;

    cout << "white number elements of massiv";
    cin >> c;

    int *a = new int[c];

    ABC(i,a,c);
    MNNUB(a,c);

    delete [] a; // удаление динамического массива и освобождение его памяти
    return 0;
}