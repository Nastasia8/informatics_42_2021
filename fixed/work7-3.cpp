#include <iostream>
#include <cmath>

using namespace std;


int main()
{
    int number;

    cin >> number;

    while (number > 1) 
    {
        if (number % 2 == 0) //проверяем на четность
        {
            number /= 2; 
        }
        else
        {
            number *= 3; //умножаем на 3
            number += 1; //увеличиваем на 1
            number /= 2; // делим на 2
        }
        cout << number << endl;
    } //добавила
}