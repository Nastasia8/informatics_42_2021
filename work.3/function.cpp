
#include <iostream>
#include <cmath>

using namespace std; // пространство имён

void function(const float a, const float b, float y, float x, float xk, float dx) // void не возвращает значения
{
    for (; x < xk; x += dx) // for (объявление переменных; условие; инкремент/декремент счетчика)
    {
        y = ((pow(a, x) - pow(b, x)) / log10(a / b)) * pow(a * b, 1 / 3);
        cout << "y = " << y << endl;
    }
}
void function(const float a, const float b, float xs[5], int size, float y) 
{
    for (auto x : xs) // для каждого x типа auto в xs делать следующее
    {
        y = ((pow(a, x) - pow(b, x)) / log10(a / b)) * pow(a * b, 1 / 3);
        cout << "y = " << y << endl;
    }

}

