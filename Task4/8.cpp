#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){

    char random = 0;

    int r = 0;

    int c = 0;

    int rows = 0;

    int columns = 0;

    int totalmin = 1000000;

    int rowsmax = 0;

    int columnsmin = 1000000;

    int totalmax = 0;

    cout << "Enter the number of rows in the array: ";
    cin >> rows;

    cout << "Enter the number of columns in the array: ";
    cin >> columns;

    int array[rows][columns];

    srand(time(NULL));
    
    cout << "Array: " << endl;

    for(r = 0; r < rows; r++ ){
        for(c =0; c < columns; c++){

            array[r][c] = rand()%999999;

            cout << array[r][c] << endl;

        }
    }

    for(r = 0; r < rows; r++ ){
            for(c =0; c < columns; c++){
            
            if (array[r][c] > totalmax){

                totalmax = array[r][c];

            }

            if (array[r][c] < totalmin){

                totalmin = array[r][c];

            }
        }
    }

    cout << "Minimum element of an array: " << totalmin << endl;

    for(r = 0; r< rows; r++){

        for(c = 0; c < columns; c++){

            if(array[r][c] > rowsmax){

                rowsmax = array[r][c];

            }
        }
    
        cout << "Maximum line element " << (r + 1) << ": " << rowsmax << endl;

        rowsmax = 0;

    }   
    
    for(c = 0; c < columns; c++){
        for(r = 0; r < rows; r++){

            if(array[r][c] < columnsmin){

                columnsmin = array[r][c];

            }
        }
    
        cout << "Minimum column element " << (c + 1) << ": " << columnsmin << endl;

        columnsmin = 1000000;
    }    

    return 0;
}
