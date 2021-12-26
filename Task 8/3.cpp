//Задание взял у Александра Бутусова 1/42
#include <iostream> //Заголовочный файл с классами, функциями и переменными для организации ввода-вывода в языке программирования C++
#include <ctime> //Эта библиотека содержит функции для работы со временем и датой в С++.
using namespace std; //Обявление пространства имён std
class Massive //Класс "Massive"
{
public: //Это члены структуры или класса, к которым можно получить доступ извне этой же структуры или класса
    int rows; //Целочисленнй тип данных для "rows"
    int columns; //Целочисленнй тип данных для "columns"
    int** Giga; //это указатель на указатель на объект типа int "Giga"
    int** TrGiga; //это указатель на указатель на объект типа int "TrGiga"
    int** DopGiga; //это указатель на указатель на объект типа int "DopGiga"
    //a
    Massive(int r, int c) //область памяти, где могут последовательно храниться несколько значений
    {
        rows = r; //rows = r
        columns = c; //columns = c
        Giga = new int* [rows]; //Giga = новый указатель на объект типа [rows]
        for (int i = 0; i < rows; i++) //Цикл с точным количеством действий
        {
            Giga[i] = new int[columns]; //Giga [i] = новый целочисленный тип данных [columns]
        }
        for (int i = 0; i < rows; i++) //Цикл с точным количеством действий
        {
            for (int j = 0; j < columns; j++) //Цикл с точным количеством действий
            {
                Giga[i][j] = rand() % 201 + (-100); //Giga[i][j] = Рандом % 201 + (-100)
            }
        }
    }
    //b
    ~Massive() //область памяти, где могут последовательно храниться несколько значений
    {
        for (int i = 0; i < rows; i++) //Цикл с точным количествомвом действий
        {
            delete[] Giga[i]; //Отменяет выделение блока памяти Giga[i]
        }
        delete Giga; //Отменяет выделение блока памяти Giga
        for (int i = 0; i < columns; i++) //Цикл с точным количеством действий
        {
            delete[] TrGiga[i]; //Отменяет выделение блока памяти TrGiga[i]
        }
        delete TrGiga; //Отменяет выделение блока памяти TrGiga
        for (int i = 0; i < rows; i++) //Цикл с точным количеством действий
        {
            delete[] DopGiga[i]; //Отменяет выделение блока памяти DopGiga[i]
        }
        delete DopGiga; //Отменяет выделение блока памяти DopGiga
    }
    //c
    void showInfo() //Внутренний указатель "showInfo"
    {
        for (int i = 0; i < rows; i++) //Цикл с точным количеством действий
        {
            for (int j = 0; j < columns; j++) //Цикл с точным количеством действий
                cout << Giga[i][j] << " "; //Выводит данные из Giga[i][j]
            cout << endl; //переход на следующую строку
        }
        cout << endl; //переход на следующую строку
    }
    //d
    void transport() //Внутренний указатель "transport"
    {
        TrGiga = new int* [columns]; //TrGiga = новый указатель на объект типа [columns]
        for (int i = 0; i < columns; i++) //Цикл с точным количеством действий
        {
            TrGiga[i] = new int[rows]; //TrGiga[i] = Новый целочисленный тип данных для [rows]
        }
        for (int i = 0; i < rows; i++) //Цикл с точным количеством действий
        {
            for (int j = 0; j < columns; j++) //Цикл с точным количеством действий
            {
                TrGiga[i][j] = Giga[j][i]; //TrGiga[i][j] = Giga[j][i]
                cout << TrGiga[i][j] << " "; //Вывод данных из TrGiga[i][j]
            }
            cout << endl; //переход на следующую строку
        }
        cout << endl; //переход на следующую строку
    }
    //f
    void zero() //Внутренний указатель "zero"
    {
        for (int i = 0; i < rows; i++) //Цикл с точным количеством действий
        {
            for (int j = 0; j < columns; j++) //Цикл с точным количеством действий
            {
                if (Giga[i][j] < 0) //Если Giga[i][j] < 0
                {
                    Giga[i][j] = 0; //Giga[i][j] = 0
                }
            }
        }
    }
    //e
    void sumMatrix() //Внутренний указатель "sumMatrix"
    {
        DopGiga = new int* [rows]; //DopGiga = новый указатель на объект типа [rows]
        for (int i = 0; i < rows; i++) //Цикл с точным количеством действий
        {
            DopGiga[i] = new int[columns]; //DopGiga[i] = Новый целочисленный тип данных для [columns]
        }
        for (int i = 0; i < rows; i++) //Цикл с точным количеством действий
        {
            for (int j = 0; j < columns; j++) //Цикл с точным количеством действий
            {
                DopGiga[i][j] = rand() % 201 + (-100); //DopGiga[i][j] = рандом % 201 + (-100)
                cout << DopGiga[i][j] << " "; //Вывод данных из DopGiga[i][j]
            }
            cout << endl; //переход на следующую строку
        }
        cout << endl; //переход на следующую строку
        for (int i = 0; i < rows; i++) //Цикл с точным количеством действий
        {
            for (int j = 0; j < columns; j++) //Цикл с точным количеством действий
            {
                DopGiga[i][j] = DopGiga[i][j] + Giga[i][j]; //DopGiga[i][j] = DopGiga[i][j] +Giga[i][j]
                cout << DopGiga[i][j] << " "; //Вывод данных из DopGiga[i][j]
            }
            cout << endl; //переход на следующую строку
        }
    }
};
int main() //Эта строка сообщает компилятору, что есть функция с именем main, и что функция возвращает целое число типа int
{
    srand(time(NULL)); //Генератор случайного числа, используя текущую дату
    Massive First(3, 3); //Первый массив (3, 3)
    Massive Second(4, 4); //Второй массив (4, 4)
    Massive Third(2, 2); //Третий массив (2, 2)
    First.showInfo(); //Показ данных первого
    Second.showInfo(); //Показ данных Второго
    Second.zero(); //Нули Второго
    Second.showInfo(); //Показ данных Второго
    First.transport(); //Первый Транспонирование
    Third.showInfo(); //Показ данных Третьего
    Third.sumMatrix(); //Третий Сумма матриц
    //1
    cout << "Array of odd elements in each row of the array = { "; //Вывод надписи с текстом " Массив нечетных элементов в каждой строке массива = { "
    int* sumNechet = new int[First.rows]; //указатель на объект типа = новый целочисленный тип данных [First.rows]
    for (int i = 0; i < First.rows; i++) //Цикл с точным количеством действий
    {
        int t = 1; //целочисленный тип данных для "t = 1"
        int sum = 0; //целочисленный тип данных для "sum = 0"
        for (int j = 0; j < First.columns; j++) //Цикл с точным количеством действий
        {
            if (t % 2 != 0) //Если t % 2 не равно 0
            {
                sum += First.Giga[i][j]; //Сумма = sum + First.Giga[i][j]
            }
            t++; //Сложение
        }
        sumNechet[i] = sum; //Сумма нечётных[i] = сумма
    }
    for (int i = 0; i < First.rows; i++) //Цикл с точным количеством действий
    {
        cout << sumNechet[i] << " "; //Вывод данных из "sumNechet[i]" 
    }
    cout << "}" << endl; // вывод надписи с текстом "}" с переходом на следующую сторку
    //2
    cout << "Array of maximum elements in each column among the odd values = { "; //Вывод надписи с текстом " Массив максимальных элементов в каждом столбце среди нечетных значений = { "
    int* maxStolbNechet = new int[First.columns]; //указатель на объект типа "maxStolbNechet" = новый целочисленный тип данных для [First.columns]
    for (int i = 0; i < First.columns; i++) //Цикл с точным количеством действий
    {
        int max = -1000; //Целочисленный тип данных для  (max = -1000)
        for (int j = 0; j < First.rows; j++) //Цикл с точным количеством действий
        {
            if ((First.Giga[j][i] % 2 != 0) && First.Giga[j][i] > max) //Если First.Giga[i][j] % 2 не равно 0 и First.Giga[i][j] > max
            {
                max = First.Giga[j][i]; //max = First.Giga[i][j]
            }
        }
        maxStolbNechet[i] = max; //maxStolbNechet[i] = max
    }
    for (int i = 0; i < First.columns; i++) //Цикл с точным количеством действий
    {
        if (maxStolbNechet[i] != -1000) //Если maxStolbNechet[i] не равно -1000
        {
            cout << maxStolbNechet[i] << " "; //Вывод данных из "maxStolbNechet[i]"
        }
        else //Иначе
        {
            cout << "Nothing! "; //Вывод надписи с текстом " Ничего! "
        }
    }
    cout << "}" << endl; //вывод надписи с текстом "}" с переходом на следующую сторку
    //3
    cout << "Array of average value in each column = { "; //Вывод надписи с текстом " Массив среднего значения в каждом столбце = { "
    float* sredStolb = new float[First.columns]; //указатель на объект типа float "sredStolb" = новое с плавающей запятой[First.columns]
    for (int i = 0; i < First.columns; i++) //Цикл с точным количеством действий
    {
        int sred = 0; //Целочисленный тип данных для "sred = 0"
        for (int j = 0; j < First.rows; j++) //Цикл с точным количеством действий
        {
            sred += First.Giga[j][i]; //Среднее = sred + First.Giga[j][i]
        }
        sredStolb[i] = sred / First.columns; //СредСтолб[i] = Сред / Первые столбцы
    }
    for (int i = 0; i < First.columns; i++) //Цикл с точным количеством действий
    {
        cout << sredStolb[i] << " "; //Вывод данных из "sredStolb[i]"
    }
    cout << "}" << endl; //вывод надписи с текстом "}" с переходом на следующую сторку
    delete sredStolb; //Отменяет выделение блока памяти из "sredStolb"
    delete sumNechet; //Отменяет выделение блока памяти из "sumNechet"
    delete maxStolbNechet; //Отменяет выделение блока памяти из "maxStolbNechet"
    return 0; //Завершает выполнение функции и возвращает элемент управления в вызывающую функцию
}
