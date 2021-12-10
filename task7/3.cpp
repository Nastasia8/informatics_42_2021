#include <iostream>
#include <windows.h>
using std:: cout;
using std:: endl;
using std:: cin;

void function(int);

int main (){
SetConsoleCP(CP_UTF8);
SetConsoleOutputCP(CP_UTF8);

	int j;
	cin >> j;
	function(j);
	return 0;
}

void function(int j) {

while (j > 1)
	{
  		if (j % 2 == 0)
			{
	  			j /= 2;
  			} else
				{
	  				j *= 3, j += 1, j /= 2;
  				}
				  cout << j << endl;
	}
}