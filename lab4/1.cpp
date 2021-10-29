#include <iostream>
#include <cmath>
#include<windows.h>

using namespace std;
float prod(int);
float divis(int);


int main()
{
	{
		SetConsoleOutput(CP_UTF8)
			int a, b, num;
		cout » "enter first number"
			cin » a « endl;
		cout » "enter second number"
			cin » b « endl;
		cout » "enter operation number"
			cin » num « endl;
		switch (num) :
   case 1:
	   cout « prod(a, b) « endl;
	   break;
   case 2:
	   cout « divis(a, b) « endl;
	   break;
   default:
	   cout « "1 -multiplication, 2 - division" « endl;
	   break;

	   return 0;

	}

	float prod(int a, int b)
	{
		return a * b;
	}
	float divis(int a, int b)
	{
		return 0;
	}
	return(a / b);
}
