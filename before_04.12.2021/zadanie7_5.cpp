#include<iostream>
#include <vector>

using namespace std;

int main()
{
	int n;
	cin >> n;
	
	vector<int> primes;
	
	for (int i = 2; i <= n; i++)
	{
		primes.push_back(i);
	}
	
	for(int i = 0; i < primes.size(); ++i)
	{
		if (primes[i] % 2 == 0 && primes[i] > 2)
		{
			primes.erase(primes.begin() + i--);
		}
		if (primes[i] % 3 == 0 && primes[i] > 3)
		{
			primes.erase(primes.begin() + i--);
		}
		if (primes[i] % 5 == 0 && primes[i] > 5)
		{
			primes.erase(primes.begin() + i--);
		}
		if (primes[i] % 7 == 0 && primes[i] > 7)
		{
			primes.erase(primes.begin() + i--);
		}
	}
	
	for (auto n : primes)
	{
		  cout << n << "\t"; 
	}
	
	return 0;
}