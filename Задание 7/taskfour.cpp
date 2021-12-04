#include <iostream>

using namespace std;

long double factorial(int k) 
{

    if(k < 0) 

    return 0; 

    if (k == 0) 

    return 1; 

    else 

    return k * factorial(k - 1); 
}

int main () 
{

    int n, sum = 0;

    cout << "Enter numbers = ";

    cin >> n;

    for(int k = 1; k <= n; k++) 

    {

        sum += -1 * k * ((5 - k) / factorial(k));
        
    }

    cout << sum;

}