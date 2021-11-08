#include <iostream>
using namespace std;



int main()
{
	int sum_number(int, int);
	setlocale(LC_ALL, "Russian");
	int first;
	int second;


	cout << "Enter two numbers" << endl;
	cout << "Enter first number" << endl;
	cin >> first;
	cout << "Enter second number" << endl;
	cin >> second;
	cout << "the sums of even numbers is equal to " << sum_number(first, second) << endl;

}

int sum_number(int first, int second) {
	int sum = 0;
	for (first; first <= second; first++)
	{
		if (first % 2 == 0)
		{
			sum += first;
		}
		else
		{
			continue;
		}
	}
	return sum;
}
