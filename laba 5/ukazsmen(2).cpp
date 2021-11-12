#include <iostream>

using namespace std;
void UK( float *pa, float *pb, float a)
{
    pa=pb;
    cout << "new value a = " << *pa << endl;
    
    pa=&a;

    pb=pa;
    cout << "new value b = " << *pb << endl;
}

int main()
{   
    float a=23.45;
    float b=72.38;

    float *pa=&a;
    float *pb=&b;

   UK(pa, pb, a);

    return 0;
}
