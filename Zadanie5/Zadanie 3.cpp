#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    srand(time(NULL));

    int minimal = 1000;
    int rasmer;

    cout << "Enter rasmer = " << endl;
    cin >> rasmer;

    cout << endl;


    int* massiv = new int[rasmer];


    for (int r = 0; r < rasmer; r++)
    {
        massiv[r] = rand() % 100;

    }

    for (int r = 0; r < rasmer; r++)
    {
        cout << massiv[r] << "\t";


        cout << endl;
    }
    cout << endl;

    for (int r = 0; r < rasmer; r++)
    {
        if (massiv[r] < minimal)
        {
            minimal = massiv[r];
        }
    }
    cout << "Minimum element of array = " << minimal << endl;

    delete[] massiv;
}
