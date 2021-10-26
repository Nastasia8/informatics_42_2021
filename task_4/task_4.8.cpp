#include <iostream>
#include <cstdlib>
#include <time.h>

void checkIn(int &check);
void fill(int *arr, int rows, int columns);
void getInfo(int *arr, int rows, int columns, int &min, int *max_row, int *min_column);

int main(int argc, char const *argv[]){
    std::cout << "Enter count of rows and columns for the array:" << std::endl;
    std::cout << "Number of rows: ";
    int rows;
    checkIn(rows);
    std::cout << "Number of columns: ";
    int columns;
    checkIn(columns);

    int array[rows][columns];
    int min = 100;
    int max_row[rows];
    int min_column[columns];

    fill(&array[0][0], rows, columns);
    getInfo(&array[0][0], rows, columns, min, &max_row[0], &min_column[0]);

    std::cout << "In generated array min is: " << min << std::endl;
    std::cout << "Max in each rows:" << std::endl;
    for(int min_c : max_row){
        std::cout << min_c << "\t";
    }
    std::cout << "" << std::endl;
    std::cout << "Min in each columns:" << min << std::endl;
    for(int min_c : min_column){
        std::cout << min_c << "\t";
    }
}

void getInfo(int *arr, int rows, int columns, int &min, int *max_row, int *min_column){
    for (int i = 0; i < rows; i++){
        max_row[rows*0 + i] = arr[rows*i + 0];
        for (int j = 0; j < columns; j++){
            if ( arr[rows*i + j] < min){
                min =  arr[rows*i + j];
            }
            if ( arr[rows*i + j] > max_row[rows*0+j]){
                max_row[rows*0+j] =  arr[rows*i + j];
            }
            if (i == 0){
                min_column[columns*0+j] = arr[rows*i + j];
            }else{
                if (min_column[columns*0+j] > arr[rows*i + j]){
                    min_column[columns*0+j] = arr[rows*i + j];
                }
            }
        }
        
    }
}

void fill(int *arr, int rows, int columns){
    std::srand(static_cast<unsigned int>(time(nullptr)));
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < columns; j++){
            arr[rows*i + j] = std::rand() % 100;
            std::cout << arr[rows*i + j]  << "\t";
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