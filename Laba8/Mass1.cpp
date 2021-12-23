#include <iostream>//подключение стандартной библиотеки c++
#include <ctime>//подключение библиотеки для работы рандомайзера

using namespace std;

class Massive //объявление класса Massive
{
public:
    int rows;//объявление переменных
    int columns;//объявление переменных
    int **Giga;//объявление многомерного динамического массива для задания под a
    int **TrGiga;//объявление многомерного динамического массива матрица для транспонирования
    int **DopGiga;//объявление многомерного динамического массива дополнительная матрица
    //a
    Massive(int r, int c)// инициализация конструктора
    {
        rows = r;
        columns = c;
        Giga = new int* [rows];// обявления основного массива
        for (int i = 0; i <rows; i++)
        {
            Giga[i] = new int[columns];
        }

        for (int i = 0; i < rows; i++) // заполнение основного массива при помощи рандомизации
        {
            for (int j = 0; j < columns; j++)
            {
                Giga[i][j] = rand() % 201 + (-100);
            }
        }
    }

    //b
    ~Massive()//инициализация диструктора
    {
        for (int i = 0; i < rows; i++)//освобождение пати основного массива
        {
            delete[] Giga[i];
        }
        delete Giga;

        for (int i = 0; i < columns; i++)// освобождение памяти матрицы
        {
            delete[] TrGiga[i];
        }
        delete TrGiga;

        for (int i = 0; i < rows; i++)// освобождение памяти дополнительной матрицы
        {
            delete[] DopGiga[i];
        }
        delete DopGiga;
    }

    //c
    void showInfo()// создание метода для вывода информации о содержание ячеек основного массива
    {
        for (int i = 0; i < rows; i++)// цикл for для перебора строчек
        {
            for (int j = 0; j < columns; j++)// цикл для перебора столбцов
                cout << Giga[i][j] << " ";
            cout << endl;
        }
        cout << endl;
    }

    //d
    void transport()// метод для транспонирования матрицы
    {
        TrGiga = new int * [columns];// объявление многомерного динамического массива(матрицы)
        for (int i = 0; i < columns; i++)
        {
            TrGiga[i] = new int[rows];
        }

        for (int i = 0; i < rows; i++)//заполнение матрицы из основного массива и её вывод
        {
            for (int j = 0; j < columns; j++)
            {
                TrGiga[i][j] = Giga[j][i];
                cout << TrGiga[i][j] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }

    //f
    void zero()// метод для обнуления основного массива
    {
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < columns; j++)
            {
                if (Giga[i][j] < 0)
                {
                    Giga[i][j] = 0;
                }
            }
        }
    }
    //e
    void sumMatrix()// метод для сложения матриц основной и дополнительной
    {
        DopGiga = new int * [rows];// объявление дополнительного массива
        for (int i = 0; i < rows; i++)//
        {//
            DopGiga[i] = new int[columns];//
        }//

        for (int i = 0; i < rows; i++)// заполнение дополнительного массива так же через рандом и его отображение
        {//
            for (int j = 0; j < columns; j++)//
            {//
                DopGiga[i][j] = rand() % 201 + (-100);//
                cout << DopGiga[i][j] << " ";//
            }//
            cout << endl;//
        }//
        cout << endl;//

        for (int i = 0; i < rows; i++)// сложение двух матриц и вывод суммы матриц
        {//
            for (int j = 0; j < columns; j++)//
            {//
                DopGiga[i][j] = DopGiga[i][j] + Giga[i][j];//
                cout << DopGiga[i][j] << " ";//
            }//
            cout << endl;//
        }//
    }
};

int main()
{
    srand(time(NULL));

    Massive First(3,3);
    Massive Second (4, 4);
    Massive Third (2, 2);
    First.showInfo();//вызов метода из сласса
    Second.showInfo();//вызов метода из сласса
    Second.zero();//вызов метода из сласса
    Second.showInfo();//вызов метода из сласса
    First.transport();//вызов метода из сласса
    Third.showInfo();//вызов метода из сласса
    Third.sumMatrix();//вызов метода из сласса


    //1
    cout << "Array of odd elements in each row of the array = { ";
    int *sumNechet = new int[First.rows];//создание одномерного динамического массива и заполнение его суммой нечётных чисел содержащихся в ячейках и его вывод
    for (int i = 0; i < First.rows; i++)
    {
        int t = 1;
        int sum = 0;
        for (int j = 0; j < First.columns; j++)
        {
            if(t % 2 != 0)
            {
                sum += First.Giga[i][j];
            }
            t++;
        }
        sumNechet[i] = sum;
    }
    for (int i =0; i < First.rows; i++)
    {
        cout << sumNechet[i] << " ";
    }
    cout << "}" << endl;

    //2
    cout << "Array of maximum elements in each column among the odd values = { ";
    int *maxStolbNechet = new int[First.columns];/*объявление динамического одномерного массива и его заполнение и вывод
    максимальными элементами из каждого столбца основного многомерного динамического массива */
    for (int i = 0; i < First.columns; i++)
    {
        int max = -1000;
        for (int j = 0; j < First.rows; j++)
        {
            if((First.Giga[j][i] % 2 != 0) && First.Giga[j][i] > max)
            {
                max = First.Giga[j][i];
            }
        }
        maxStolbNechet[i] = max;
    }
    for (int i =0; i < First.columns; i++)
    {
        if (maxStolbNechet[i] != -1000){
            cout << maxStolbNechet[i] << " ";
        } else {
            cout << "Nothing! ";
        }
    }
    cout << "}" << endl;

    //3
    cout << "Array of average value in each column = { ";
    float *sredStolb = new float[First.columns];/*создание одномерного динамического массива и его последующее заполнение средними значениями
    из каждого столбца основного массива и последующий вывод одномерного динамического массива*/
    for (int i = 0; i < First.columns; i++)
    {
        int sred = 0;
        for (int j = 0; j < First.rows; j++)
        {
            sred += First.Giga[j][i];
        }
        sredStolb[i] = sred/First.columns;
    }
    for (int i =0; i < First.columns; i++)
    {
        cout << sredStolb[i] << " ";
    }
    cout << "}" << endl;

    delete sredStolb;//освобождение памяти одномерного динамического массива
    delete sumNechet;//освобождение памяти одномерного динамического массива
    delete maxStolbNechet;//освобождение памяти одномерного динамического массива
    return 0;
}