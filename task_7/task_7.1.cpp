#include <iostream>
#include <cstdlib>
#include <time.h>

void checkIn(int &check);
void fill(int **arr, int rows, int columns);
void view(int **arr, int rows, int columns);
void replace(int **arr, int rows, int columns);
void replace_second(int **arr, int rows, int columns);

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
    fill(array, rows, columns);
    view(array, rows, columns);
    replace(array, rows, columns);
    std::cout << "" << std::endl;
    view(array, rows, columns);
    replace_second(array, rows, columns);
    std::cout << "" << std::endl;
    view(array, rows, columns);
    

    delete [] array;
    for (int i = 0; i < rows; i++)
    {
        delete[] array[i];
    }
    
}

void replace(int **arr, int rows, int columns){
    int temp;
    for (int i = 0; i < rows; i++){
        temp = arr[i][0];
        arr[i][0] = arr[i][columns-1];
        arr[i][columns-1] = temp;
    }
}

void replace_second(int **arr, int rows, int columns){
    int temp[rows];
    for (int i = 0; i < rows; i++){
        temp[i] = arr[i][0];
    }
    for (int i = 0; i < rows; i++){
        arr[i][0] = arr[i][columns-1];
        arr[i][columns-1] = temp[i];
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