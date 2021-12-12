#include <iostream>
#include <ctime>

using namespace std;

void FindMin(int** masiv, int row, int col, int* masivaa)
{
    int min = 965;

    for (int i = 0; i < row; i++)
    {
        min = 965;

        for (int j = 0; j < col; j++)
        {
            if (masiv[i][j] < min)
            {
                min = masiv[i][j];
            }

        }
        masivaa[i] = min;
    }

    cout << "Minimum = { ";

    for (int i = 0; i < row; i++)
    {
        cout << masivaa[i] << " ";
    }

    cout << "}" << endl;

}

int main()
{
    srand(time(NULL));

    int row;
    int col;

    cin >> row;
    cin >> col;
    cout << endl;


    int** masiv = new int* [row];
    for (int i = 0; i < row; i++)
    {
        masiv[i] = new int[col];
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            masiv[i][j] = rand() % 100;
        }

    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << masiv[i][j] << "\t";
        }

        cout << endl;
    }
    cout << endl;


    int* masivaa = new int[row];

    FindMin(masiv, row, col, masivaa);

    delete[] masivaa; // освобождение ресурсов 

    for (int i = 0; i < row; i++)
    {
        delete[] masiv[i];
    }

}
