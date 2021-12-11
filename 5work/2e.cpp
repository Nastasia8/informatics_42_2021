#include <iostream>

using namespace std;

void foo(float *x, float *y)
{
	float  *t;
	t = x;
	x = y;
	y = t;

	cout << *x << endl;
		cout<< *y;

}

int main()
{
	float x = 34.5;
	float y = 69.7;

	foo(&x, &y);

}

