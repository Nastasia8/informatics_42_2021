#include <iostream>

using namespace std;

void fun(int f[])

{

    for(int i = 3; i < 18; i++)

    {   

        f[i]= f[i-1] + f[i-2] + f[i-3];

        cout << f[i] << endl;

    }

}

int main()

{

    int f[15];

    f[0] = 0;

    f[1] = 3;

    f[2] = 5;
    
    fun(f);

}