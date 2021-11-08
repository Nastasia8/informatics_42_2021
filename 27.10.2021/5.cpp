#include <iostream>
#include <ctime>

using namespace std;

void FindMin(int ** massivMegaGiga, int rows, int columns, int* MaxvalueArray)
{
    int min = 1000; 
    
    for (int i = 0; i < rows; i++)
    {
        min = 1000;

        for (int j = 0; j < columns; j++)
        {
            if (massivMegaGiga[i][j] < min)
            {
                min = massivMegaGiga[i][j];
            }
           
        }
        MaxvalueArray[i] = min;
    }

    cout << "Minimum element in each line = { ";

    for (int i = 0; i < rows; i++)
    {
        cout << MaxvalueArray[i] << " ";
    }

    cout << "}" << endl;


}

int main() 
{
    srand(time(NULL));

    int rows;
    int columns;

    cout << "Enter rows = " << endl;
    cin >> rows;
    cout << "Enter columns = " << endl;
    cin >> columns;
    cout << endl;

    

    int** massivMegaGiga = new int* [rows];
    for (int i = 0; i <rows; i++)
    {
        massivMegaGiga[i] = new int[columns];
    }

    
    
    
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            massivMegaGiga[i][j] = rand() % 100;
        }

    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cout << massivMegaGiga[i][j] << "\t";
        }
        
        cout << endl;
    }
    cout << endl;
    


    int *MaxvalueArray = new int[rows];

    FindMin(massivMegaGiga, rows, columns, MaxvalueArray);
    
    delete[] MaxvalueArray;
    
    for (int i = 0; i < rows; i++)
    {
        delete[] massivMegaGiga[i];
    }

}