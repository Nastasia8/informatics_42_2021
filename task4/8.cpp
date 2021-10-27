#include <iostream>
#include <windows.h>
#include <ctime>
using std::cout;
using std::endl;
using std::cin;

int main(){
SetConsoleCP(CP_UTF8);
SetConsoleOutputCP(CP_UTF8);

int ROW, COL;
int Min_COL = 101;
int Max_ROW = 0;
int minimal = 101;


// Создание двумерного массива
srand(time(NULL));
    cout<<"Введите число строк и стобцов "<< endl;

    cout<<"Строк = ";
cin>>ROW;

    cout<<"Столбцов = ";
cin>>COL;

    cout<<endl;

int mas[ROW][COL];
int imin=0,jmin=0;


// Инициализация и вывод массива
    cout << "Получен массив" << endl;
for (int i = 0; i < ROW; i++)
{

    for (int j = 0; j < COL; j++) 
    {
    mas[i][j] = rand() % 100;
    }

}
for (int i = 0; i < ROW; i++)
{
    for (int j = 0; j < COL; j++)
    {
    cout << mas[i][j] << "\t";
    }
    cout<< endl;
}

    cout<<endl;

    // Нахождение минимального числа в массиве

for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            if (mas[i][j] < minimal)
            {
                minimal = mas[i][j];
            }

        }
    }
    cout << "Минимальный элемент массива = " << minimal << endl;

    cout << endl;

// Максимальный элемент в каждой строке массива

    int *Max_Array = new int[ROW];

    for (int i = 0; i < ROW; i++)
    {
        int maxRows = 0;

        for (int j = 0; j < COL; j++)
        {
            if (mas[i][j] > maxRows)
            {
                maxRows = mas[i][j];
            }

        }
        Max_Array[i] = maxRows;
    }

    cout << "Максимальный элемент в каждой строке = { ";

    for (int i = 0; i < ROW; i++)
    {
        cout << Max_Array[i] << " ";
    }

    cout << "}" << endl;
    delete[] Max_Array;

    cout << endl;

// Минимальный элемент в каждом столбце массива

    int *Min_Array = new int[COL];
    for (int i = 0; i < COL; i++)
    {
        Min_COL = 1000;
        for (int j = 0; j < ROW; j++)
        {
            if (mas[j][i] < Min_COL)
            {
                Min_COL = mas[j][i];
            }

        }
        Min_Array[i] = Min_COL;
    }

    cout << "Минимальный элемент в каждом столбце = { ";

    for (int i = 0; i < COL; i++)
    {
        cout << Min_Array[i] << " ";
    }

    cout << "}" << endl;
    delete[] Min_Array;

return 0;
}