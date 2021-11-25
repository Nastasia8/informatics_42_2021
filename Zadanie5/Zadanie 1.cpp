#include <iostream>

using namespace std;



void zs(int* a, int* d, int* f)
{
	cout << *a << *d << *f;
}

int main()
{
	int q = 2;
	int w = 3;
	int e = 4;
	zs(&q, &w, &e);

}