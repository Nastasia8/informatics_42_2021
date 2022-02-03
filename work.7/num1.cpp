﻿#include <iostream>

using namespace std; // пространство имён

int main() 
{
    int rows, columns;
    int index = 1;
    int t;
    
    cin >> rows;
    cin >> columns;

    cout << " 1) " << endl;

    int **m = new int* [rows];
    for (int i = 0; i < rows; i++)
    {
        m[i] = new int[columns];
    }
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            m[i][j] = index;
            index++;
        }
    }
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cout << m[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = columns - 1; j >= 0; j--)
        {
            cout << m[i][j] << "\t";
        }
        cout << endl;
    }

    cout << " 2) " << endl;
    
    int **m2 = new int *[rows];
    for (int i = 0; i < rows; i++) 
    {
        m2[i] = new int[columns];
    }
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            m2[i][j] = index;
            index++;
        }
    }
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cout << m2[i][j] << "\t";
        }
        cout << endl;
    }
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns / 2; j++)
        {
            t = m2[i][j];
            m2[i][j] = m2[i][columns - j - 1];
            m2[i][columns - j - 1] = t;
        }
    }
    cout << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cout << m2[i][j] << "\t";
        }
        cout << endl;
    }
}