#include <iostream>

using namespace std;

// создаем функцию для нахождения простых чисел использя алгоритм Решето Эратосфена
void function (int n) {
    int *a = new int[n + 1]; //создаем одномерный динамический массив
    for (int i = 0; i <= n; i++) {
        a[i] = i; // заполняем динамический массив
    }

    // алгоритм Решето Эратосфена
    for (int i = 2; i * i <= n; i++)
    {
        if (a[i]) {
            for (int j = i*i; j <= n; j += i) {
                a[j] = 0;
            }       
        }
    }
    // Вывод на экран
    for (int i = 2; i < n; i++) {
        if (a[i]) {
            cout << a[i] << ' '; 
        } 
    } 
    cout << endl << endl;
    delete[] a; // Освобождаем ресурсы 
}
 
int main()
{
    int n;
    cin >> n;
    function(n); // используем функцию
 
 return 0;
}

// Разбирал задание с Александром Бутусовым, вроде понял)