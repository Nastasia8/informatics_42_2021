#include <iostream>
#include <ctime>

using namespace std; // пространство имён

void zapolnennie(int* massiv, int rasmer) // void не возвращает значения
{
    for (int i = 0; i < rasmer; i++) // пока, то
    {
        massiv[i] = rand() % 100;
    }
}

void otobrashenie(int* massiv, int rasmer)
{
    for (int i = 0; i < rasmer; i++) // цикл
    {
        cout << massiv[i] << "\t";
    }
}

void minimalizm(int* massiv, int rasmer, int minimal) // void не возвращает значения
{
    for (int i = 0; i < rasmer; i++) // цикл
    {
        if (massiv[i] < minimal) // если, то
        {
            minimal = massiv[i];
        }
    }
    cout << "Min element of array = " << minimal << endl; // вывод
}

int main()
{
    srand(time(NULL)); // генерируемые числа всегда будут разными (случайными)

    int minimal = 1000;
    int rasmer;

    cout << "Enter rasmer = " << endl; // вывод
    cin >> rasmer;
    cout << endl;

    int* massiv = new int[rasmer]; // (*) при обработке типов аргументов для функций массивы преобразуются в указатели на содержащийся тип

    zapolnennie(massiv, rasmer);
    otobrashenie(massiv, rasmer);
    minimalizm(massiv, rasmer, minimal);

    delete[] massiv; // освободить память

}