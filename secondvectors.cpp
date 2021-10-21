#include <iostream>
#include <cmath>
using namespace std;


float VectorLength(int x, int y, int z)
{
    return sqrt(x*x + y*y + z*z);
}
void SingleVector(int x, int y, int z, float length)
{
    cout<<"Single Vector = "<<x/length<<" "<<y/length<<" "<<z/length<<endl;

}
float ScalarProduct(int x,int a,int y,int b,int z,int c)
{
    return x*a + y*b + z*c;
}

void VectorProduct(int x,int a,int y,int b,int z,int c)
{
    cout<<"Vector Product = "<<y*c - z*b<<" "<<-1*(x*c - z*a)<<" "<<x*b - y*a<<endl;
}



int main()
{
    int x = 1;
    int y = 5;
    int z = 3;
    int a,b,c;

    cout <<"1.1"<<endl;

    float length = VectorLength(x, y, z);

    cout<<"Vector Length = "<<length<<endl;

    cout <<"1.2"<<endl;

    SingleVector(x, y, z, length);

    cout <<"1.3"<<endl;

    cout <<"Enter variables = ";
    cin >>a>>b>>c;
    
    cout <<"Scalar Product = "<<ScalarProduct(x, a, y, b, z, c)<<endl;
 
    cout <<"1.4"<<endl;

    VectorProduct(x, y, z, a, b, c);

    
    return 0;
}
