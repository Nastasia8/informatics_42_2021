#include <iostream>
#include <ctime>

using namespace std;

int main()
{
	srand(time(NULL));
	int const ROW = 3;
	int const COL = 4;
	int mas[ROW][COL];
	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COL; j++)
		{
			mas[i][j] = rand() % 100;
		}
	}
	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COL; j++)
		{
			cout<< mas[i][j]<<"\t";
		}
		cout << endl;
	}
	return 0;
}