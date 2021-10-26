#include <iostream>
#include <cmath>

using namespace std;


void k(int x, int y, int z) {
	float f1, f2;
	float D = y * y - 4 * x * z;
	if (D > 0) {
		f1 = (-y + sqrt(D)) / 2 * x;
		f2 = (-y - sqrt(D)) / 2 * x;
		cout << "Rez" << f1 << " " << f2;
	}
	else if (D == 0) {
		f1 = -y / 2 * x;
		cout << "Rez" << f1;
	}
	else
	{
		cout << "Net";
	}


}


int main()
{
	int x, y, z;
	cin >> x >> y >> z;
	k(x, y, z);

	return 0;


}