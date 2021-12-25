#include <iostream>
#include <cmath>
#include <windows.h>

using namespace std;


int main(){
SetConsoleOutputCP(1251);
int temp = 0;
int lines = 0;
int column = 0;
cout << "Enter lines:= ";
cin >> lines;
cout << "Enter column:= ";
cin >> column;
int **matrix = new int*[lines];
for(int i=0; i<lines; i++){
    matrix[i] = new int[column];
}
for(int i=0; i<lines; i++){
    for (int j=0; j<column; j++){
        cout<<"Enter element "<<i+1<<"-"<<j+1<<": ";
        cin>>matrix[i][j];
    }
} 
for (int i = 0; i < lines; i++){
    for (int j = 0; j < column; j++){
        cout<<matrix[i][j] << "   ";
    }
    cout<<endl;
    }
for (int i = 0; i < lines; i++){
    for (int j = 0; j < column / 2; j++){
        temp = matrix[i][j];
        matrix[i][j] = matrix[i][column - j - 1];
        matrix[i][column - j - 1] = temp;
    }
cout << endl;
for (int i = 0; i < lines; i++){
    for (int j = 0; j < column; j++){
        cout << matrix[i][j] << "   ";
        }
    cout << endl;
    }
return 0;
}