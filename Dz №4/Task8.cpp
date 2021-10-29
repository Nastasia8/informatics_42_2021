#include <iostream>
#include <ctime>

using namespace std;

int main ()
{
    int i;
    int j;
    int k = 0;
    int h;
    int g;

    float a[i][j];
    float b[k];

    cin >> h;
    cin >> g;

    srand(time(NULL));

    for(i=0; i<h; i++)
    {
        for(j=0; j<g; j++)
        {
            a[i][j] = rand();
            cout << a[i][j]<< ' ';
        }
        cout << endl;
    }

    for(i=0; i<h; i++)
    {
        for(j=0; j<g; j++)
        {
            if(a[i][j] < a[i][j+1])
            {
                b[k] = a[i][j];
                k++;
                cout << b[k] << ' ';
            }
        }
    }

return 0;
}