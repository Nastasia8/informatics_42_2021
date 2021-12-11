#include<iostream>
#include<algorithm>

using namespace std;

unsigned int greatest_com_div(int, int);

int main()
{
	int x;
	int y;
	
	cout << "Enter natural numbers" << endl;
	cin >> x >> y;
	
    cout << x * y / greatest_com_div(x, y) << endl;
	
	return 0;
}

unsigned int greatest_com_div(int x, int y)
{
	if (x > 0 && y > 0)
	{
		unsigned int maximal = max(x, y);
		unsigned int minimal = min(x, y);
		unsigned int remainder = minimal;
		while(maximal % minimal != 0)
		{
			remainder = maximal % minimal;
			maximal = minimal;
			minimal = remainder;
		}
		return minimal;
	}
	else
	{
		abort();
	}
}
