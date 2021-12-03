#include <iostream>
using namespace std;

int main() {
    int stroka,stolbetz;
     int index = 1;
 cout <<"Введите номер строки = ";
 cin >> stroka;
 cout <<"Введите номер столбца = ";
 cin >> stolbetz;
    int ** matrix = new int*[stroka];
    for (int g = 0; g <stroka; g++)
    {
 matrix[g] = new int[stolbetz];
    }
    for (int g = 0; g < stroka; g++)
    {
        for (int x = 0; x < stolbetz; x++)
        {
 matrix[g][x] = index;
            index++;
        }
    } 
    for (int g = 0; g < stroka; g++)
    {
        for (int x = 0; x < stolbetz; x++)
        {
            cout << matrix[g][x] << "\t";
        }
        cout<<endl;
    }
    cout<<endl;
    for (int g = 0; g < stroka; g++)
    {
        for (int x = stolbetz-1; x >= 0; x--)
        {
            cout << matrix[g][x] << "\t";
        }
        cout<<endl;
    }   
    for (int g = 0; g < stroka; g++)
    {
        delete[] matrix[g];
    }
}