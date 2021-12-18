#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double a=7.2;
    double b=4.2;
    double x=1.81;
    double y1=sqrt((abs(a-b*x))/(pow(log(x),3)));
    cout <<"y1= " <<y1 <<endl;
    x=5.31;
    double y2=sqrt((abs(a-b*x))/(pow(log(x),3)));
    cout <<"y2= " <<y2 <<endl;
    x=0.7;
    double y3=sqrt((abs(a-b*x))/(pow(log(x),3)));
    cout <<"y3= " <<y3 <<endl;
    x=2.4;
    double y4=sqrt((abs(a-b*x))/(pow(log(x),3)));
    cout <<"y4= " <<y4 <<endl;
    x=2.8;
    double y5=sqrt((abs(a-b*x))/(pow(log(x),3)));
    cout <<"y5= " <<y5 <<endl;
    x=3.9;
    double y6=sqrt((abs(a-b*x))/(pow(log(x),3)));
    cout <<"y6= " <<y6 <<endl;
    x=4.7;
    double y7=sqrt((abs(a-b*x))/(pow(log(x),3)));
    cout <<"y7= " <<y7 <<endl;
    x=1.16;
    double y8=sqrt((abs(a-b*x))/(pow(log(x),3)));
    cout <<"y8= " <<y8 <<endl;
   return 0;
}