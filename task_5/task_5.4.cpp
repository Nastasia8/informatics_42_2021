#include <iostream>

void checkIn(int &check);
void fill(int *arr, int size);
void view(int *arr, int size);
void find(int *arr, int size, int &min);

int main(int argc, char const *argv[]){
    std::cout << "Enter a length of array:" << std::endl;
    std::cout << "Length: ";
    int size;
    checkIn(size);
    int *array = new int[size];
    fill(array, size);
    view(array, size);
    std::cout << "" << std::endl;
    int min;
    find(array, size, min);
    std::cout << "Min value in array: " << min << std::endl;
    delete [] array;
}
void view(int *arr, int size){
    for (int j = 0; j < size; j++){
            std::cout << arr[j] << "\t";
        }
}
void find(int *arr, int size, int &min){
    min = arr[0];
    for (int j = 1; j < size; j++){
            if (min > arr[j]){
                min = arr[j];
            }   
        }
}

void fill(int *arr, int size){
    std::srand(static_cast<unsigned int>(time(nullptr)));
        for (int j = 0; j < size; j++){
            arr[j] = std::rand() % 100;
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