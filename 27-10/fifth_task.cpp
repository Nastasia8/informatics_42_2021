#include <iostream>

void FindMin(int** array, int rows, int columns, int* MinValueArray)
{
    int min = 1000; 
    for (int i = 0; i < rows; i++)
    {
        min = 1000;
        for (int j = 0; j < columns; j++)
        {
            if (array[i][j] < min)
            {
                min = array[i][j];
            }
        }
        MinValueArray[i] = min;
    }

    std::cout << "Minimum elements = [ ";

    for (int i = 0; i < rows; i++)
    {
        if (i + 1 < rows) { 
            std::cout << MinValueArray[i] << ", "; 
            } else {
                std::cout << MinValueArray[i] << " ";
            };
    }
    std::cout << "]\n";


}

int main() 
{
    srand(time(NULL));

    int rows;
    int columns;

    std::cout << "Enter rows = ";
    std::cin >> rows;
    std::cout << "Enter columns = ";
    std::cin >> columns;
    std::cout << '\n';   

    int** array = new int* [rows];
    for (int i = 0; i < rows; i++)
    {
        array[i] = new int[columns];
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            array[i][j] = rand() % 100;
        }

    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            std::cout << array[i][j] << "\t";
        }
        
        std::cout << '\n';
    }
    std::cout << '\n';
    


    int *MinValueArray = new int[rows];

    FindMin(array, rows, columns, MinValueArray);
    
    delete[] MinValueArray;
    
    for (int i = 0; i < rows; i++)
    {
        delete[] array[i];
    }

    delete[] array;
} 