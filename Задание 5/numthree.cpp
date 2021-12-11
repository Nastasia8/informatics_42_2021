#include <iostream>
#include <ctime>

using namespace std;

int main()

{
  srand(time(0));
  
  int min = 1000000;
  int array_size;

  cout << " Vedite razmer massiva " << endl;
  cin >> array_size;
  cout << endl;

   int *mass = new int [array_size];

  for(int i = 0; i < array_size; i++)

  {

    mass[i] = rand() % 100; 

  }


  for (int i = 0; i < array_size; i++)
    {

            cout << mass[i] << "\t";
        
        
        cout << endl;
    }
    cout << endl;
    
    for (int i = 0; i < array_size; i++)
    {
            if (mass[i] < min)
            {
                min = mass[i];
            }
    }
    cout << "Min element massiva = " << min << endl;


 
  system ("PAUSE");

  return 0;

}