#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    float a, b, c, x, segment1, segment2, g , fa, fc;
 cout << "Введите первый отрезок = ";
 cin >> a;
 cout << "Введите второй отрезок = ";
 cin >> b;
 cout << "Шаг = ";
 cin >> g; 
 cout << endl;
 cout << "x" << "\t" << "y" <<endl;
    
    int t = 0;
    for(x=a; x<=b; x+=g)
    {
        float f1= 4*x-5*log(x)-5;
        float f2 = pow(x-1,2)-2*cos(x);
        if((((f1 > 0) && (f2 < 0)) || ((f1 < 0) && (f2 > 0)) ) && (t == 0))
        {
 segment1 = x;
 segment2 = x+g;
 t+=1;
        }
        cout << x << "\t"<< f1 << endl;
    }
    cout<<endl;
    cout << "Корень = [" << segment1 <<"; "<<segment2<<"]"<<endl;
    cout<<endl;
    cout << setw(5) << "a" << setw(15) << "b" << setw(15) << "c" << setw(15) << "b-a" << setw(15) << "f(a)" << setw(15) << "f(c)" << setw(15) << "f(a)*f(c)" << endl;
    t = 0;
    while (segment2-segment1 > 0.0001) 
    {   
        c = (segment1+segment2)/2;
        fa = 4*segment1-5*log(segment1)-5;
        fc = 4*c-5*log(c)-5;
        cout << setw(5) << segment1 << setw(15) << segment2 << setw(15) << c << setw(15) << segment2-segment1 << setw(15) << fa << setw(15) << fc << setw(15) << fa*fc << endl;
        if (fa*fc < 0)
        {
            segment2 = c;
        } else if (fa*fc > 0){
            segment1 = c;           
        }
        t +=1; 
    } 
    cout <<"Корень = " << c << endl;
    cout <<"Отступ = "<< t <<endl;
    return 0;
} 