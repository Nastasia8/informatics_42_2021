#include <iostream>
#include <ctime>
using namespace std;

int main() 
{
    srand(time(NULL));

    int minstolbetz = 777;
    int min = 777;
    int maximumstroka = 0;
    int stolbetz;
    int stroka;

    cout << "Введи строку = " << endl;
    cin >> stroka;
    cout << "Введи столбец = " << endl;
    cin >> stolbetz;
    cout << endl;

    // создание массива(double) //

    int** XX = new int* [stroka];
    for (int i = 0; i <stroka; i++)
    {
        XX[i] = new int[stolbetz];
    }
    // вывод массива //
    
    for (int i = 0; i < stroka; i++)
    {
        for (int j = 0; j < stolbetz; j++)
        {
            XX[i][j] = rand() % 100;
        }
    }

    for (int i = 0; i < stroka; i++)
    {
        for (int j = 0; j < stolbetz; j++)
        {
            cout << XX[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl;
    // минимальное число в массиве //
    for (int i = 0; i < stroka; i++)
    {
        for (int j = 0; j < stolbetz; j++)
        {
            if (XX[i][j] < min)
            {
                min = XX[i][j];
            } 
        }
    }
    cout << "Минимальный элемент массива = " << min << endl;

    // максимальный элемент в каждой строке массива //

    cout << endl;
    cout << "A" << endl;
    cout << endl;

    int *Valueofmax = new int[stroka];

    for (int i = 0; i < stroka; i++)
    {
        int maximumstroka = 0;

        for (int j = 0; j < stolbetz; j++)
        {
            if (XX[i][j] > maximumstroka)
            {
                maximumstroka = XX[i][j];
            }
        }
        Valueofmax[i] = maximumstroka;
    }

    cout << "Максимальный элемент в каждой из строк = { ";

    for (int i = 0; i < stroka; i++)
    {
        cout << Valueofmax[i] << " ";
    }

    cout << "}" << endl;
    delete[] Valueofmax;
    
    // минимальный элемент в каждом столбце массива //

    cout << endl;
    cout << "B" << endl;
    cout << endl;

    int *MinOfValue = new int[stolbetz];
    for (int i = 0; i < stolbetz; i++)
    {
        minstolbetz = 777;
        for (int j = 0; j < stroka; j++)
        {
            if (XX[j][i] < minstolbetz)
            {
                minstolbetz = XX[j][i];
            }
        }
        MinOfValue[i] = minstolbetz;
    }

    cout << "Минимальный элемент в каждом столбце = { ";

    for (int i = 0; i < stolbetz; i++)
    {
        cout << MinOfValue[i] << " ";
    }

    cout << "}" << endl;
    delete[] MinOfValue;
    for (int i = 0; i < stroka; i++)
    {
        delete[] XX[i];
    } 
}