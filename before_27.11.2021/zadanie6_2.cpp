#include<iostream>
#include<bitset>

using namespace std;

unsigned short enter();

int main()
{
	cout << "Enter the number between 0 and 325" << endl;
	unsigned short k = enter();
	cout << bitset<9>(k) << endl;
	cout << oct << k << endl;
	cout << hex << k << endl;
	return 0;
}

unsigned short enter()
{
	unsigned short temp;
	cin >> temp;
	if (temp >= 0 && temp <= 325)
	{
		return temp;
	}
	else
	{
		abort();
	}
}
