#include "function.h"
#include <iostream>
#include <math.h>
using namespace std;

//Функция для задачи A
//Функция принимает значение a и значение x из цикла и возвращает значение функции y
float function_1 (float a, float x) {
    float y = 0;
    y = pow(log10(a+x), 2)/ pow((a+x),2);
return y;
}

//Функция для задачи B
//Функция принимает значение a, значение mas_x и количество элементов массива
float function_1 (float a, float mas_x[], int size){
    float y = 0;
    for(int i=0; i < size; i++){
       y = pow(log10(a+mas_x[i]), 2)/ pow((a+mas_x[i]),2);  
       cout << y << endl;
    }
return y;
}