#include <iostream>
#include <ctime>

using namespace std;

int main(){

    int size = 0;

    int min = 1000000;

    cout << "Enter the size of the array: ";
    cin >> size;
    
    int *array = new int [size];

    int i = 0;

    srand(time(NULL));

    cout << "Array: " << endl;

    for(i = 0; i < size; i++){

        array[i] = rand();

        cout << array[i] << endl;

        if(array[i] < min){

            min = array[i];

        }

    }

    cout << "Minimum number of the array: " << min << endl;

    delete[] array;

    return 0;
}