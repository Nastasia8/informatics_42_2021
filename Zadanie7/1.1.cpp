#include <iostream>

using namespace std;

int main() {
    int rows,columns; 
    int m = 1; // инициализируем индекс
    cout << "Enter rows = ";
    cin >> rows; // количество строк
    cout << "Enter columns = ";
    cin >> columns; // количество стоблцов
    int ** matrica = new int*[rows]; // создание двумерного динамического массива
    for (int i = 0; i <rows; i++)
    {
        matrica[i] = new int[columns];
    }
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            matrica[i][j] = m; // заполнение матрицы
            m++; // увеличиваем индекс
        }

    }
    // выводим матрицу на экран
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cout << matrica[i][j] << "\t";
        }
        
        cout << endl;
    }
    cout << endl;
    // переворачиваем матрицу и выводим на экран
    for (int i = 0; i < rows; i++)
    {
        for (int j = columns-1; j >= 0; j--)
        {
            cout << matrica[i][j] << "\t";
        }
        
        cout << endl;
    }   
    // очищаем ресурсы (память)
    for (int i = 0; i < rows; i++)
    {
        delete[] matrica[i];
    }
    delete matrica;
    // Разбирал задание с Александром Бутусовым, вроде понял)
}