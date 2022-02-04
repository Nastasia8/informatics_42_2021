#include <iostream>
#include <cmath>

using namespace std; // пространство имён

void calc(int n) // void не возвращает значения
{
    int proizvedenie = 1; // тип int
    while (n > 0) // цикл
    {
        proizvedenie *= n % 10;
        n /= 10;
    }
    cout << proizvedenie; // вывод
}

int main()
{
    long n; // тип long целое число, занимает 4 байта
    cin >> n;
    while (n < 100000 || n>999999) // цикл
    {
        cout << "Chislo ne sootvetst trebovaniu" << endl; // вывод
        cin >> n; // ввод
    }
    calc(n);
} 
