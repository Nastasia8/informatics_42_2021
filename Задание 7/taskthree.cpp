#include <iostream>

using namespace std;

void shitalka (int a) 
{
    while(a > 1) 
    {
        if (a % 2 == 0)
        {

            a /= 2;

        } else

        {

            a *= 3;

            a += 1;

            a /= 2;

        }

        cout << a << endl;

    }

}

int main () 
{

    int a;

    cout << "Enter the number" << endl;

    cin >> a;

    shitalka(a);

}