#include "function.h"
#include <cmath>
#include <iostream>

using namespace std;

// Функуия для задачи А
// Принимает константные значения value_A, value_B и итеративное значение value_X из цикла
// Возвращает высчитанное значенеи функции 'Y' 
float function_Y(float value_X, float value_A, float value_B)
{
    float value_Y = 0;
    if (value_X > 5)
    {
        value_Y = (pow(log10((pow(value_A, 2) + value_X)), 2)) / (pow((value_A + value_X), 2));
    }
    else if (value_X <= 5)
    {
        value_Y = (pow(value_A + (value_B * value_X), 2.5)) / (1.8 + (pow(cos(value_A * value_X), 3)));
    }
    cout << " Value Y:= " << value_Y << " for X:= " << value_X << endl;
    return value_Y;
}

// Функуия для задачи B
// Принимает константные значения value_A, value_B, массив значений 'X' - mas_value_X и кол-во эл-ов массива
// Возвращает высчитанное значенеи функции 'Y' 
float function_Y(float value_A, float value_B, float mas_value_X[], int size)
{
    float value_Y = 0;
    for (int i = 0; i < size; i++)
    {
        if (mas_value_X[i] > 5)
        {
            value_Y = (pow(log10((pow(value_A, 2) + mas_value_X[i])), 2)) / (pow((value_A + mas_value_X[i]), 2));
        }
        else if (mas_value_X[i] <= 5)
        {
            value_Y = (pow(value_A + (value_B * mas_value_X[i]), 2.5)) / (1.8 + (pow(cos(value_A * mas_value_X[i]), 3)));
        }   
        cout << " Value Y:= " << value_Y << " for X:= " << mas_value_X[i] << endl;
    }

    return value_Y;
}