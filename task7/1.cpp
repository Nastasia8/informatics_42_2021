#include <iostream>
#include <windows.h>
#include <time.h>
using std:: cout;
using std:: endl;
using std:: cin;

int main (){
SetConsoleCP(CP_UTF8);
SetConsoleOutputCP(CP_UTF8);

    int rows, cols;

// Создание двумерного массива
    srand(time(NULL));
    cout << "Введите число строк и стобцов " << endl;

    cout << "Строк = ";
        cin >> rows;

    cout<<"Столбцов = ";
        cin >> cols;

    cout << endl;

    int mas[rows][cols];

// Инициализация и вывод массива
    cout << "Исходный массив" << endl;
        for (int i = 0; i < rows; i++)
            {

        for (int j = 0; j < cols; j++) 
            {
                mas[i][j] = rand() % 100;
            }

        }
        
        for (int i = 0; i < rows; i++)
            {
                for (int j = 0; j < cols; j++)
                {
                    cout << mas[i][j] << "\t";
                }
            cout<< endl;
            }
    cout << endl;

// Инициализация и вывод обратного массива

// a
    cout << "После изменений" << endl << "Под буквой a" << endl << endl;

    for (int i = 0; i < rows; i++)
            {
                for (int j = cols - 1; j >= 0; j--)
                {
                    cout << mas[i][j] << "\t";
                }
            cout << endl;
            }
    cout << endl;

// Инициализация и вывод обратного массива

// b
cout << "После изменений" << endl << "Под буквой b" << endl << endl;
        
        for (int i = 0; i < rows; i++)
            {
                for (int j = 0; j < cols; j++)
                {
                    cout << mas[i][cols - j - 1 ]<< "\t";
                }
            cout<< endl;
            }
    cout << endl;
return 0;
} 