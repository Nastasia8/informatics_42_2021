#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
    double a, b, h, x, otr1, otr2,c, fa, fc;
    cout << "Enter left side segment = ";
    cin >> a;
    cout << "Enter right side segment = ";
    cin >> b;
    cout << "Enter step = ";
    cin >> h;
    cout << endl;
    cout << "x" << "\t" << "y" <<endl;
    
    int t = 0;
    for(x=a; x<=b; x+=h)
    {
        double f1= x*x - sin(5*x);
        double f2 = (x+h)*(x+h) - sin(5*(x+h));
        if((((f1 > 0) && (f2 < 0)) || ((f1 < 0) && (f2 > 0)) ) && (t == 0))
        {
            otr1 = x;
            otr2 = x+h;
            t +=1;
        }

        cout << x << "\t"<< f1 << endl;
    }
    cout<<endl;
    cout << "The root lies = [" << otr1 <<"; "<<otr2<<"]"<<endl;
    cout<<endl;
    cout << setw(5) << "a" << setw(15) << "b" << setw(15) << "c" << setw(15) << "b-a" << setw(15) << "f(a)" << setw(15) << "f(c)" << setw(15) << "f(a)*f(c)" << endl;
    t = 0;
    while (otr2-otr1 > 0.0001) 
    {   
        c = (otr1+otr2)/2;
        fa = otr1*otr1 - sin(5*otr1);
        fc = c*c - sin(5*c);
        cout << setw(5) << otr1 << setw(15) << otr2 << setw(15) << c << setw(15) << otr2-otr1 << setw(15) << fa << setw(15) << fc << setw(15) << fa*fc << endl;
        if (fa*fc < 0)
        {
            otr2 = c;
        } else if (fa*fc > 0){
            otr1 = c;           
        }
        t +=1; 
    } 
    cout <<"The root of the equation = " << c << endl;
    cout <<"Step = "<< t <<endl;

    return 0;
}
