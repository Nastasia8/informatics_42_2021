#include <iostream>
#include <ctime>

using namespace std;

void fill_function( int* mass, int array_size)

{

  for (int i = 0; i < array_size; i++)

  {

    mass[i] = rand() % 100;

  }

}

void display_function( int* mass, int array_size)

{

  for (int i = 0; i < array_size; i++)

  {

    cout << mass[i] << "\t";

  }
  
}

void min_function ( int* mass, int array_size, int min_value)

{

  for (int i = 0; i < array_size; i++)

  {

    if (mass[i] < min_value)
    
    {
       
       min_value = mass[i];

    }

  }

  cout << " Min element in mass = " << min_value << endl;
  
}

int main()

{

  srand(time(0));
  
  int min_value = 1000000;

  int array_size;

  cout << " Vedite razmer massiva " << endl;

  cin >> array_size;

  cout << endl;


   int *mass = new int [array_size];
   {

      fill_function (mass, array_size);

      display_function(mass, array_size);

      min_function (mass, array_size, min_value);

   }

  system ("PAUSE");

  return 0;

}