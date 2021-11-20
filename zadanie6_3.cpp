#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
	int x;
	int y;
	
	cout << "Enter natural numbers" << endl;
	cin >> x >> y;
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
		cout << minimal;
	}
	else
	{
		abort();
	}
	
	return 0;
}
