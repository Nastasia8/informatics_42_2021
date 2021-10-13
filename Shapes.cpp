#include <iostream>
#include <cmath>



using namespace std;

void trapeze(int a, int b, int c, int d)
{
    cout <<"Perimetr trapeze = "<<a + b+ c + d<<endl;
}
void trapeze(int a, int b, int h)
{
    cout <<"Square trapeze = "<<(a + b)/2 * h<<endl;
}
void circle(int,int R, float PI)
{
    cout <<"Perimetr circle = "<< 2*PI*R <<endl;
}
void circle(int R, float PI)
{
    cout <<"Square circle = "<< PI*R*R <<endl;
}
void square(int a, int)
{
    cout <<"Perimetr square = "<< a*4 <<endl;
}
void square(int a)
{
    cout <<"Square square = "<< a*a <<endl;
}



int main()

{
    int a,b,c,d,h,R;
    const float PI = 3.14;

    cout <<"Enter variables for trapeze: = ";

    cin>>a>>b>>c>>d>>h;

    trapeze(1,2,3);

    trapeze(5,6,7,1);

    cout <<"Enter variable for circle: = ";
    
    cin>>R;
    
    circle(2,R,PI);

    circle(R,PI);

    cout <<"Enter variable for square: = ";

    cin >> a;

    square(a,4);

    square(a);

}

