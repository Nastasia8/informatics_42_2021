#include <iostream>

using namespace std;

int main()
{
    int n, m;
    cout << "Input n: ";
    cin >> n;
    cout << "Input m: ";
    cin >> m;
    int** k = new int* [m]; // просмотрено из интернета и изменен
    for (int i = 0; i < n; i++) k[i] = new int[n]; // просмотрено из интернета 
    cout << "Intput matrix k: \n";
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> k[i][j];
    for (int i = 0; i < n; i++) // просмотрено из интернета 
        for (int j = 0; j < m / 2; j++) // просмотрено из интернета и изменен
        {
            int x = k[i][m - j - 1]; // просмотрено из интернета и изменен
            k[i][m - j - 1] = k[i][j]; // просмотрено из интернета и изменен
            k[i][j] = x; // просмотрено из интернета и изменен
        }
    cout << endl << "matrix k: " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cout << k[i][j] << " ";
        cout << endl;
    }
    return 0;
}

