#include <iostream>
#include <ctime>

using namespace std;

int main ()
{
    int i;
    int j;
    int h;
    int g;

    cin >> h;
    cin >> g;
    float a[h][g];
    float max;

    srand(time(NULL));

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
    while(i < h) 
    {
        j=0;
        max = a[i][j];
        while(j < g)
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
    return 0;
}
