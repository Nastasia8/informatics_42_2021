#include<iostream>
#include<windows.h>
using namespace std;

void show(int*, int*, int*);

int main()
{
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	
	int a, b, c;
	
	cout << "Введите первое число" << endl;
	cin >> a;
	cout << "Введите второе число" << endl;
	cin >> b;
	cout << "Введите третье число" << endl;
	cin >> c;
	
	show(&a, &b, &c);
	
	return 0;
}

void show(int* a, int* b, int* c)
{
	cout << *a << " " << *b << " " << *c << endl;
}