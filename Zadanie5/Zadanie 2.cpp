#include <iostream>

using namespace std;

void a(float* s, float* f)
{
	cout << *f <<" " << *s;

}

int main()
{
	float s = 34.2;
	float f = 54.4;
	a(&s,& f);



}