#include <iostream>
#include <ctime>

using namespace std;

void min (int **array, int rows, int columns);

int main(){

    int rows = 0;

    int columns = 0;

    cout << "Enter the number of rows of the array: ";
    cin >> rows;

    cout << "Enter the number of columns of the array: ";
    cin >> columns;

    int **array = new int* [rows];

    int i = 0;

    for (i = 0; i < rows; i++){

        array[i] = new int [columns];

    }

    srand(time(NULL));

    int j = 0;

    for (i = 0; i < rows; i++){

        for (j = 0; j < columns; j++){

            array[i][j] = rand();

        }

    }

    for (i = 0; i < rows; i++){

        for (j = 0; j < columns; j++){

            cout << array[i][j] << "\t";

        }

        cout << endl;

    }

    min(array, rows, columns);
    
    for (i = 0; i < rows; i++){

        delete[] array[i];

    }

    delete[] array;

    return 0;
}




void min (int **array, int rows, int columns){

    int i = 0;

    int j = 0;

    int r = 0;

    int minArray[rows];

    int value = 0;

    int min = 1000000;

    for (i = 0; i < rows; i++){

        for (j = 0; j < columns; j++){

            if(array[i][j] < min){

                min = array[i][j];

            }

        }

        minArray[r] = min;

        r += 1;

        min = 1000000;

    }


    cout << "Minimal value of rows of the array:" << endl;
    
    for (r = 0; r < rows; r++){

        cout << minArray[r] << endl;

    }

}