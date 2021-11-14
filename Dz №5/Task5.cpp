#include <iostream>
#include <ctime>

using namespace std;

int main ()
{
    int i=0;
    int j=0;
    int c;
    int v;
    cin >> c;
    cin >> v;
    int **a = new int [c][v];

    srand( time(0) );
    for (int i=0; i<c; i++)
    {
        for (int j=0; j<v; j++)
        {
            a[i][j]= -1000 + rand() % 1000;
            cout << a[i][j] << endl;
        }
    }

return 0;
}