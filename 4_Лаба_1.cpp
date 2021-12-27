#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a,b,c,d,e,f;
    double x,y;
    chislo:
    cout <<"Vvedite chisla x,y"<<endl;
    cout <<"x: ";
    if (cin >> x)
    {
        cout <<"y: ";
        if(cin >> y)
        {
            goto q1;
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
    q1:
    cout <<"Vyberete nomer operaczii" <<endl<<endl;
    cout <<"1   Summa"<<endl;
    cout <<"2   Proizvedenie"<<endl;
    cout <<"3   Delenie"<<endl;
    cout <<"4   Vychitanie"<<endl;
    cout <<"5   Vozvedenie chisla x v stepen y"<<endl;
    cout <<"6   Vvesti novye chisla"<<endl;
    cout <<"7   Vyiti"<<endl<<endl<<endl;
    if (cin >> a)
    {
        if (a==1)
        {
            cout <<endl<<endl<<endl<<endl<<endl<<endl<<endl<<"           Summa"<<endl<<endl;
        double sum;
        sum=x+y;
        cout <<"Summa= "<<sum<<endl;
        vozvr:
        cout <<"Dlya vozvrasheniya nazhmite 1, dlya zaversheniya programmy nazhmite lyubuyu czyfru"<<endl;
        if (cin >> f)
        {
            if (f==1)
            {
                goto q1;
            }
            else
            {
                goto kon;
            }
        }
        else
        {
            goto eror;
        }
        }
        if (a==2)
        {
            cout <<endl<<endl<<endl<<endl<<endl<<endl<<endl<<"           Proizvedenie"<<endl<<endl;
        double proiz;
        proiz=x*y;
        cout <<"Proizvedenie= "<<proiz<<endl;
        goto vozvr;
        }
        if (a==3)
        {
            cout <<endl<<endl<<endl<<endl<<endl<<endl<<endl<<"           Delenie"<<endl<<endl;
        double delen;
        delen=x/y;
        cout <<"Delenie= "<<delen<<endl;
        goto vozvr;
        }
        if (a==4)
        {
            cout <<endl<<endl<<endl<<endl<<endl<<endl<<endl<<"           Vychitanie"<<endl<<endl;
        double vychit;
        vychit=x-y;
        cout <<"Vychitanie= "<<vychit<<endl;
        goto vozvr;
        }
        if (a==5)
        {
            cout <<endl<<endl<<endl<<endl<<endl<<endl<<endl<<"           Vozvedenie chisla x v stepen y"<<endl<<endl;
        double vozved;
        vozved=pow(x,y);
        cout <<"Vozvedenie chisla x v stepen y= "<<vozved<<endl;
        goto vozvr;
        }
          if (a==6)
        {
        cout <<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;  
        goto chislo;
        }
        if (a==7)
        {
          
        goto kon;
        }
        
    }
    else
    {
        goto eror;
    }
    eror:
    cout << "Введённые символы некоректны";
     return 0;
     
    kon:
    
    return 0;
}
