﻿// инф.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cmath>

int main(int args, char* argv[])
{
    using namespace std;

    const float a = 0.4;
    const float b = 0.8;

    float x = 3.2;
    float xk = 6.2;
    float dx = 0.6;

    for (; x < xk; x += dx) {
        cout << ((pow(a, x) - pow(b, x)) / log10(a / b)) * pow(a * b, 1/3) << endl;
    };

    float xs[5] = { 4.48, 3.56, 2.78, 5.28, 3.21 };

    for (auto x : xs) {
        cout << ((pow(a, x) - pow(b, x)) / log10(a / b)) * pow(a * b, 1/3) << endl;
    };

    return 0;
};

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
