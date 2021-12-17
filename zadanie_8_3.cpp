#include<iostream>
#include<time.h>
#include<limits>

using namespace std;

class Massive
{
	private:
		int row;
		int column;
		int** arr;
		
		int rand_nums(int range_min, int range_max)
		{
			return range_min + rand() % (range_max - range_min);
		}
		
	public:
		Massive(int i, int k):row(i), column(k)
		{
			arr = new int* [row];
			for (int i = 0; i < row; i++)
			{
				arr[i] = new int [column];
			}
			
			for (int i = 0; i < row; i++)
			{
				for (int j = 0; j < column; j++)
				{
					arr[i][j] = rand_nums(-500, 501);
				}
			}
		}
		
		int** get_arr()
		{
			return arr;
		}
		
		int get_row()
		{
			return row;
		}
		
		int get_column()
		{
			return column;
		}
		
		~Massive()
		{
			for (int i = 0; i < row; i++)
			{
				delete[] arr[i];
			}
			delete[] arr;
			
			cout << "Done" << endl;
		}
		
		void show()
		{
			for (int i = 0; i < row; i++)
			{
				for (int j = 0; j < column; j++)
				{
					cout << arr[i][j] << "\t";
				}
				cout << endl;
			}
		}
		
		int* odd_sum()
		{
			int* odd_arr = new int[row];
			
			for (int i = 0; i < row; i++)
			{
				int sum = 0;
				for (int j = 0; j < column; j++)
				{
					if (arr[i][j] % 2 != 0)
					{
						sum += arr[i][j];
					}
				}
				odd_arr[i] = sum;
			}
			
			return odd_arr;
		}
		
		int* odd_max()
		{
			int* max_arr = new int[column];
			
			for (int j = 0; j < column; j++)
			{
				int max_num = numeric_limits<int>::min();
				
				for (int i = 0; i < row; i++)
				{
					if (arr[i][j] % 2 != 0)
					{
						if (max_num < arr[i][j])
						{
							max_num = arr[i][j];
						}
					}
				}
				
				if (max_num == numeric_limits<int>::min())
				{
					max_arr[j] = 0;
				}
				else
				{
					max_arr[j] = max_num;
				}
			}
			
			return max_arr;
		}
		
		float* average_val()
		{
			float* average_arr = new float[column];
			
			for (int j = 0; j < column; j++)
			{
				float avg = 0;
				
				for (int i = 0; i < row; i++)
				{
					avg += arr[i][j];
				}
				
				average_arr[j] = avg / row;
			}
			
			return average_arr;
		}
		
		void transpose()
		{
			int** trans = new int* [column];
			for (int i = 0; i < column; i++)
			{
				trans[i] = new int[row];
			}
			
			for (int i = 0; i < row; i++)
			{
				for (int j = 0; j < column; j++)
				{
					trans[j][i] = arr[i][j];
				}
			}
			
			cout << "____________________________" << endl;
			cout << "TRANSPOSED" << endl;
			for (int i = 0; i < column; i++)
			{
				for (int j = 0; j < row; j++)
				{
					cout << trans[i][j] << "\t";
				}
				cout << endl;
			}
			cout << "____________________________" << endl;
			
			for (int i = 0; i < column; i++)
			{
				delete[] trans[i];
			}
			delete[] trans;
		}
		
		void sum_mtx(int** array)
		{
			for (int i = 0; i < row; i++)
			{
				for (int j = 0; j < column; j++)
				{
					arr[i][j] += array[i][j];
				}
			}
		}
		
		void edit()
		{
			cout << "____________________________" << endl;
			for (int i = 0; i < row; i++)
			{
				for (int j = 0; j < column; j++)
				{
					if (arr[i][j] < 0)
					{
						arr[i][j] = 0;
					}
					cout << arr[i][j] << "\t";
				}
				cout << endl;
			}
			cout << "____________________________" << endl;
		}
};

int main()
{	
	srand(time(NULL));
	
	Massive array(2, 3);
	
	array.show();
	
	int* odd = array.odd_sum();
	delete[] odd;
	
	int* max_odd = array.odd_max();
	delete[] max_odd;
	
	float* avg_num = array.average_val();
	delete[] avg_num;
	
	array.transpose();
	
	Massive array1(2, 3);
	
	array1.show();
	int** array1_ptr = array1.get_arr();
	
	array.sum_mtx(array1_ptr);
	
	for (int i = 0; i < array1.get_row(); i++)
	{
		delete[] array1_ptr[i];
	}
	delete[] array1_ptr;
	
	array.edit();	

	return 0;
}

