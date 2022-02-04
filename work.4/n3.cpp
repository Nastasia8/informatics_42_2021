#include <iostream>
#include <cmath>
#include <windows.h>

using namespace std; // пространство имён

// <summary>
// вычисляет сумму ряда
// </summary>
// <param name="k">стоппер</param>

void calculateSumOfSeries(int k) // void не возвращает значения
{
    float s = 0;
    for (float n = 1; n <= k; n++) // цикл
    {
        s += 2 / ((2 * n + 1) * (2 * n + 3));
    }
    cout « "summa = "« s« endl; // вывод
}

int main()
{
    int k; // инициализ. как тип int
    cout << " enter k"<< endl; // вывод
    cin >> k; // ввод
    calculateSumOfSeries(k);
    return 0;
}