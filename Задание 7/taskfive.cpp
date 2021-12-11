#include <iostream>

using namespace std;

void function (int n)
 {

    int *a = new int[n + 1];

    for (int i = 0; i <= n; i++) 

    {

        a[i] = i;

    }
    for (int i = 2; i * i <= n; i++)

    {

        if (a[i]) 

        {

            for (int j = i*i; j <= n; j += i) 

            {

                a[j] = 0;

            } 

        }
    }

    for (int i = 2; i < n; i++) 

    {

        if (a[i]) 

        {

            cout << a[i] << ' '; 

        } 

    } 

    cout << endl << endl;

    delete[] a; 
}
 
int main()

{

    int n;

    cout << "Enter the number" << endl;

    cin >> n;

    function(n);
 
 return 0;

}