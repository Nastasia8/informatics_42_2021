#include <iostream>
#include <ctime>

using namespace std;



void zapolnennie(int* massiv,int rasmer)
{   
    for (int i = 0; i < rasmer; i++)
    {
        massiv[i] = rand() % 100;

    }
}
void otobrashenie(int* massiv,int rasmer)
{
    for (int i = 0; i < rasmer; i++)
    {
        cout << massiv[i] << "\t";      
    }
}
void minimalizm(int* massiv, int rasmer, int minimal)
{
    for (int i = 0; i < rasmer; i++)
    {
            if (massiv[i] < minimal)
            {
                minimal = massiv[i];
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

    int *massiv = new int [rasmer];

    zapolnennie(massiv, rasmer);
    otobrashenie(massiv, rasmer);
    minimalizm(massiv, rasmer, minimal);
  
    
    
    delete[] massiv;
    
   
    
}