#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double n,k,y;
    n=1;
    int v;
    cout <<"Выберете операцию:"<<endl<<endl;
    cout <<"1)  Сумма числового ряда"<<endl;
    cout <<"2)  Произведение числового ряда"<<endl;
    if (cin>>v)
    {
        if (v==1)
        {
        goto sum;
        }
        if (v==2)
        {
            goto pro;
        }
        else
        {
            cout <<"Такой операции не существует";
            return 0;
        }
        
    }
    else
    {
        goto eror;
    }
    
    
    
    sum:
    cout <<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<"Введите значение k: ";
    if (cin>>k)
    {
    while (k>=1)
    {
    k=k-1;
    y=y+(2/((2*n+1)*(2*n+3)));
    n=n+1;
    }
    cout <<"Сумма числового ряда = "<<y<<endl;
    return 0;
    }
    else
    {
        goto eror;
    }
    
    
    
    pro:
    cout <<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<"Введите значение k: ";
    if (cin>>k)
    {
        y=1;
        while (k>=1)
        {
            k=k-1;
            y=y*(pow(-1,n-1)+n);
            n=n+1;
        }
        cout <<"Произведение числового ряда = "<<y<<endl;
        return 0;
    }
    else
    {
        goto eror;
    }
    
    
    
eror:
    cout <<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<< "Введённые символы некоректны";
     return 0;
    
}
