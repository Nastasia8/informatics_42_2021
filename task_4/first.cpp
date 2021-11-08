#include <iostream>
using namespace std;



int main()
{
	float operation(float, float, float);
	setlocale(LC_ALL, "Russian");

	float x;
	float y;
	int number_op;
	cout << "Enter number x, y and number operations" << endl;
	cout << "Enter x" << endl;
	cin >> x;
	cout << "Enter y" << endl;
	cin >> y;
	cout << "Enter number operation" << endl;
	cout << "1) multiplication" << endl << "2) division" << endl << "3) addition" << endl << "4) subtraction" << endl;
	cin >> number_op;
	cout << "Value:= " << operation(x, y, number_op) << endl;


}

float operation(float x, float y, float number_op)
{
	float result;
	if (number_op == 1)
	{
		result = x * y;
	}
	else if (number_op == 2)
	{
		result = x / y;
	}
	else if (number_op == 3)
	{
		result = x + y;
	}
	else if (number_op == 4)
	{
		result = x - y;
	}
	return result;
}