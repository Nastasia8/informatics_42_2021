#include <iostream>
#include <ctime>

using namespace std;

class Massive 

{

 public:
    int rows; // определяем переменную для строк
    int cols; // определяем переменную для столбов 
    int **element; // определяем двумерный динамический массив 
    int **twoelement; // двумерный динамический массив для транспоранции матрицы
    int **Dopelement; // двумерный динамический массив для вычисления суммы двух матриц

    //Конструктор двумерного динамического массива
    Massive(int a, int b) // Конструктор двумерного динамического массива
    {
        rows = a; // объявление переменной для rows
        cols = b; // объявление переменной для cols
        element = new int* [rows]; // определяем двумерный массив
        for (int i = 0; i <rows; i++) 

        {
            element[i] = new int[cols];
        }

        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)

            {
                element[i][j] = rand() % 201 + (-100); // заполнение двумерного массива рандомными числами
            }
        }
    }
    //Деструктор 
    ~Massive() // Деструктор
    {
        for (int i = 0; i < rows; i++) // освобождаем ресурсы двумерного динамического массива
        {
            delete[] element[i];
        }

        delete element; // освобождаем массив

        for (int i = 0; i < cols; i++) // освобождаем ресурсы двумерного динамического массива для транспонирования матрицы

        {

            delete[] twoelement[i]; 

        }

        delete twoelement; // освобождаем массив

        for (int i = 0; i < rows; i++) // освобождаем ресурсы двумерного динамического массива для вычисления суммы двух матриц

        {

            delete[] Dopelement[i];

        }

        delete Dopelement; // освобождаем массив
        
    }

    //Метод отображения двумерного массива

    void Info() // объявлем функцию для отображения информации о двумерном динамическом массиве

    {
        for (int i = 0; i < rows; i++) // цикл для строк

        {

            for (int j = 0; j < cols; j++) // цикл для столбцов

                cout << element[i][j] << " "; // отображаем матрицу

            cout << endl;
              
        } 

        cout << endl;  
    }

    //Транспонация матрицы

    void transport() // объявлем функцию для отображения информации о транспоранции матрицы

    {

        twoelement = new int * [cols]; // объявляем двумерный динамический массив в котором храним перевернутую матрицу

        for (int i = 0; i < cols; i++) 

        {

         twoelement[i] = new int[rows];

        }

        for (int i = 0; i < rows; i++) // цикл для строк

        {

            for (int j = 0; j < cols; j++) // цикл для столбов

            {

                twoelement[i][j] = element[j][i]; // транспонируем матрицу
                cout <<  twoelement[i][j] << " "; // выводим 

            } 

            cout << endl;

        }

        cout << endl;
    }

 //Сумма матриц

    void Matricasumm() // объявлем функцию для отображения информации о сумме 2-х матриц

    {

        Dopelement = new int * [rows]; // объявляем двумерный динамический массив для суммы 2-х матриц

        for (int i = 0; i < rows; i++)

        {
           
            Dopelement[i] = new int[cols];
        }

        for (int i = 0; i < rows; i++) // цикл для строк

        {

            for (int j = 0; j < cols; j++) // цикл для столбов

            {

                Dopelement[i][j] = rand() % 201 + (-100); // заполнение массива

                cout << Dopelement[i][j] << " "; // вывод массива

            }

            cout << endl;

        }

        cout << endl;

        for (int i = 0; i < rows; i++) // цикл для строк

        {

            for (int j = 0; j < cols; j++) // цикл для столбов

            {

                Dopelement[i][j] = Dopelement[i][j] + element[i][j]; // складываем 2 матрицы
                cout << Dopelement[i][j] << " "; // выводим

            }

            cout << endl;

        }

    }

    //изменение массива

    void Change() // объявлем функцию для замены отрицательных значений в матрице

    {

        for (int i = 0; i < rows; i++) // цикл для строк

        {

            for (int j = 0; j < cols; j++) // цикл для столбов

            {

                if (element[i][j] < 0) // условие для определения отрицательного числа 

                {

                    element[i][j] = 0; // отрицательные числа заменяются на 0

                }

            }

        }

    }
};

   

int main() 

 {
    srand(time(NULL)); // функция для рандомных чисел

    Massive First(3,3); // размер 1 массива

    Massive Second (4, 4); // размер 2 массива

    Massive Third (2, 2); // размер 3 массива

    First.Info(); // Применение функций Info на объект класса Massive

    Second.Info(); // Применение функций Info на объект класса Massive

    Second.Change(); // Применение функций Change на объект класса Massive

    Second.Info(); // Просмотр изменений сматрицы

    First.transport(); // Применение функций Transport на объект класса Massive

    Third.Info(); //  Просмотр изменений матрицы

    Third.Matricasumm(); // Применение функций Matricasumm на объект класса Massive


    //Сумма нечетных элементов

    cout << "The sum of odd elements in each row of a two-dimensional array = { "; // вывод 

    int *sum1 = new int[First.rows]; // объявление одномерного динамичекого массива для поиска суммы нечётных элементов в строке

    for (int i = 0; i < First.rows; i++)

    {

        int t = 1;
        int sum = 0;
        for (int j = 0; j < First.cols; j++)
        {

            if(t % 2 != 0) // ищем нечётные числа

            {

                sum += First.element[i][j]; // считаем сумму

            }

            t++; // переходим к следующему числу
        }

        sum1[i] = sum; // присваеваем значение суммы  сумме нечётных элементов в строке 

    }

    for (int i =0; i < First.rows; i++)

    {

        cout << sum1[i] << " "; // выводим

    }

    cout << "}" << endl;

    //Максимальный элемент массива в каждом столбце среди нечётных значений

    cout << "The maximum array element in each column among odd values = { ";

    int *maxcolsnech = new int[First.cols]; // объявление одномерного динамичекого массива для поиска максимального элемента массива в каждом столбце среди нечетных значений

    for (int i = 0; i < First.cols; i++)

    {

        int max = -1000; // объявляем переменую максимального числа 

        for (int j = 0; j < First.rows; j++)

        {

            if((First.element[j][i] % 2 != 0) && First.element[j][i] > max) // поиск нужного элемента

            {

                max = First.element[j][i]; // присваеваем значение элемента максимальному

            }

        }

        maxcolsnech[i] = max; // присваеваем максимальный элемент максимальному нечётному в столбе

    }

    for (int i =0; i < First.cols; i++)

    {

        if (maxcolsnech[i] != -1000) // Проверка на наличие нечётных

        {

            cout << maxcolsnech[i] << " "; //выводим

        } else 

        {

            cout << "Nothing! "; // Если нет нечетных чисел

        }

    }

    cout << "}" << endl;

    //Среднее значение в каждом столбце

    cout << "The average value in each column = {  ";

    float *AverageStolb = new float[First.cols]; //объявление одномерного динамичекого массива для поиска среднего значения в каждом столбце

    for (int i = 0; i < First.cols; i++)

    {

        int Average = 0; // объявляем переменную среднего значения 

        for (int j = 0; j < First.rows; j++)

        {

            Average += First.element[j][i]; // складываем

        }

        AverageStolb[i] = Average/First.cols; // ищем среднее значение в столбе

    }

    for (int i =0; i < First.cols; i++)

    {

        cout << AverageStolb[i] << " "; // выводим

    }

    cout << "}" << endl;
    // освобождаем переменные 363-366
    delete AverageStolb;
    delete sum1;
    delete maxcolsnech;
    return 0; // завершение
  }
