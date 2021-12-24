#include <iostream>
#include <ctime>

using namespace std;

class Massive 
{
public:
    // определяем публичные поля
    int rows; // для строк
    int columns; // для столбцов
    int **Giga; // двумерный динамический массив
    int **TrGiga; // двумерный динамический массив для транспоранции матрицы
    int **DopGiga; // двумерный динамический массив для суммы двух матриц
    
    //Конструктор двумерного динамического массива
    Massive(int r, int c)
    {
        rows = r;
        columns = c;
        // определяем двумерный динамический массив
        Giga = new int* [rows];
        for (int i = 0; i <rows; i++)
        {
            Giga[i] = new int[columns];
        }
        // заполняем массив рандомными значениями
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < columns; j++)
            {
                Giga[i][j] = rand() % 201 + (-100);
            }
        }
    }
    //Деструктор 
    ~Massive()
    {   
        // освобождаем ресурсы двумерного динамического массива
        for (int i = 0; i < rows; i++)
        {
            delete[] Giga[i];
        }
        delete Giga; 
        // освобождаем ресурсы двумерного динамического массива для транспонирования матрицы
        for (int i = 0; i < columns; i++)
        {
            delete[] TrGiga[i];
        }
        delete TrGiga;
        // освобождаем ресурсы двумерного динамического массива для вычисления суммы двух матриц
        for (int i = 0; i < rows; i++)
        {
            delete[] DopGiga[i];
        }
        delete DopGiga;
        
    }
    //Метод отображения двумерного динамического массива
    void showInfo()
    {
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < columns; j++)
                cout << Giga[i][j] << " ";
            cout << endl;   
        } 
        cout << endl;  
    }
    //Транспонация матрицы
    void transport()
    {   
        // объявляем двумерный динамический массив в котором храним перевернутую матрицу
        TrGiga = new int * [columns];
        for (int i = 0; i < columns; i++)
        {
            TrGiga[i] = new int[rows];
        }

        for (int i = 0; i < rows; i++)
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
    // объявлем функцию для замены отрицательных значений в матрице
    void zero()
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
    // объявлем функцию для отображения информации о сумме 2-х матриц
    void sumMatrix()
    {
        // объявляем двумерный динамический массив для суммы 2-х матриц
        DopGiga = new int * [rows];
        for (int i = 0; i < rows; i++)
        {
            DopGiga[i] = new int[columns];
        }
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < columns; j++)
            {
                DopGiga[i][j] = rand() % 201 + (-100); // заполнение массива рандомными значениями
                cout << DopGiga[i][j] << " ";
            }
            cout << endl;
        }
        cout << endl;
        // сложение двух матриц и вывод
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < columns; j++)
            {
                DopGiga[i][j] = DopGiga[i][j] + Giga[i][j];
                cout << DopGiga[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main() 
{
    srand(time(NULL)); // функция для рандомных чисел

    Massive First(3,3); // размер 1 массива
    Massive Second (4, 4); // размер 2 массива
    Massive Third (2, 2); // размер 3 массива
    // Применение функций showInfo 
    First.showInfo();
    Second.showInfo();
    // Применение функции zero
    Second.zero();
    // Просмотр изменений матрицы
    Second.showInfo();
    // Применение функции transport 
    First.transport();
    //  Просмотр изменений матрицы
    Third.showInfo();
    // Применение функции sumMatrix
    Third.sumMatrix();


    //Сумма нечетных элементов
    cout << "Array of odd elements in each row of the array = { ";
    int *sumNechet = new int[First.rows]; // объявление одномерного динамичекого массива для поиска суммы нечётных элементов в строке
    for (int i = 0; i < First.rows; i++)
    {
        int t = 1;
        int sum = 0;
        for (int j = 0; j < First.columns; j++)
        {
            if(t % 2 != 0) // ищем нечётные числа
            {
                sum += First.Giga[i][j]; // считаем сумму
            }
            t++; // переходим к следующему числу
        }
        sumNechet[i] = sum; // присваеваем значение суммы  сумме нечётных элементов в строке 
    }
    for (int i =0; i < First.rows; i++)
    {
        cout << sumNechet[i] << " "; // выводим
    }
    cout << "}" << endl;

    //Максимальный элемент массива в каждом столбце среди нечётных значений
    cout << "Array of maximum elements in each column among the odd values = { ";
    int *maxStolbNechet = new int[First.columns]; // объявление одномерного динамичекого массива для поиска максимального элемента массива в каждом столбце среди нечетных значений
    for (int i = 0; i < First.columns; i++)
    {
        int max = -1000; // объявляем переменую максимального числа 
        for (int j = 0; j < First.rows; j++)
        {
            if((First.Giga[j][i] % 2 != 0) && First.Giga[j][i] > max) // поиск нужного элемента
            {
                max = First.Giga[j][i]; // присваеваем значение элемента максимальному
            }
        }
        maxStolbNechet[i] = max; // присваеваем максимальный элемент максимальному нечётному в столбе
    }
    for (int i =0; i < First.columns; i++)
    {
        if (maxStolbNechet[i] != -1000){ // Проверка на наличие нечётных
            cout << maxStolbNechet[i] << " "; //выводим
        } else {
            cout << "Nothing! "; // Если нет нечетных чисел
        }
    }
    cout << "}" << endl;

    //Среднее значение в каждом столбце
    cout << "Array of average value in each column = { ";
    float *sredStolb = new float[First.columns]; //объявление одномерного динамичекого массива для поиска среднего значения в каждом столбце
    for (int i = 0; i < First.columns; i++)
    {
        int sred = 0; // объявляем переменную среднего значения 
        for (int j = 0; j < First.rows; j++)
        {
            sred += First.Giga[j][i]; // складываем
        }
        sredStolb[i] = sred/First.columns; // ищем среднее значение в столбе
    }
    for (int i =0; i < First.columns; i++)
    {
        cout << sredStolb[i] << " "; // выводим
    }
    cout << "}" << endl;

    // освобождение ресурсов
    delete sredStolb;
    delete sumNechet;
    delete maxStolbNechet;
    return 0;
}   
// Разбирал задание с Александром Бутусовым, вроде понял)