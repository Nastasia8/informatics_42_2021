#include <iostream>
#include <bitset>


using namespace std;

int main()
{
	int n, t;
	cout << "Input n = ";
	cin >> n;
	cout << "Dec = " << dec << n << endl;
	cout << "Bin = " << bitset<numeric_limits<int>::digits>(n) << endl;
	cout << "Oct = " << oct << n << endl;
	cout << "Hex = " << hex << n << endl;
	return 0;
}