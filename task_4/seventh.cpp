#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int height = 0;
	int width = 0;
	char simb = 'g';

	cout << "Enter the height of the rectangle" << endl;
	cin >> height;
	cout << "Enter the width of the rectangle" << endl;
	cin >> width;
	cout << "Enter a character to draw" << endl;
	cin >> simb;
	cout << endl;

	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < width; j++)
		{
			cout << simb << " ";
		}
		cout << endl;
	}
}

