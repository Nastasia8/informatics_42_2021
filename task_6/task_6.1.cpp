#include <iostream>

using namespace std; 

int row_of_numbers();
int main()
{
    row_of_numbers();
   

}

int row_of_numbers()
{
    int f0 = 0;
    int f1 = 3;
    int f2 = 5;
    int f_sum = 0;

    int n = 15;

    cout << "{ " << f0 << "; " << f1 << "; " << f2 << "; ";
    int i = 0;
    while (i < n - 3)
    {
        f_sum = f0 + f1 + f2;
        f0 = f1;
        f1 = f2;
        f2 = f_sum;
        i += 1;
        cout << f_sum << "; ";
    }
    cout << "} ";
    return 0;
}