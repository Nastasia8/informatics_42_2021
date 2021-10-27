#include <iostream>

using namespace std;

void fun(int* first, int* second, int* third)
{
	(*first)++;
	(*second) = 20;
	(*third) = -20;
}

int main()
{
	int first = 0, second = 0, third = 0;

	cout << "first " << first << endl;
	cout << "second " << second << endl;
	cout << "third " << third << endl;

	fun(&first, &second, &third);

	cout << "first " << first << endl;
	cout << "second " << second << endl;
	cout << "third " << third << endl;
}

