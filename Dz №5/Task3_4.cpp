#include <iostream>
#include <ctime>

using namespace std;

void conclusion(int i, int* a)
{
    cout << a[i] << " ";
}

void mennumber(int* a, int c)
{
    int m = a[0];

    for (int i=0; i<c; i++)
    {
        if (a[i] < m)
        {
            m = a[i];
        }
    }
    cout << m <<endl;
}

void completion(int i, int* a, int c)
{
    srand( time(0) );
    for (int i=0; i<c; i++)
    {
    a[i] = -1000 + rand() % 1000;
    conclusion(i,a);
    }

}

int main()
{
    int i=0;
    int c;
    cin >> c;
    int *a = new int[c];
    completion(i,a,c);
    mennumber(a,c);
delete [] a;
return 0;
}