#include <iostream>
#include <ctime>
using namespace std;

void one(int* massive,int size) //заполнение массива
{   
    for (int g=0; g<size; g++)
    {
        massive[g] = rand() % 100;
    }
}
void two(int* massive, int size) // показ
{
    for (int g=0; g<size; g++)
    {
        cout << massive[g] << "\t";      
    }
}
void minimal(int* massive, int size, int min) // присваивание  
{
    for (int g=0; g<size;g++)
    {
            if (massive[g] < min)
            {
                min = massive[g];
            }
    }
    cout << "Минимальный элемент массива = " << min << endl;
}
int main() 
{
    srand(time(NULL));

    int min = 777;

    int size;

    cout << "Введи размер) = " << endl;
    cin >> size;
    cout << endl;

    int *massive = new int [size];

    one(massive, size);
    two(massive, size);
    minimal(massive, size, min);

    delete[] massive;   
}