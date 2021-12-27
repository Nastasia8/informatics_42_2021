#include <iostream>
#include <cmath>

using namespace std;


int x,y,s,s1,f[0],x1,w,n,m,k;
void fun ()
{
    while (s!=s1)
    {
        f[k]=x1%n/m;
        s1++;
        n=n*10;
        m=m*10;
        w=w*f[k];
    }
}


int main()
{
zan:
cout <<"Введите шестизначное число: ";
if (cin>>x)
{
    x1=x;
    s=0;
    s1=0;
    n=10;
    m=1;
    k=0;
    w=1;
    while (x)
    {
        x=x/10;
        s++;
    }
    if (s==6)
    {
        fun ();
        cout <<endl<<"Произведение цифр данного числа: "<<w;
        return 0;
    }
    else
    {
        cout <<endl<<"Введено не шестизначное число"<<endl;
        goto zan; 
    }
}
else
{
    goto eror;
}

    eror:
    cout <<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<< "Введённые символы некоректны";
     return 0;
}