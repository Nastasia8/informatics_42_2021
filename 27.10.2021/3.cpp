#include <iostream>
#include <ctime>

using namespace std;

int main() 
{
    srand(time(NULL));

    int minimal = 1000;
    int rasmer;

    cout << "Enter rasmer = " << endl;
    cin >> rasmer;
    
    cout << endl;

    // Создание  массива

    int *massiv = new int [rasmer];
    
    
    // Инициализация и вывод массива
    
    for (int i = 0; i < rasmer; i++)
    {
            massiv[i] = rand() % 100;

    }

    for (int i = 0; i < rasmer; i++)
    {
            cout << massiv[i] << "\t";
        
        
        cout << endl;
    }
    cout << endl;

    // Нахождение минимального числа в массиве
    
    for (int i = 0; i < rasmer; i++)
    {
            if (massiv[i] < minimal)
            {
                minimal = massiv[i];
            }
    }
    cout << "Minimum element of array = " << minimal << endl;
  
    
    
    delete[] massiv;
    

   
    
}