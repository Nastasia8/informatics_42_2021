#include <iostream>
#include <ctime>

using namespace std;

void viewArray(int* array, int size);

void fillArray(int size, int* array);

void minArray(int* array, int size);

int main(){

    int size = 0;

    int min = 1000000;

    cout << "Enter the size of the array: ";
    cin >> size;
    
    int *array = new int [size];

    fillArray(size, array);

    return 0;
}




void fillArray(int size, int* array){

    int i = 0;

    srand(time(NULL));

    for(i = 0; i < size; i++){

        array[i] = rand();

    }

    viewArray(array, size);

}




void viewArray(int* array, int size){

    int i = 0;

    cout << "Array: " << endl;
    
    for (i = 0; i < size; i++){

        cout << array[i] << endl;

    }

    minArray(array, size);

}




void minArray(int* array, int size){

    int i = 0;

    int min = 1000000;

    for (i = 0; i < size; i++){

        if(array[i] < min){

            min = array[i];

        }

    }

    cout << "Minimal value of the array: " << min << endl;

    delete[] array;

}


