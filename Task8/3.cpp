#include <iostream>
#include <ctime>
#include <vector>


using namespace std;

class Massive{

    private:
    int rows, columns;
    int **array = new int* [rows];
    int *summ = new int [rows];
    int *max = new int[columns];
    float *aver = new float[columns];

  /*void Array(int rows, int columns){
        int r = 0;
        for (r = 0; r < rows; r++){
            array[r] = new int [columns];
        }
        srand(time(NULL));
        int c = 0;
        for (r = 0; r < rows; r++){
            for (c = 0; c < columns; c++){
                array[r][c] = rand()%200 - 100;
            }
        }
    }*/
    public:

    void Show(){
        int r, c;
        for (r = 0; r < rows; r++){
            for (c = 0; c < columns; c++){
                cout << array[r][c] << "\t";
            }
            cout << endl;
        }
        cout << endl;
    }

    void Summ(){
        int c, r, i = 0, sum = 0;
        cout << "Summ: ";
        for (r = 0; r < rows; r++){
            for (c = 0; c < columns; c++){
                if (array[r][c] % 2 != 0){
                    sum += array[r][c];
                }
            }
            cout << sum << "; ";
            i++;
            sum = 0;
        }
        cout << endl;
    }

    void Maximum(){
        int c, r, i = 0, Max = -100;
        cout << "Maximum: ";
        for (c = 0; c < columns; c++){
            for (r = 0; r < rows; r++){
                if (array[r][c] > Max){
                    Max = array[r][c];
                }
            }
            cout << Max << "; ";
            i++;
            Max = -100;
        }
        cout << endl;
    }

    void Average(){
        int c, r, i = 0;
        float sum = 0;
        cout << "Average: ";
        for (c = 0; c < columns; c++){
            for (r = 0; r < rows; r++){
                sum += array[r][c];
            }
            sum /= r;
            cout << sum << "; ";
            i++;
            sum = 0;
        }
        cout << endl;
    }

    void Transponation(){
        int r, c;
        cout << "Transponation: " << endl;
        for (c = 0; c < columns; c++){
            for (r = 0; r < rows; r++){
                cout << array[r][c] << "\t"; 
            }
            cout << endl;
        }
        cout << endl;
    }

    void MatrixSum(int **array1){
        int r, c, array2[rows][columns];
        cout << "Sum of the matrix: " << endl;
        for (r = 0; r < rows; r++){
            for (c = 0; c < columns; c++){
                array2[r][c] = (array[r][c] + array1[r][c]);
                cout << array2[r][c] << "\t";
            }
            cout << endl; 
        }
    }

    void Changes(){
        int r, c;
        cout << "Changed matrix: " << endl;
        for (r = 0; r < rows; r++){
            for (c = 0; c < columns; c++){
                if (array[r][c] < 0){
                    array[r][c] = 0;
                }
                cout << array[r][c] << "\t";
            }
            cout << endl;
        }
        cout << endl;
    }

    /*void MatrixSum(int **array){
        int r;
        int c;
        int value;
        cout << "Summ of the two matrix: " << endl;
        for (r < 0; r < rows; r++){
            for (c < 0; c < columns; c++){
                value = this->array[r][c];
                swarray[r][c] = array[r][c] + value;
                cout << swarray[r][c] << "\t";
            }
            cout << endl;
        }
    }*/

    void Distruction(){
        int i;
        for (i = 0; i < rows; i++){
            delete[] array[i];
        }
        delete[] array, summ, max, aver;
        cout << "Array is delete..." << endl;
    }

    int **GetArray(){
        return array;
    }
    
    Massive(){
        int r;
        rows = 3;
        columns = 3;
        for (r = 0; r < rows; r++){
            array[r] = new int [rows];
        }
        int c = 0;
        for (r = 0; r < rows; r++){
            for (c = 0; c < columns; c++){
                array[r][c] = 0;
            }
        }
    }

    Massive(int rows, int columns){
        this->rows = rows;
        this->columns = columns;
        int r = 0;
        for (r = 0; r < rows; r++){
            array[r] = new int [columns];
        }
        srand(time(NULL));
        int c = 0;
        for (r = 0; r < rows; r++){
            for (c = 0; c < columns; c++){
                array[r][c] = rand()%200 - 100;
            }
        }
    }

};

main(){
    Massive array1(4, 5);
    array1.Show();
    Massive array2(4, 5);
    array2.Show();
    //int **array = array1.GetArray();
    //array1.Matrixsum(array);
    array1.MatrixSum(array2.GetArray());
    array1.Summ();
    array1.Average();
    array1.Maximum();
    array1.Transponation();
    array1.Changes();
    array1.Distruction();
    array2.Distruction();
    //delete [] array;

    return 0;
}