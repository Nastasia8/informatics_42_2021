#include<iostream>
#include <cmath>

using namespace std;

int main()
{
    int n,t=0,d=1,n1,n2,n3,n4,g,s,s1,s2;
    string t1,t2,t3,t4;
    cout<<"Введите число: ";
    if (cin>>n)
    {
        goto doo;
    }
    else
    {
        goto eror;
    }
    doo:
    n1=n;
    n2=n;
    n3=n;
    n4=0;
    while(n)
    {
        t=t+(n%2)*d;
        n=n/2;
        d=d*10;
    }
    cout<<t<<endl;
    n=0,t=0,d=1,g=0;
    while(n1)
    {
        t=t+(n1%8)*d;
        n1=n1/8;
        d=d*10;
    }
    cout<<t<<endl;
    n=0,t=0,d=1,s=0,s1=0,s2=0;
    while(n2)
    {
        n4=n3%16;

        if (n4==10)
        {
            t1='A';
        }
        if (n4==11)
        {
            t1='B';
        }
        if (n4==12)
        {
            t1='C';
        }
        if (n4==13)
        {
            t1='D';
        }
        if (n4==14)
        {
            t1='E';
        }
        if (n4==15)
        {
            t1='F';
        }
        if (n4==9)
        {
            t1='9';
        }
        if (n4==8)
        {
            t1='8';
        }
        if (n4==7)
        {
            t1='7';
        }
        if (n4==6)
        {
            t1='6';
        }
        if (n4==5)
        {
            t1='5';
        }
        if (n4==4)
        {
            t1='4';
        }
        if (n4==3)
        {
            t1='3';
        }
        if (n4==2)
        {
            t1='2';
        }
        if (n4==1)
        {
            t1='1';
        }
        if (n4==0)
        {
            t1='0';
        }
        
        
        if (g==0)
        {
            t2=t1;
            s=1;
        }
        if (g==1)
        {
            t3=t1;
            s1=1;
        }
        if (g==2)
        {
            t4=t1;
            s2=1;
        }
        g++;
        n2=n2/16;
        n3=n3/16;
        d=d*10;
    }
    if (s2==1)
    {
        cout <<t4;
    }
    if (s1==1)
    {
        cout <<t3;
    }
    if (s==1)
    {
        cout <<t2;
    }
     return 0;

  eror:
    cout <<endl<<endl<<endl<<endl<<endl<<endl<< "Введённые символы некоректны";
     return 0;
}