#include <iostream>
#include <cmath>

using namespace std;

void shitalka(int n)

{

    int bin = 0;

    int okt = 0;

    int hex = 0;

    int x = n;

    int y = n;

    for(int i = 0; n > 0; i++)

    {

        bin += (n % 2) * pow(10.0, i);

        n/=2;

    }

    for(int i = 0; x > 0; i++)

    {

        okt += (x % 8) * pow(10.0, i);

        x/=8;

    }

    for(int i = 0; y > 0; i++)

    {

        hex += (y % 16) * pow(10.0, i);

        y/=16;

    }
    cout << bin << endl;

    cout << okt << endl;

    cout << hex << endl;

}

int main()   
    

{   
    int n; 

    cout << " Please enter the value " << endl;

    cin >> n;

    while(n < 0 || n>325)

    {

        cout << "ERROR: invalid value. Please write correct number: ";

        cin >> n;

    } 


    shitalka(n);

}