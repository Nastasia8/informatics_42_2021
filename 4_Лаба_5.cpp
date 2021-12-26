#include <iostream>
#include <cmath>

using namespace std;

int main()
{
double x,y,z,D,f1,f2;
cout <<"Введите переменную x : ";
if (cin>>x)
{
    cout <<"Введите переменную y : ";
    if (cin>>y)
    {
        cout <<"Введите переменную z : ";
        if (cin>>z)
        {
            D=pow(y,2)-4*x*z;
            cout <<"Дискриминант = "<<D<<endl<<endl;
            if (D<0)
            {
                cout <<"Корней нет";
                return 0;
            }
            if (D==0)
            {
                f1=-y/(2*x);
                cout <<"Корень уравнения: "<<f1;
                return 0;
            }
            if (D>0)
            {
                f1=(-y+pow(D,0.5))/(2*x);
                f2=(-y-pow(D,0.5))/(2*x);
                cout <<"Первый корень уравнения: "<<f1<<endl<<"Второй корень уравнения: "<<f2;
                return 0;
            }
        }
        else
        {
            goto eror;
        }
    }
    else
    {
        goto eror;
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