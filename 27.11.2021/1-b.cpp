#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{   
    int stroki = 0;
    int stolbetz = 0;
    int index = 1;
    int temp = 0;
    
    cout << "Введите номер строки = ";
    cin >> stroki;
    cout << "Введите номер столбца = ";
    cin >> stolbetz;

    int** a = new int* [stroki];
    for (int g = 0; g < stroki; g++) {
        a[g] = new int[stolbetz];
    }
    for (int g = 0; g < stroki; g++) {
        for (int x = 0; x < stolbetz; x++) {
            a[g][x] = index;
            index++;
        }
    }    
    for (int g = 0; g < stroki; g++)
    {
        for (int x = 0; x < stolbetz; x++)
            cout << a[g][x] << " ";
        cout<<endl;
    }
    for (int g = 0; g < stroki; g++)
        for (int x = 0; x < stolbetz/2; x++)
        {
            temp = a[g][x];
            a[g][x] = a[g][stolbetz - x - 1];
            a[g][stolbetz - x - 1] = temp;
        }
    cout<<endl;
    for (int g = 0; g < stroki; g++)
    {
        for (int x = 0; x < stolbetz; x++)
            cout << a[g][x] << "   ";
        cout<<endl;
    }
    for (int g = 0; g < stroki; g++)
    {
        delete[]a[g];
    }
    delete a;
}