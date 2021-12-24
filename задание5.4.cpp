#include <iostream>
#include <ctime>

using namespace std;

void start(int *a, int n)
for (int i = 0; i < n; i++) {

	       a[i] = rand() % 100;
}

void display( int *a, int n)
for (int i = 0; i < n; i++)
{
	       cout << a[i] << "\t";
}
 void tytmin( int *a, int n, int min)
for (int i = 0; i < n; i++) {
	      if (a[i] < min) {
		            min = a[i];
	}
}
int main()
{
	      srand(time(NULL));
  
	      int n;
	      int min = 888;

	      cin >> n;
	      int *a = new int[n];

	      cout << endl;
	      cout << min;

	      return 0;
}