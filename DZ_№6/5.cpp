#include <iostream>
#include <cmath>
using namespace std;

void NOD(int a, int b, int c) // определение функции наибольшего общего делителя
{
    while(a > 0 && b > 0)

        if(a > b)
            a %= b;

        else
            b %= a;

    c=a+b;
    cout << "c = " << c <<endl;
}

void NOD1(int c, int* array, int i, int k, int a, int b, int n)
{
    a = array[0];
    b = array[1];
    for (int i = 0; i <n; i++)
    NOD(a, b, c);
    if(array[i] > 0)
    {
        k = array[i] % c;
        cout << k <<endl;
    }
}

int main()
{
    int k =0;
    int i;
    int a;
    int b;
    int n;

    cin >>n;

    int *array = new int[i];
    for ( i = 0; i < n; i++)
    {
        cin >>array[i];
    }
    int c;

    NOD1(c,array,i,k,a,b,n);

    delete [] array;
    system("pause");
    return 0;
}