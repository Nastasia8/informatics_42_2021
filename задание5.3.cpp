#include <iostream>
#include <ctime>

using namespace std;


int main()
{
	      srand(time(NULL));

	      int n;
	      int min = 888;

	      cin >> n;
	      int *a = new int[n];

for (int i = 0; i < n; i++) {

	      a[i] = rand() % 100;
}

for (int i = 0; i < n; i++)
{
	       cout << a[i] << "\t";
}
for (int i = 0; i < n; i++) {
	      if (a[i] < min) {
		            min = a[i];
	}
}
	      cout << endl;
	      cout << min;

	      return 0;
}