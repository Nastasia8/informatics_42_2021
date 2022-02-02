#include <iostream>
#include <cmath>

int main(int argс, char* argv[]) // аргументы командной строки argc и argv[]; argc имеет тип int, указывает количество переданных аргументов; argv[] представляет собой массив указателей на строки
{
    using namespace std; // пространство имён

    const float a = 0.4; // константы с плав.точкой
    const float b = 0.8;

    float x = 3.2; 
    float xk = 6.2;
    float dx = 0.6;

    for (; x < xk; x += dx) // цикл; for (объявление переменных; условие; инкремент/декремент счетчика)
    {
        cout << ((pow(a, x) - pow(b, x)) / log10(a / b)) * pow(a * b, 1 / 3) << endl; // вывод
    };

    float xs[5] = { 4.48, 3.56, 2.78, 5.28, 3.21 }; // массив

    for (auto x : xs) // для каждого x типа auto в xs делать следующее; auto автоматически определяет тип данных 
    {
        cout << ((pow(a, x) - pow(b, x)) / log10(a / b)) * pow(a * b, 1 / 3) << endl;
    };

    return 0;
}
