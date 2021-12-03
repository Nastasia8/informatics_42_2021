#include <iostream>
#include <list>
#include <iterator>
using namespace std;

template <typename T>
void print_number(const list<T>& lst)
{
	for (auto i = lst.cbegin(); i != lst.cend(); ++i) {
		cout << *i << endl;
	}
}

int main()
{
	list<int> list;
	int chislo = 0;
	cout << "Enter number:= ";
	cin >> chislo;
	int iter = 0;
	
	if (chislo <= 1)
	{
		cout << "Enter another number";
	}
	while (chislo != 1 && chislo > 1)
	{
		if (chislo % 2 == 0)
		{
			chislo /= 2;
			list.push_back(chislo);
		}
		else
		{
			chislo *= 3;
			chislo += 1;
			chislo /= 2;
			list.push_back(chislo);
		}
		if (chislo == 1)
		{
			break;
		}

		iter += 1;
	}
	if (chislo == 1)
	{
		print_number(list);
	}
}

