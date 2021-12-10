#include <iostream>
#include <windows.h>
#include <time.h>
using std::cin;
using std::cout;
using std::endl;

int main(){
SetConsoleCP(CP_UTF8);
SetConsoleOutputCP(CP_UTF8);
    srand(time(NULL));
    int size = 0;
    int minimal = 100;
    cout << "Введите размер массива" << endl;
    cin>>size;
    cout << "============" << endl;

    int *arr = new int[size];

        for (int i = 0; i < size; i++)
        {
            arr[i] = rand() % 100;
        }

            for  (int i = 0; i < size; i++)
            {
                cout << arr[i] << endl;
            }

    cout << "============" << endl;
    cout << "Минимальный элемент массива" << endl;
    
        for (int i = 0; i < size; i++)
        {
            if (arr[i] < minimal)
            {
                minimal = arr[i];    
            }
        }
    cout << minimal << endl;

    delete [] arr;

    return 0;
}