#include <iostream>
#include <cmath>

using namespace std;

int x,y,s,z;
string sim;

int main()
{
    cout<<"Введите длинну прямоугольника: ";
    if (cin>>x)
    {
        cout <<"Введите высоту прямоугольника: ";
        if (cin>>y)
        {
            if (x<0||y<0)
            {
                goto eror;
            }
            cout <<"Ввудите символ, которым будет отрисован прямоугольник: ";
            cin>>sim;
            z=0;
            cout <<endl;
            while (z!=y)
            {
            s=0;
            cout <<"  ";
            while (s!=x)
            {
                cout <<sim;
                s++;
            }
            cout<<endl;
            z++;
            }
            return 0;
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
    cout <<endl<<endl<<endl<<endl<<"Введёные символы некоректны";
    return 0;
}
