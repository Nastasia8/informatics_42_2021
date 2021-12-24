//Задание взял у Александра Бутусова 1/42
#include <iostream> //Заголовочный файл с классами, функциями и переменными для организации ввода-вывода в языке программирования C++
using namespace std; //Обявление пространства имён std
int main() //Эта строка сообщает компилятору, что есть функция с именем main, и что функция возвращает целое число типа int
{
    int n, div = 2; //Целое число для  n, div
    int nod = 1; //Целое число для nod = 1
    int m, p; //Целое число для m p
    int t1 = 0; //Целое число для t1=0
    int t2 = 0; //Целое число для t2=0
    int t3 = 0; //Целое число для t3=0
    int a[100]; //Целое число для a[100]
    int b[100]; //Целое число для b[100]
    int c[100]; //Целое число для c[100]
    cout << "Write 3 numbers"; //Вывод надписи с текстом "Введите 3 числа"
    cin >> n >> m >> p; //Ввод данных для n, m, p
    while (n > 1) //Цикл Пока (n>1)
    {
        while (n % div == 0) //Пока % от Див = 0
        {
            a[t1] = div; //a=div
            n = n / div; //формула для n
            t1 += 1; //ti=t1+1
        }
        if (div == 2) div++; //если div=2
        else div += 2; //иначе div=div+2
    }
    div = 2; //приравнение
    while (m > 1) //пока m>1
    {
        while (m % div == 0) //пока %div=0
        {
            b[t2] = div; //b=div
            m = m / div; //формула для m
            t2 += 1; //t2=t2+1
        }
        if (div == 2) div++; //если div = 2
        else div += 2; //иначе div=div+2
    }
    div = 2; //приравнение
    while (p > 1) //пока p>1
    {
        while (p % div == 0) //пока % от div = 0
        {
            c[t3] = div; //c=div
            p = p / div; //формула  для p
            t3 += 1; //t3=t3+1
        }
        if (div == 2) div++; //если div=2
        else div += 2; //иначе div=div+2
    }
    int* a1 = new int[t1]; //Целое a1=ti
    int* b1 = new int[t2]; //Целое b1=t2
    int* c1 = new int[t3]; //Целое c1=t3
    int massiv[100]; //Целое число для massiv[100]
    int massiv1[100]; //Целое число для massiv1[100]
    for (int i = 0; i < t1; i++) //Цикл с точным кол-вом действий
    {
        a1[i] = a[i]; //a1=a
        cout << a1[i] << " "; //Вывод в консоль a1
    }
    cout << endl; //Конец
    for (int i = 0; i < t2; i++) //Цикл с точным кол-вом действий
    {
        b1[i] = b[i]; //b1=b
        cout << b1[i] << " "; //Вывод в консоль b1
    }
    cout << endl; //Конец
    for (int i = 0; i < t3; i++) //Цикл с точным кол-вом действий
    {
        c1[i] = c[i]; //c1=c
        cout << c1[i] << " "; //Вывод в консоль c1
    }
    cout << endl; //Конец
    int timer = 0; //Целое таймер = 0
    for (int i = 0; i < t1; i++) //Цикл с точным кол-вом действий
    {
        for (int j = 0; j < t2; j++) //Цикл с точным кол-вом действий
        {
            if ((a1[i] == b1[j])) //Условие Если (a1=b1)
            {
                massiv[timer] = a[i]; //таймер=a
                timer += 1; //таймер=таймер+1
                i += 1; //i=i+1
            }
        }
    }
    int* massiva = new int[timer]; //Целое a=timer
    for (int i = 0; i < timer; i++) //Цикл с точным кол-вом действий
    {
        massiva[i] = massiv[i]; a = massiv //массив
    }
    int massivix[100]; //Целое x[100]
    int timer2 = 0; //Целое таймер2=0
    for (int i = 0; i < timer; i++) //Цикл с точным кол-вом действий
    {
        for (int j = 0; j < t3; j++) //Цикл с точным кол-вом действий
        {
            if ((massiva[i] == c1[j])) //Если a=c1
            {
                massivix[timer2] = massiva[i]; //x=a
                timer2 += 1; //timer2= timer2+1
                i += 1; //i=i+1
            }
        }
    }
    int* massivix1 = new int[timer2]; //Целое x1 = timer2
    for (int i = 0; i < timer2; i++) //Цикл с точным кол-вом действий
    {
        massivix1[i] = massivix[i]; //x1=x
        nod *= massivix1[i]; //nod=nod*x1
    }
    cout << "b) Nod = " << nod << endl; //Вывод "b) nod = "
    return 0; //Завершения работы функции
}
