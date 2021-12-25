#include <iostream>
#include <cmath>
#include <windows.h>

using namespace std;


int main(){
SetConsoleOutputCP(1251);
int rows,columns;
cout<<"Enter rows = ";
cin>>rows;
cout<<"Enter columns = ";
cin>>columns;
int **matrix = new int*[rows];
for(int i=0; i<rows; i++){
    matrix[i] = new int[columns];
}
for(int i=0; i<rows; i++){
    for (int j=0; j<columns; j++){
        cout<<"Enter element "<<i+1<<"-"<<j+1<<": ";
        cin>>matrix[i][j];
    }
} 
for(int i=0; i<rows; i++){
    for (int j=0; j<columns; j++){
        cout<<matrix[i][j]<<"\t";
    }
    cout<<endl;
}
cout<<endl;
for(int i=0; i<rows; i++){
    for (int j=columns-1; j>=0; j--){
        cout<<matrix[i][j]<<"\t";
    } 
    cout<<endl;
}   
    return 0;
}