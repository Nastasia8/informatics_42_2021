#include <iostream>
#include <ctime>

using namespace std;

int main ()
{
    int i;
    int j;
    int h;
    int g;

    cin >> h; // строки
    cin >> g; // столбцы
    float a[h][g]; // многомерный массив (двухмерный)
    float max;
    float min;

    srand(time(NULL)); // выводит рандом числа

    for(i=0; i<h; i++)
    {
        for(j=0; j<g; j++)
        {
            a[i][j] = -50 + rand() % 100;
            cout << a[i][j]<< '\t';
        }
        cout << endl;
    }
    cout << endl;
    i = 0;
    while (i < h) 
    {
        j=0;
        max = a[i][j];
        while (j < g)
        {
            if(a[i][j] > max)
            {
                max = a[i][j];
            }
            j++;
        }
        cout << max << ' ';
        i++;
    }
    cout << endl;

    j=0;

    while (j < g) 
    {
        i=0;
        min = a[i][j];
        while (i < h)
        {
            if(a[i][j] < min)
            {
                min = a[i][j];
            }
            i++;
        }
        cout << min << ' ';
        j++;
    }
    return 0;
}
