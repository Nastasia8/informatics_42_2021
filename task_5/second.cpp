#include <iostream>

using namespace std;

void swap(float *first, float *second)
{
	float temp = *first;
	*first = *second;
	*second = temp;
}

int main()
{
	float first = 3.14;
	float second = 5.10;

	cout << "before function" << endl << "first:= " << first << " second:= " << second << endl;

	swap(&first, &second);

	cout << "after function" << endl << "first:= " << first<< " second:= " << second << endl;

}

