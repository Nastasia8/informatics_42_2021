#include <iostream>

using namespace std;

void per(int *x, int *y, int *a)
{
	cout << *x << endl;
	cout << *y << endl;
	cout << *a;

}

int main()
{
	int x = 8, y = 30, a = 0;

	per(&x, &y, &a);

}
