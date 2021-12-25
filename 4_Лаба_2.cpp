#include <iostream>
#include <cmath>

using namespace std;


double S,P,I,m,n,S1;
int mes,i;
void func1 () 
{ 
  S1=S1*pow(1+I/(m/12),m/12*n);
  S1=round(S1*100)/100;
}
void func2 ()
{
    for (i=1;i<=n;i++)
    {
      S1=S1+S1*I;
    }
    S1=round(S1*100)/100;
}
 
int main()
{
I=0.15;
cout <<"Введите сумму вклада : ";
if (cin>>S1)
{
    cout <<"Выберете период начисления процентного вознаграждения 15 %: "<<endl<<"1)  12 месяцев"<<endl<<"2)  6 месяцев"<<endl<<"3)  3 месяца"<<endl;
    if (cin>>mes)
    {
   cout <<"Введите срок вклада (в годах) : ";
   if (cin>>n)
   {
      if (mes==1)
      {
       func2();
       cout <<endl<<"Будущая стоимость вклада = "<<S1;
       return 0;
      }
      if (mes==2)
      {
       m=2;
       func1();
       cout <<endl<<"Будущая стоимость вклада = "<<S1;
       return 0;
      }
      if (mes==3)
      {
          m=4;
          func1();
          cout <<endl<<"Будущая стоимость вклада = "<<S1;
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

return 0;
}

