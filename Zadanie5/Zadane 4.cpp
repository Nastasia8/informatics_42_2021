#include <iostream>
#include <ctime>

using namespace std;



void z(int* massiv, int rasmer)
{
    for (int r = 0; r < rasmer; r++)
    {
        massiv[r] = rand() % 100;

    }
}
void o(int* massiv, int rasmer)
{
    for (int r= 0; r< rasmer; r++)
    {


        cout << massiv[r] << "\t";
        
    }
}
void m(int* massiv, int rasmer, int minimal)
{
    for (int r = 0; r < rasmer; r++)
    {

        if (massiv[r] < minimal)
        {


            minimal = massiv[r];
        }
    }
    cout << "Minimum element of array = " << minimal << endl;

}


int main()
{
    srand(time(NULL));

    int minimal = 1000;

    int rasmer;

    cout << "Enter rasmer = " << endl;

    cin >> rasmer;

    cout << endl;

    int* massiv = new int[rasmer];

    z(massiv, rasmer);
    o(massiv, rasmer);
    m(massiv, rasmer, minimal);
    delete[] massiv;









}