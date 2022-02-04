#include <iostream>

using namespace std; // пространство имён

void per(int* x, int* y, int* a) // void не возвращает значения
{
	cout << *x << endl; // вывод
	cout << *y << endl;
	cout << *a << endl;
}

int main()
{
	int x = 8; // иниц. как тип int
	int y = 30;
	int z = 0;
	per(&x, &y, &a);
}