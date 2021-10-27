#include <iostream>

using namespace std;


 void ukazatel(int *x, int *y, int *z)
{
    

    cout << *x << " " << *y << " "<<*z;


}



int main()
{
    int x = 2;
    int y = 3;
    int z = 4;


    ukazatel(&x,&y,&z);

}