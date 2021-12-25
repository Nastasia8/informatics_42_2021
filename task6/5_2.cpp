#include "iostream"
#include "windows.h"
using std:: cout;
using std:: endl;
using std:: cin;
 
int NOD(int n, int m);
 
int main()
{
SetConsoleCP(CP_UTF8);
SetConsoleOutputCP(CP_UTF8);

    int n;
    int* arr;
    int nod;
    cout << "Введите количество чисел" << endl;
    cin >> n;
    arr = new int[n] ;
    for (int i = 0; i < n; i++)
    {
        cout << "Введите "<< i + 1 << " число" <<endl;
        cin >> arr[i];
    }
    if (n >= 2) {
        nod = NOD(arr[0],arr[1]);
    }
    else
    {
        nod = arr[0];
    }
    for (int i = 2 ; i < n ; i++)
    {
         nod = NOD(nod,arr[i]);
    }
    cout << "НОД = "<< nod  <<endl;
    return 0;
}

int NOD(int n, int m)
{
    if(m == 0)
    {
        return n;
    }
        
    if(n > m)
    {
        return NOD(m, n - m);
    }

    else
    {
        return NOD(n, m - n);
    }
}