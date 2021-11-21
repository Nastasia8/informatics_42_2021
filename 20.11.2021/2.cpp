#include <iostream>
#include <cmath>

using namespace std;

void algoritm(int n)
{
    int binar = 0;
    int eight = 0;
    int sixteen = 0;
    int a = n;
    int b = n;
    for(int i = 0; n>0; i++)
    {
        binar += (n % 2) * pow(10.0, i);
        n/=2;
    }

    for(int i = 0; a>0; i++)
    {
        eight += (a % 8) * pow(10.0, i);
        a/=8;
    }

    for(int i = 0; b>0; i++)
    {
        sixteen += (b % 16) * pow(10.0, i);
        b/=16;
    }
    cout << binar << endl;
    cout << eight << endl;
    cout << sixteen << endl;
}

int main()
{   
    int n;
    cin >> n;
    while(n<0 || n>325)
    {
        cout << "Write correct number: ";
        cin >> n;
    } 
    
    algoritm(n);

}

