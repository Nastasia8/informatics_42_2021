#include <iostream>
#include <cstdlib>
#include <time.h>

void checkIn(int &check);
void fill(int **arr, int rows, int columns);
void view(int **arr, int rows, int columns);
void find(int **arr, int rows, int columns, int *min_row);

int main(int argc, char const *argv[]){
    std::cout << "Enter count of rows and columns for the array:" << std::endl;
    std::cout << "Number of rows: ";
    int rows;
    checkIn(rows);
    std::cout << "Number of columns: ";
    int columns;
    checkIn(columns);

    int **array = new int* [rows];
    for (int i = 0; i < rows; i++){
    array[i] = new int [columns];
    }
    int *min_row = new int[rows];
    fill(array, rows, columns);
    view(array, rows, columns);
    find(array, rows, columns, min_row);
    std::cout << "Min in each row:" << std::endl;
    for(int i=0 ; i < rows ; i++){
        std::cout << min_row[i] << "\t";
    }
    

    delete [] array;
    for (int i = 0; i < rows; i++)
    {
        delete[] array[i];
    }
    delete [] min_row;
    
}
void find(int **arr, int rows, int columns, int *min_row){
    for (int j = 0; j < rows; j++){
        min_row[j] = arr[j][0];
            for (int i = 0; i < columns; i++){
                if (min_row[j] > arr[j][i]){
                    min_row[j] = arr[j][i];
                }
                
            }
        }
}

void view(int **arr, int rows, int columns){
    for (int j = 0; j < rows; j++){
            for (int i = 0; i < columns; i++){
                std::cout << arr[j][i]  << "\t";
            }
            std::cout << "" << std::endl;
        }
}

void fill(int **arr, int rows, int columns){
    std::srand(static_cast<unsigned int>(time(nullptr)));
        for (int j = 0; j < rows; j++){
            for (int i = 0; i < columns; i++){
                arr[j][i] = std::rand() % 100;
            }
            
        }
}

void checkIn(int &check){
    std::string buffer;
    while (true){
    std::cin >> buffer;
       try
       {
            check = std::stoi(buffer);
            break;
       }
       catch(const std::exception& e)
       {
           std::cout << "Incorrect type of data, try again" << std::endl;
       }
       
    }
}