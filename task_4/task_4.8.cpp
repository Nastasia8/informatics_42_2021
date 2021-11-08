#include <iostream>
#include <cstdlib>
#include <time.h>

void checkIn(int &check);
void fill(int **arr, int rows, int columns);
void getInfo(int **arr, int rows, int columns, int &min, int *max_row, int *min_column);

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
    int min = 100;
    int *max_row = new int [rows];
    int *min_column = new int[columns];

    fill(array, rows, columns);
    std::cout << "" << std::endl;
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < columns; j++){
            std::cout << array[i][j]  << "\t";
        }
        std::cout << "" << std::endl;
    }
    getInfo(array, rows, columns, min, max_row, min_column);

    std::cout << "In generated array min is: " << min << std::endl;
    std::cout << "Max in each rows:" << std::endl;
    for(int i=0 ; i < rows ; i++){
        std::cout << max_row[i] << "\t";
    }
    std::cout << "" << std::endl;
    std::cout << "Min in each columns:" << min << std::endl;
    for(int i=0 ; i < columns ; i++){
        std::cout << min_column[i] << "\t";
    }
}

void getInfo(int **arr, int rows, int columns, int &min, int *max_row, int *min_column){
    for (int i = 0; i < rows; i++){
        max_row[i] = arr[i][0];
        for (int j = 0; j < columns; j++){
            if ( arr[i][j] < min){
                min =  arr[i][j];
            }
            if ( arr[i][j] > max_row[i]){
                max_row[i] =  arr[i][j];
            }
            if (i == 0){
                min_column[j] = arr[i][j];
            }else{
                if (min_column[j] > arr[i][j]){
                    min_column[j] = arr[i][j];
                }
            }
        }
        
    }
}

void fill(int **arr, int rows, int columns){
    std::srand(static_cast<unsigned int>(time(nullptr)));
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < columns; j++){
            arr[i][j] = std::rand() % 100;
            std::cout << arr[i]  << "\t";
        }
        std::cout << "" << std::endl;
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