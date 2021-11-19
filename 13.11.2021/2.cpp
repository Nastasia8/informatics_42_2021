#include <iostream>
#include <cmath>
using namespace std;

int main()
{
float x[8] = {0.3, 0.6, 0.9, 1.2, 1.5, 1.8, 2.1, 2.4};
float y[8] = {6.715, 6.735, 6.750, 6.741, 6.645, 6.639, 6.647, 6.612};
int dlina = sizeof(x)/sizeof(x[0]);
float xs = 0;
float ys = 0;
float xs2 = 0;
float xsys = 0;
float A = 0;
 cout <<"xs"<<"\t"<<"ys"<<"\t" <<"xs2"<<"\t"<< "xsys" <<endl;
    for(int i = 0; i < dlina; i++)
    {   
 xs += x[i];
 ys += y[i];
 xs2 += x[i]*x[i];
 xsys += x[i]*y[i]; 
 cout << x[i] <<"\t"<< y[i]<<"\t"<<x[i]*x[i]<<"\t"<<x[i]*y[i]<<endl;
    }
    cout << "Sum xs" <<"\t"<<"Sum ys"<<"\t"<<"Sum xs2"<<"\t"<<"Sum xsys"<<endl;
 cout << xs <<"\t"<<ys<<"\t"<<xs2<<"\t"<<xsys<<endl;
    float m = (xsys*xs-xs2*ys)/(xs*xs-xs2*dlina);
    float z = (ys-m*dlina)/xs;
    for(int G = 0; G<dlina; G++)
    {
        A += pow((y[G] - (z * x[G]) - m), 2);
    }
    cout << "Аппроксимируемая функция равна = " << z << "x + " << m << "A = " << A << endl;
    return 0;
    
}