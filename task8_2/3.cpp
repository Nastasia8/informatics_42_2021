#include <iostream>
#include <windows.h>
#include <time.h>
using std:: cin;
using std:: cout;
using std:: endl;

class Massive
{
public:
    Massive()
    {
        cout << "Введите число строк" << endl;
        cin >> row;
        cout << "Введите число столбцов" << endl;
        cin >> col;

        mas = new int* [row];

        for (int i = 0; i < row; ++i)
        {
            mas[i] = new int [col];
        }

        mas2 = new int* [row];

        for (int i = 0; i < row; ++i)
        {
            mas2[i] = new int [col];
        }

    }

    ~Massive()
    {
        for (int i = 0; i < row; ++i)
        {
            delete[] mas[i];
        }
        delete mas;

        for (int i = 0; i < row; ++i)
        {
            delete[] mas2[i];
        }
        delete mas2;
    }

    void Fill_Show_Array()
    {
        cout << "1 Матрица" << endl;
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                mas[i][j] = rand() % 100 + (-50);
                cout << mas[i][j] << "\t";
            }  
        cout << endl;
        }

        cout << endl << "\n";

        cout << "2 Матрица" << endl;
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                mas2[i][j] = rand() % 100 + (-50);
                cout << mas2[i][j] << "\t";
            }  
        cout << endl;
        }
    }

    void Odd()
    {
        
        Mas_Sum_Odd = new int [row];

        for (int i = 0; i < row; i++)
        {
            int Sum_Odd = 0;

            for (int j = 0; j < col; j++)
            {
                if (mas[i][j] % 2 != 0)
                {
                    Sum_Odd += mas[i][j];
                }
            }
        Mas_Sum_Odd[i] = Sum_Odd;
        }

        cout << endl << "Сумма нечётных элементов в каждой строке " << endl;
        
        for (int i = 0; i < row; i++)
        {
            cout << Mas_Sum_Odd[i] << '\t';
        }
        delete[] Mas_Sum_Odd;
    }

    void Max_Odd_Col()
    {
        Max_Odd = new int [col];
        int max;
        for (int i = 0; i < col; i++)
        {
            max = -151;
            
            for (int j = 0; j < row; j++)
            {

                if (mas[j][i] % 2 != 0 && max < mas[j][i])
                {
                    max = mas[j][i];
                }
                else
                {
                    continue;
                }
            }

        Max_Odd[i] = max;
        }

        cout << endl << "Максимальный элемент в каждом столбце среди нечётных значений" << endl;
        
        for (int i = 0; i < col; i++)
        {
            if (Max_Odd[i] != -151)
            {
            cout << Max_Odd[i] << '\t';
            }
            else
            {
                cout << "Не найдено" << "\t";
            }
        }
        delete[] Max_Odd;
    }
    
    void Average ()
    {
        Average_Col = new int [col];

        for (int i = 0; i < col; i++)
        {
            int sum = 0;

            for (int j = 0; j < row; j++)
            {
                sum += mas[j][i];
            }
        Average_Col[i] = sum / col;
        }

        cout << endl << "Средние значение в каждом столбце " << endl;
        
        for (int i = 0; i < col; i++)
        {
            cout <<  Average_Col[i] << "\t";
        }
        delete[] Max_Odd;
    }

    void Transposition()
    {
        cout << "Транспонирование матрицы" << endl;
        for (int i = 0; i < col; i++)
        {
            for (int j = 0; j < row; j++)
            {
                cout << mas[j][i] << "\t";
            }
            cout << endl;
        }
        cout << endl;
    }

    void Sum_Matrices()
    {
        cout << "Сумма 2-ух матриц" << endl;
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                mas2[i][j] += mas[i][j];
                cout << mas2[i][j] << "\t";
            }
            cout << endl;
        }
    }

    void Zero_Element_Matricex()
    {
        cout << "Нули в отрицательных числах" << endl;
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                if (mas[i][j] < 0)
                {
                    mas[i][j] = 0;
                }
                cout << mas[i][j] << "\t";
            }
            cout << endl;
        }
    }


private:
    int** mas;
    int ** mas2;
    int* Mas_Sum_Odd;
    int* Max_Odd;
    int* Average_Col;
    int row;
    int col;
};

int main(){
SetConsoleCP(CP_UTF8);
SetConsoleOutputCP(CP_UTF8);

Massive arr;
srand(time(NULL));
cout << endl;

arr.Fill_Show_Array();
cout << endl;

arr.Odd();
cout << endl;

arr.Max_Odd_Col();
cout << endl;

arr.Average();
cout << endl;
cout << endl;

arr.Transposition();
cout << endl;

arr.Sum_Matrices();
cout << endl;

arr.Zero_Element_Matricex();
cout << endl;
return 0;
}