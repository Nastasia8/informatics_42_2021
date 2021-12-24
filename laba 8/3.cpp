#include <iostream>
#include <ctime> // для работы с рандомными значениями

using namespace std;

class Massive // объявление класса
{
public:
    int rows;// строки
    int columns;// столбцы
    int **Giga; // мног. динам. массив для первого задания
    int **TrGiga; // мног. динам. массив для транспонирования
    int **DopGiga;// мног. динам. массив для дополнительной матрицы

    Massive(int r, int c)// инициализация конструктора
    {
        rows = r;
        columns = c;
        Giga = new int* [rows];// обЪявление и заполнение основного массива
        for (int i = 0; i <rows; i++)//
        {//
            Giga[i] = new int[columns];//
        }//

        for (int i = 0; i < rows; i++)// 
        {//
            for (int j = 0; j < columns; j++)//
            {//
                Giga[i][j] = rand() % 201 + (-100);// заполнение рандомными значениями
            }//
        }//
    }

    ~Massive()// инициализация диструктора
    {
        for (int i = 0; i < rows; i++)
        {
            delete[] Giga[i]; // освобождение памяти основного многомерного массива
        }
        delete Giga; //

        for (int i = 0; i < columns; i++)
        {
            delete[] TrGiga[i]; // освобождение памяти матрицы
        }
        delete TrGiga; //

        for (int i = 0; i < rows; i++)
        {
            delete[] DopGiga[i]; // освобождение памяти доп матрицы
        }
        delete DopGiga; //
    }

    void showInfo() // вывод информации о содержании ячеек основного массива
    {
        for (int i = 0; i < rows; i++) // перебор строчек
        {//
            for (int j = 0; j < columns; j++) // перебор столбцов
                cout << Giga[i][j] << " ";//
            cout << endl;//
        }//
        cout << endl;//
    }

    void transport() // транспонирование матрицы
    {
        TrGiga = new int * [columns]; // создание матрицы (через мног. массив)
        for (int i = 0; i < columns; i++)//
        {//
            TrGiga[i] = new int[rows];//
        }//

        for (int i = 0; i < rows; i++) // заполнение матрицы и вывод
        {//
            for (int j = 0; j < columns; j++)//
            {//
                TrGiga[i][j] = Giga[j][i];//
                cout << TrGiga[i][j] << " ";//
            }//
            cout << endl;//
        }//
        cout << endl;
    }

    void zero() // обнуление основного массива
    {//
        for (int i = 0; i < rows; i++)//
        {//
            for (int j = 0; j < columns; j++)//
            {//
                if (Giga[i][j] < 0)//
                {//
                    Giga[i][j] = 0;//
                }//
            }//
        }//
    }//

    void sumMatrix() // сложение матриц доп и основной
    {
        DopGiga = new int * [rows];// объявление и заполнение доп. массива
        for (int i = 0; i < rows; i++)//
        {//
            DopGiga[i] = new int[columns];//
        }//

        for (int i = 0; i < rows; i++)// 
        {//
            for (int j = 0; j < columns; j++)//
            {//
                DopGiga[i][j] = rand() % 201 + (-100); // *заполнение производится с помощью рандомных значений
                cout << DopGiga[i][j] << " ";//
            }//
            cout << endl;//
        }//
        cout << endl;

        for (int i = 0; i < rows; i++)// сложение двух матриц и вывод
        {//
            for (int j = 0; j < columns; j++)//
            {//
                DopGiga[i][j] = DopGiga[i][j] + Giga[i][j];//
                cout << DopGiga[i][j] << " ";//
            }//
            cout << endl;
        }//
    }
};

int main()
{
    srand(time(NULL));

    Massive First(3,3);
    Massive Second (4, 4);
    Massive Third (2, 2);
    First.showInfo(); // вызов "метода2 из класса
    Second.showInfo(); //
    Second.zero(); //
    Second.showInfo(); //
    First.transport(); //
    Third.showInfo(); //
    Third.sumMatrix(); //

    cout << "Array of odd elements in each row of the array = { ";
    int *sumNechet = new int[First.rows]; // создание одномерного динамического массива
    for (int i = 0; i < First.rows; i++)//
    {//
        int t = 1;//
        int sum = 0;//
        for (int j = 0; j < First.columns; j++)//
        {//
            if(t % 2 != 0)//
            {//
                sum += First.Giga[i][j]; // заполнение массива суммой нечётных чисел
            }//
            t++;//
        }//
        sumNechet[i] = sum;//
    }//
    for (int i =0; i < First.rows; i++) // вывод
    {//
        cout << sumNechet[i] << " ";//
    }//
    cout << "}" << endl;//


    cout << "Array of maximum elements in each column among the odd values = { ";
    int *maxStolbNechet = new int[First.columns]; // объявление динамического одномерного массива 
    for (int i = 0; i < First.columns; i++) // заполнение элементами из каждого столбца основного мног. динам. массива
    {
        int max = -1000;
        for (int j = 0; j < First.rows; j++)
        {
            if((First.Giga[j][i] % 2 != 0) && First.Giga[j][i] > max)
            {
                max = First.Giga[j][i]; // * заполнение максимальными значениями
            }
        }
        maxStolbNechet[i] = max;
    }
    for (int i =0; i < First.columns; i++)
    {
        if (maxStolbNechet[i] != -1000){
            cout << maxStolbNechet[i] << " "; // вывод
        } else {
            cout << "Nothing! ";
        }
    }
    cout << "}" << endl;

    cout << "Array of average value in each column = { ";
    float *sredStolb = new float[First.columns]; // создание одномерного динамического массива

    for (int i = 0; i < First.columns; i++)
    {
        int sred = 0;
        for (int j = 0; j < First.rows; j++)
        {
            sred += First.Giga[j][i]; // заполнение средними значениями из каждого столбца основного массива
        }
        sredStolb[i] = sred/First.columns;
    }
    for (int i =0; i < First.columns; i++)
    {
        cout << sredStolb[i] << " "; // вывод одномерного динамического массива
    }
    cout << "}" << endl;

    delete sredStolb; // освобождение памяти одномерного динамического массива
    delete sumNechet;//
    delete maxStolbNechet;//
    return 0;
}