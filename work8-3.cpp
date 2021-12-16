#include <iostream>
#include <ctime>
#include <cmath> 

using namespace std;

class Massive
{
public:
    int rows;
    int columns;
    int **arr; //первая 
    int **twoarr;
    int **threearr; //дополнительная 3 матрица,
    
    //создаем
    Massive(int a, int b)
    {
        rows = a;
        columns = b;

        arr = new int *[rows];
        for (int i = 0; i < rows; i++)
        {
            arr[i] = new int[columns];
        }
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < columns; j++)
            {
                arr[i][j] = rand() % 200 + (-100);
            }
        }
    }
    //освобождаем выделенную память в массивах
    Massive() 
    {
        for (int i = 0; i < rows; i++)
        {
            delete[] arr[i];
        }
        delete arr;
        for (int i = 0; i < columns; i++)
        {
            delete[] twoarr[i];
        }
        delete twoarr;
        for (int i = 0; i < rows; i++)
        {
            delete[] threearr[i];
        }
        delete threearr;
    }
    //двумерный массив(делаем двумерным)
    void twomassiv()
    {
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < columns; j++)
                cout << arr[i][j] << " ";
            cout << endl;
        }
        cout << endl;
    }
    // транспортируем матрицу
    void change()
    {
        twoarr = new int* [columns]; //для этого создаем новую матрицу //она будет такой же как и исходная/первая
        for (int i = 0; i < columns; i++)
        {
            twoarr[i] = new int[rows]; //с
        }
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < columns; j++)
            {
                twoarr[i][j] = arr[j][i]; //переприсваиваем элементы//меняем местами
                cout << twoarr[i][j] << " "; //получившаяся матрица
            }
            cout << endl;
        }
        cout << endl;
    }
    void sum()
    {
        threearr = new int* [rows]; //создаем и присваиваем новой матрице данные м
        for (int i = 0; i < rows; i++)
        {
            threearr[i] = new int[columns];
        }
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < columns; j++)
            {
                threearr[i][j] = rand() % 200 + (-100);
                cout << threearr[i][j] << " ";
            }
            cout << endl;
        }
        cout << endl;

        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < columns; j++)
            {
                threearr[i][j] = threearr[i][j] + arr[i][j]; //складываем две матрицы
                cout << threearr[i][j] << " ";
            }
            cout << endl;
        }
    }
    void swap()
    {
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < columns; j++)
            {
                if (arr[i][j] < 0) //ставим условие для проверки числа на отрицательность
                {
                    arr[i][j] = 0;
                }
            }
        }
    }
};

int main()
{
    setlocale(LC_ALL, "Russian");

    srand(time(NULL));

    Massive First(5, 5); //указываем размер матрицы в скобочках
    Massive Second(3, 3);
    Massive Third(5, 5);

    First.twomassiv();
    Second.twomassiv();
    Second.swap(); //изменения перевернутой матрицы в 0
    Second.twomassiv();
    First.change(); //транспортировка 1 матрицы
    Third.twomassiv();
    Third.sum();


    cout << "Сумма нечетных элементов в массиве = ";

    int *sumn = new int[First.rows];

    for (int i = 0; i < First.rows; i++)
    {
        int x = 1;
        int sum = 0;
        for (int j = 0; j < First.columns; j++)
        {
            if (x % 2 != 0) //проверяем на четность
            {
                sum += First.arr[i][j]; //переприсваиваем
            }
            x++; //увеличиваем каждый раз 
        }
        sumn[i] = sum;
    }
    for (int i = 0; i < First.rows; i++)
    {
        cout << sumn[i] << " ";
    }
    cout << endl;

    cout << "Максимальный среди нечетных = ";

    int *maxn = new int[First.columns];

    for (int i = 0; i < First.columns; i++) //рассматриваем столбик первой
    {
        int max = -1500;
        for (int j = 0; j < First.rows; j++) //в строке
        {
            if ((First.arr[j][i] % 2 != 0) && (First.arr[j][i] > max)) //проверяем на четность и больше мах
            {
                max = First.arr[j][i]; //переприсваиваем
            }
        }
        maxn[i] = max;
    }
    for (int i = 0; i < First.columns; i++) //в 
    {
        if (maxn[i] != -1500)  //просто нужно вывести
        {
            cout << maxn[i] << " ";
        }
        else {
            cout << " - ";
        }
    }
    cout << endl;

    cout << "Среднее значение в среднем столбце = ";

    double *sstolbik = new double[First.columns];

    for (int i = 0; i < First.columns; i++)
    {
        int s=0; //среднее
        for (int j = 0; j < First.rows; j++)
        {
            s += First.arr[j][i]; //
        }
        sstolbik[i] = s / First.columns; //вычисляем
    }
    for (int i = 0; i < First.columns; i++)
    {
        cout << sstolbik[i] << " "; //выводим
    }
    cout << endl;

    delete sstolbik;
    delete sumn;
    delete maxn;

    return 0;
}
//смотрела Код Александра Бутосова 
//но почти делала сама