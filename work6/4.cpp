#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int x, y;
    cin >> x >> y; //вводятся числа изначально имевшие общ делитель, иначе ничего не будет 
    int a = x;
    int c = y;
   if (x > y)
   {
      x = x % y;
   }
   else {
      y = y % x;
      
    } 

    while ((x != 0) && (y != 0));
    cout << a / (x + y) * c;
}
