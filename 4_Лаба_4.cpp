#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int x,y[0],s,s1,k,n,m,q,w,x1;
    cout <<"Введите число: ";
    if (cin>>x)
    {
        s=0;
        x1=x;
        while (x)
        {
            x=x/10;
            s++;
        }
        k=0;
        n=10;
        m=1;
        s1=0;
        q=0;
        w=0;
        while (s!=s1)
        {
            y[k]=x1%n/m;
            s1++;
            n=n*10;
            m=m*10;
            q=y[k]%2;
            if (q==0)
            {
                w=w+y[k];
            }
        }
        cout <<endl<<"Сумма чётных чисел = "<<w;
        return 0;
        
    }
    else
    {
        goto eror;
    }
    eror:
    cout <<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<< "Введённые символы некоректны";
     return 0;
     
    return 0;
}