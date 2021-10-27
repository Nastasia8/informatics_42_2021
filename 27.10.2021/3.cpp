#include <iostream>
#include <cstdlib>

using namespace std;

const int A = 10;

int main() 
{
	int massive[A], max, min;

	cout << "Элементы: |";
	for(int i = 0; i<A; i++)
	{
		massive[i] = rand()%100;
		cout << massive[i] << "|";
	}
	cout << endl;
	
	max = massive[0];
	min = massive[0];
	for(int i = 1; i<A; i++)
	{
		if(max < massive[i]) max = massive[i];
		if(min > massive[i]) min = massive[i];
	}
	cout << "Min: " << min << endl;
	cout << "Max: " << max << endl;
	
	return 0;
}