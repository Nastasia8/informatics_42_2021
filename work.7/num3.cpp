#include <iostream>
#include <cmath>

using namespace std; // пространство имён

int main()
{
    int number;

    cin >> number;

    while (number > 1)
    {
        if (number % 2 == 0)
        {
            number /= 2;
        }
        else
        {
            number *= 3;
            number += 1;
            number /= 2;
        }
        cout << number << endl;
    }