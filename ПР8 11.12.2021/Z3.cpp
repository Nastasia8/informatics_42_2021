#include <iostream> //Ввод и вывод данных
//Задание взял у Александра Бутусова 1/42
#include <ctime> //Использоание даты и времени
using namespace std; //Использование всего, что находится в пространстве
class Massive //Класс Массивов
{
public: //Публичные
    int rows; //Целые Ряды
    int columns; //Целые Столбцы
    int **Giga; //Целое Гига
    int **TrGiga; //Целое ТрГига
    int **DopGiga; //Целое ДопГига
    //a
    Massive(int r, int c) //Массив (Целые r c)
    {
        rows = r; //Ряды = r
        columns = c; //Столбцы = c
        Giga = new int* [rows]; //Гига = новое целое [Ряды]
        for (int i = 0; i <rows; i++) //Цикл с точным кол-вом действий
        {
            Giga[i] = new int[columns]; //Гига [i] = новое целое [Столбцы]
        }
        for (int i = 0; i < rows; i++) //Цикл с точным кол-вом действий
        {
            for (int j = 0; j < columns; j++) //Цикл с точным кол-вом действий
            {
                Giga[i][j] = rand() % 201 + (-100); //Гига[i][j] = Рандом % 201 + (-100)
            }
        }
    }
    //b
    ~Massive() //Массив
    {
        for (int i = 0; i < rows; i++) //Цикл с точным кол-вом действий
        {
            delete[] Giga[i]; //Очистка Гига[i]
        }
        delete Giga; //Очистка Гига
        for (int i = 0; i < columns; i++) //Цикл с точным кол-вом действий
        {
            delete[] TrGiga[i]; //Очистка ТрГига[i]
        }
        delete TrGiga; //Очистка ТрГига
        for (int i = 0; i < rows; i++) //Цикл с точным кол-вом действий
        {
            delete[] DopGiga[i]; //Очистка ДопГига[i]
        }
        delete DopGiga; //Очистка ДопГига
    }
    //c
    void showInfo() //Указатель Показа данных
    {
        for (int i = 0; i < rows; i++) //Цикл с точным кол-вом действий
        {
            for (int j = 0; j < columns; j++) //Цикл с точным кол-вом действий
                cout << Giga[i][j] << " "; //Вывод Гига[i][j]
            cout << endl; //Конец
        } 
        cout << endl; //Конец
    }
    //d
    void transport() //Указатель Транспонировать
    {
        TrGiga = new int * [columns]; //ТрГига = Новое целое * [Столбцы]
        for (int i = 0; i < columns; i++) //Цикл с точным кол-вом действий
        {
            TrGiga[i] = new int[rows]; //ТрГига[i] = Новое целое[Ряды]
        }
        for (int i = 0; i < rows; i++) //Цикл с точным кол-вом действий
        {
            for (int j = 0; j < columns; j++) //Цикл с точным кол-вом действий
            {
                TrGiga[i][j] = Giga[j][i]; //ТрГига[i][j] = Гига[j][i]
                cout << TrGiga[i][j] << " "; //Вывод ТрГига[i][j]
            } 
            cout << endl; //Конец
        }
        cout << endl; //Конец
    }
    //f
    void zero() //Указатель Ноль
    {
        for (int i = 0; i < rows; i++) //Цикл с точным кол-вом действий
        {
            for (int j = 0; j < columns; j++) //Цикл с точным кол-вом действий
            {
                if (Giga[i][j] < 0) //Если Гига[i][j] < 0
                {
                    Giga[i][j] = 0; //Гига[i][j] = 0
                }
            }
        }
    }
    //e
    void sumMatrix() //Указатель Сумма матриц
    {
        DopGiga = new int * [rows]; //ДопГига = Новое целое * [Ряды]
        for (int i = 0; i < rows; i++) //Цикл с точным кол-вом действий
        {
            DopGiga[i] = new int[columns]; //ДопГига[i] = Новое целое[Столбцы]
        }
        for (int i = 0; i < rows; i++) //Цикл с точным кол-вом действий
        {
            for (int j = 0; j < columns; j++) //Цикл с точным кол-вом действий
            {
                DopGiga[i][j] = rand() % 201 + (-100); //ДопГига[i][j] = рандом % 201 + (-100)
                cout << DopGiga[i][j] << " "; //Вывод ДопГига[i][j]
            }
            cout << endl; //Конец
        }
        cout << endl; //Конец
        for (int i = 0; i < rows; i++) //Цикл с точным кол-вом действий
        {
            for (int j = 0; j < columns; j++) //Цикл с точным кол-вом действий
            {
                DopGiga[i][j] = DopGiga[i][j] + Giga[i][j]; //ДопГига[i][j] = ДопГига[i][j] +Гига[i][j]
                cout << DopGiga[i][j] << " "; //Вывод ДопГига[i][j]
            }
            cout << endl; //Конец
        }
    }
};
int main() //Существует функция с именем main и функция возвращает целое число типа int
{
    srand(time(NULL)); //Генератор случайного числа, используя текущую дату
    Massive First(3,3); //Первый массив (3, 3)
    Massive Second (4, 4); //Второй массив (4, 4)
    Massive Third (2, 2); //Третий массив (2, 2)
    First.showInfo(); //Показ данных первого
    Second.showInfo(); //Показ данных Второго
    Second.zero(); //Нули Второго
    Second.showInfo(); //Показ данных Второго
    First.transport(); //Первый Транспонирование
    Third.showInfo(); //Показ данных Третьего
    Third.sumMatrix(); //Третий Сумма матриц
    //1
    cout << "Array of odd elements in each row of the array = { "; //Вывод Массив нечетных элементов в каждой строке массива = {
    int *sumNechet = new int[First.rows]; //Целое Сумма нечётных = новое целое [первые ряды]
    for (int i = 0; i < First.rows; i++) //Цикл с точным кол-вом действий
    {
        int t = 1; //Целое
        int sum = 0; //Целое
        for (int j = 0; j < First.columns; j++) //Цикл с точным кол-вом действий
        {
            if(t % 2 != 0) //Если t % 2 не равно 0
            {
                sum += First.Giga[i][j]; //Сумма = сумма + Первое.Гига[i][j]
            }
            t++; //Сложение
        }
        sumNechet[i] = sum; //Сумма нечётных[i] = сумма
    }
    for (int i =0; i < First.rows; i++) //Цикл с точным кол-вом действий
    {
        cout << sumNechet[i] << " "; //Вывод Сумма нечётных[i]
    }
    cout << "}" << endl; //Вывод }
    //2
    cout << "Array of maximum elements in each column among the odd values = { "; //Вывод Массив максимальных элементов в каждом столбце среди нечетных значений = {
    int *maxStolbNechet = new int[First.columns]; //Целое МаксСтолбНечёт = новое целое [первые столбцы]
    for (int i = 0; i < First.columns; i++) //Цикл с точным кол-вом действий
    {
        int max = -1000; //Целое (Максимум = -1000)
        for (int j = 0; j < First.rows; j++) //Цикл с точным кол-вом действий
        {
            if((First.Giga[j][i] % 2 != 0) && First.Giga[j][i] > max) //Если Первые Гига[i][j] % 2 не равно 0 и Первые Гига[i][j] > максимум
            {
                max = First.Giga[j][i]; //Максимум = Первые Гига[i][j]
            }
        }
        maxStolbNechet[i] = max; //МаксСтолбНечёт[i] = максимум
    }
    for (int i =0; i < First.columns; i++) //Цикл с точным кол-вом действий
    {
        if (maxStolbNechet[i] != -1000) //Если МаксСтолбНечёт[i] не равно -1000
        {
            cout << maxStolbNechet[i] << " "; //Вывод МаксСтолбНечёт[i]
        }
        else //Иначе
        {
            cout << "Nothing! "; //Вывод Ничего!
        }
    }
    cout << "}" << endl; //Вывод }
    //3
    cout << "Array of average value in each column = { "; //Вывод Массив среднего значения в каждом столбце = {
    float *sredStolb = new float[First.columns]; //С плавающей запятой СредСтолб = новое с плавающей запятой[первые столбцы]
    for (int i = 0; i < First.columns; i++) //Цикл с точным кол-вом действий
    {
        int sred = 0; //Целое (среднее = 0)
        for (int j = 0; j < First.rows; j++) //Цикл с точным кол-вом действий
        {
            sred += First.Giga[j][i]; //Среднее = Среднее + Первые гига[j][i]
        }
        sredStolb[i] = sred/First.columns; //СредСтолб[i] = Сред / Первые столбцы
    }
    for (int i =0; i < First.columns; i++) //Цикл с точным кол-вом действий
    {
        cout << sredStolb[i] << " "; //СредСтолб
    }
    cout << "}" << endl; //Вывод }
    delete sredStolb; //Очистка Среднего значения в столбце
    delete sumNechet; //Очистка Суммы нечётных
    delete maxStolbNechet; //Очистка Нечётных в столбце
    return 0; //Вернуть 0
}   