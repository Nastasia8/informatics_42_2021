#include <iostream>
#include <ctime>

using namespace std;

int main()
{
	srand(time(NULL)); //генерируем различные ч в разном диапозоне
	int const ROW = 3;
	int const COL = 5;
	int masiv[ROW][COL];
	int masivMax[ROW];

	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COL; j++) {
			masiv[i][j] = -100 + rand() % 200;
		}

	}
	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COL; j++) {
			cout << (masiv[i][j]) << "\t";
		}
		cout << endl;
	}


	int min = masiv[0][0];
	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COL; j++) {
			if (min > masiv[i][j]) {
				min = masiv[i][j];
			}
		}
	}
	int max;
	for (int i = 0; i < ROW; i++)
	{
		max = masiv[i][0];
		for (int j = 0; j < COL; j++) {

			if (max < masiv[i][j]) {
				max = masiv[i][j];
			}
		}
		masivMax[i] = max;

	}

	for (int i = 0; i < ROW; i++)
	{
		cout << masivMax[i] << "\t";
	}
			return 0;
}


