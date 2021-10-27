#include <iostream>

using namespace std;


 void izmenenie(float *x, float *y)
{
    float *py = x;
    float *px = y;


    cout << *px << " " << *py;
}



int main()
{
    float x = 2.0;
    float y = 3.0;


    izmenenie(&x,&y);

}