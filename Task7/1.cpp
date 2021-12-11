#include<iostream>
#include<iomanip>
#include<vector>
#include<algorithm>

using namespace std;

int main(){

    cout << "Methode a)"<< endl;
    vector <int> row;

    int rows = 0;
    int columns = 0;

    cout << "Enter the number of rows and columns in the matrix." << endl << "Rows: ";
    cin >> rows;
    cout << "Columns: ";
    cin >> columns;
    cout << endl;

    int matrix[rows][columns];
    int matrixswitch[rows][columns];
    int matrixsw[rows][columns];
    int value[rows][columns];
    int r = 0, c = 0, i = 0, size = 0, g = 0;

    cout << "Enter values of the matrix: ";

    for (r = 0; r < rows; r++){
        for(c = 0; c < columns; c++){
            cin >> matrix[r][c];
        }
    } 

    cout << "Origin matrix: " << endl;

    for (r = 0; r < rows; r++){
        for (c = 0; c < columns; c++){
            cout << matrix[r][c];
            cout << "\t";
        }
        cout << endl;
        c = 0;
    }

    cout << "Methode a)" << endl << endl;

    cout << "Switched matrix: " << endl;

    for (r = 0; r < rows; r++){
        for (c = 0; c < columns; c++){
            value[r][c] = matrix[(rows - 1) - r][c];
            matrixswitch[r][c] = matrix[r][(columns - 1) -c];
            cout<< matrixswitch[r][c]<< "\t";
        }
        cout << endl;
    }

    cout << endl;

    cout << "Methode b)" << endl << endl;

    r = 0;

    cout << "Switched matrix: " << endl;
    while(r < rows){
        for (c = 0; c < columns; c++){
        row.push_back(matrix[r][c]);
        }
        reverse(row.begin(), row.end());
        for (c = 0; c < columns; c++){
            matrix[r][c] = row[c];
            cout << matrix[r][c] << "\t";
        }
        cout << endl;
        row.clear();
        r++;
    }

    return 0;
}