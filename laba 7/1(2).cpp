#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int l = 1; // вспомогательная переменная
    int temp = 0; //
    int row, column;

    cout << "Write row= ";
    cin >> row;

    cout << "White column= ";
    cin >> column;
    
    int** a = new int* [row]; // объявление двумерного массива
    for (int i = 0; i < row; i++) //
    { //
        a[i] = new int[column]; //
    } //

    
    for (int i = 0; i < row; i++) // заполнение двумерного массива
    { //
        for (int j = 0; j < column; j++) //
        { //
            a[i][j] = l; //
            l++; //
        } //
    } //

    for (int i = 0; i < row; i++) // вывод двухмерного массива
    { //
        for (int j = 0; j < column; j++) // 
            cout << a[i][j] << "\t"; // 
        cout << endl; //
    } //

    for (int i = 0; i < row; i++) // первый способ преобразования
        for (int j = 0; j < column / 2; j++) //
        { //
            temp = a[i][j]; //
            // не меняется место в строчке, но меняется место в столбце
            a[i][j] = a[i][column - j - 1]; // 
            a[i][column - j - 1] = temp; //
        } //
    cout << endl; //
     
    for (int i = 0; i < row; i++) // вывод МОДИФИЦИРОВАННОГО массива
    { //
        for (int j = 0; j < column; j++) //
            cout << a[i][j] << "\t"; //
        cout << endl; //
    } //

    for (int i = 0; i < row; i++)и// очищение памяти внут. массива во внешнем
    { //
        delete[]a[i]; //
    } //
    delete a; //
} //