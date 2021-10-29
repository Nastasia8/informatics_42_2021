#include <iostream>
#include <cmath>

using namespace std;

int perimeter(int a, int b, int c, int d)
{
    return a+b+c+d; 
}

int perimeter(float pi, int r)
{
    return 2*pi*r; 
}

int perimeter(int k)
{
    return 4*k; 
}

int square(int a, int b, int h)
{
    return (a+b/2)*h;
}

int square(float pi, int r)
{
    return pi*r*r;
}

int square(int k)
{
    return k*k;
}




int main()
{ 
     const float pi=3.14;

     cout << "white a,b,c,d,r,k,h" << endl;

     int a=0;
     int b=0;
     int c=0;
     int d=0;
     int r=0;
     int k=0;
     int h=0;

     cin >> a;
     cin >> b;
     cin >> c;
     cin >> d;
     cin >> r;
     cin >> k;
     cin >> h;

    cout << "perTr = " << perimeter(a,b,c,d) << endl;
    cout << "perKr = " << perimeter(pi,r) << endl;
    cout << "perKv = " << perimeter(k) << endl;

    cout << "sqrTr = " << square(a,b,h) << endl;
    cout << "sqrKr = " << square(pi,r) << endl;
    cout << "sqrTr = " << square(k) << endl;

    return 0;
}