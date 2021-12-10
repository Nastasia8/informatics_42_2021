#include <iostream>
#include <windows.h>
using std:: cout;
using std:: endl;
using std:: cin;

void PascalsTriangle(int);

int main(){
SetConsoleCP(CP_UTF8);
SetConsoleOutputCP(CP_UTF8);

int n;
cout << "Введите число строк для треугольника Паскаля: ";
cin >> n;
PascalsTriangle(n);
return 0;
}

void PascalsTriangle (int n){
int i, j, x;
for (i=0; i<n; i++)
    {
    x=1;
        for (j=0; j<=i; j++)
        {
            cout << x << "\t";
            x = x * (i - j) / (j + 1);
        }
    cout << endl;
    }
}