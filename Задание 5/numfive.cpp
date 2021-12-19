#include <iostream>
#include <ctime>

using namespace std;

void FindMin (int ** arr, int rows, int cols, int *_Min_mass)
{

 int min_value = 1000;

 for (int i = 0; i < rows; i++)

     {

     min_value = 1000;

     for (int j = 0; j < cols; j++)
         {
             if (arr[i][j] < min_value);
             {

                min_value = arr[i][j];

             }
         }       
 
       _Min_mass[i] = min_value;

     } 

 cout << "Min element in line = { ";

 for (int i = 0; i < rows; i++)

     {

     cout << _Min_mass[i] << " ";

     }

 cout << " } " << endl;

}

int main()

{

  srand(time(NULL));
  
  int rows;

  int cols;

  cout << " Vedite rows " << endl;

  cin >> rows;

  cout << " Vedite cols " << endl;

  cin >> cols;

  cout << endl;


   int** arr = new int* [rows];
   
   for (int i = 0; i < rows; i++)
 
    {

       arr[i] = new int[cols];

    } 

   for (int i = 0; i < rows; i++)

    {

        for (int j = 0; j < cols; j++)

         {

            arr[i][j] = rand() % 100;

         }

    }

     for (int i = 0; i < rows; i++)

        {

          for (int j = 0; j < cols; j++)

             {

             cout << arr[i][j] << "\t";

             }
 
            cout << endl;

        }

 cout << endl;



 int *_Min_mass = new int[rows];

 FindMin(arr, rows, cols, _Min_mass);

 delete[] _Min_mass;

 for (int i = 0; i < rows; i++)
    {

     delete[] arr[i];

    }

}
