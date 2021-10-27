#include <iostream>
#include <ctime>
using namespace std;

void FindMin(int ** massiveX, int stroki, int stolbtci, int* MaxValue)
{
    int min = 777; 
    for (int i = 0; i < stroki; i++)
    {
        min = 777;

        for (int j = 0; j < stolbtci; j++)
        {
            if (massiveX[i][j] < min)
            {
                min = massiveX[i][j];
            }
        }
        MaxValue[i] = min;
    }

    cout << "Минимальный элемент = | ";

    for (int i = 0; i < stroki; i++)
    {
        cout << MaxValue[i] << " ";
    }

    cout << "|" << endl;
}
int main() 
{
    srand(time(NULL));

    int stroki; //строки
    int stolbtci; //столбцы

    cout << "Введите строку = " << endl;
    cin >> stroki;
    cout << "Введите столбец = " << endl;
    cin >> stolbtci;
    cout << endl;

    int** massiveX = new int* [stroki];
    for (int g = 0; g <stroki; g++)
    {
        massiveX[g] = new int[stolbtci];
    }

    for (int i = 0; i < stroki; i++)
    {
        for (int j = 0; j < stolbtci; j++)
        {
            massiveX[i][j] = rand() % 100;
        }

    }

    for (int i = 0; i < stroki; i++)
    {
        for (int j = 0; j < stolbtci; j++)
        {
            cout << massiveX[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl;
    
    int *MaxValue = new int[stroki];

    FindMin(massiveX, stroki, stolbtci, MaxValue);
    
    delete[] MaxValue;
    
    for (int n = 0; n < stroki; n++)
    {
        delete[] massiveX[n];
    }
}