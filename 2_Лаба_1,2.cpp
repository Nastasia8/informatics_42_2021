#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int x=1;
    int y=5;
    int z=3;
    double a=pow((pow(x,2)+pow(y,2)+pow(z,2)),1.0/2.0);
    cout <<"Длинна вектора = " << a <<endl;
    double Xed=x/a;
    double Yed=y/a;
    double Zed=z/a;
    cout <<"b = (" <<Xed<<" ; "<<Yed<<" ; "<<Zed<<")"<<endl;
    double Xc,Yc,Zc;
    cout <<"Введите координаты вектора c:" <<endl ;
    cout <<"Xc = ";
    if (cin >> Xc)
    {
     cout <<"Yc = ";
     if (cin >>Yc)
     {
      cout << "Zc = ";
      
      if (cin >> Zc)
      {
          goto da;
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
     cout << "Введённые символы некоректны";
     return 0;
    
 da:
 double ma=pow(pow(x,2)+pow(y,2)+pow(z,2),1.0/2.0);
 double mb=pow(pow(Xc,2)+pow(Yc,2)+pow(Zc,2),1.0/2.0);
 double cfi=(x*Xc+y*Yc+z*Zc)/(ma*mb);
 double ac=ma*mb*cfi;
 cout <<"Скалярное произведение векторов: " <<ac <<endl;
 double sfi=pow(1-pow(cfi,2),1.0/2.0);
 double acv=ma*mb*sfi;
 cout <<"Векторное произведение векторов : " <<acv <<endl;
 nome:
 cout <<endl <<"Напишите № фигуры, для которой необходимо рассчитать Периметр и Площадь. Либо завершите работу программы:" <<endl;
 cout <<"1) Трапеция" <<endl<<"2) Круг" <<endl<<"3) Квадрат" << endl <<"4) Завершить работу программы" <<endl;
 int nom;
 
    if (cin >> nom)
    {
        if (nom==1)
        {
            double X1,Y1,Z1,C1,V1;
            cout <<"Трапеция " <<endl;
            cout <<"Введите значения:" <<endl;
             cout <<"Первое основание = ";
            if (cin >> X1)
    {
     cout <<"Второе основание = ";
     if (cin >>Y1)
     {
         cout <<"Первая сторона = ";
         if (cin >> C1)
      {
          cout <<"Вторая сторона = ";
          if (cin >> V1)
      {
          cout << "Высота = ";
      
      if (cin >> Z1)
      {
          double pltrap=(X1+Y1)/2*Z1;
          cout <<endl <<endl <<"Площадь трапеции равна = " <<pltrap <<endl;
          double pertrap=X1+Y1+C1+V1;
          cout <<"Периметр = " <<pertrap <<endl;
          goto nome;
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
            
            
            
            
            //-----------------------------------------------------------
            
            if (nom==2)
            {
                double R2;
            cout <<"Круг " <<endl;
            cout <<"Введите значение:" <<endl;
             cout <<"Радиус = ";
            if (cin >> R2)
    {
     double plkru=pow(R2,2);
          cout  <<endl <<endl<<"Площадь круга равна: " <<plkru <<"π" <<endl;
          double plkru2=pow(R2,2)*3.1415926535;
          cout <<"Или ≈ " <<plkru2 <<endl;
          double perkru=2*R2;
          cout <<"Периметр круга = " <<perkru<<"π" <<endl;
          double perkru2=2*R2*3.1415926535;
          cout <<"Или ≈ "<<perkru2<<endl;
          goto nome;
     
      
     
    }
    else
    {
    goto eror;
    }
            }
            else
            {
                
                
                
                
                
                //------------------------------------------------------------------
                
                if (nom==3)
                {
                    cout <<"Квадрат" <<endl;
                    cout <<"Введите значение:" <<endl;
             cout <<"Сторона = ";
             double X3;
            if (cin >> X3)
    {
     double plkvad=pow(X3,2);
          cout  <<endl <<endl<<"Площадь квадрата = " <<plkvad <<endl;
          double perkvad=X3*4;
          cout <<"Его периметр = " <<perkvad <<endl;
          goto nome;
     
      
     
    }
    else
    {
    goto eror;
    }
                }
                else
                {
                    if (nom==4)
                    {
                        return 0;
                    }
                    else
                {
                    cout <<"Фигуры под номером: "<<nom <<") не существует"<< endl;
                    goto nome;
                }
                    
                }
                
            }
        }
    }
    else
    {
        
        goto eror;
    }
    
 return 0;   
}