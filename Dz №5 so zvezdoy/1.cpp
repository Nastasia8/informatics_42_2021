#include <iostream>
#include <cmath>
#include <iomanip>
#include <windows.h>
using namespace std;
int main()
{
    SetConsoleCP(1251);// задаем кодировку для вывода
    SetConsoleOutputCP(1251);// задаем кодировку для ввода
    double a, b, h, x, otre1, otre2,c, fa, fc;

    cout << "Введите диапозон от = ";
    cin >> a;
    cout << "Введите диапозон до = ";
    cin >> b;
    cout << "Введите шаг = ";
    cin >> h;
    cout << endl;
    cout << "x" << "\t" << "y" <<endl;
    
    int t = 0;
    for(x=a; x<=b; x+=h)
    {
        double f1= pow((x - 1),0.5) - 2.2 / x;
        double f2= pow (x, 0.5) - 2.2 / (x);
        if((((f1 > 0) && (f2 < 0)) || ((f1 < 0) && (f2 > 0)) ) && (t == 0))
        {
            otre1 = x;
            otre2 = x+h;
            t +=1;
        }

        cout << x << "\t"<< f1 << endl;
    }
    cout<<endl;
    cout << "Промежуток в котором находится корень = [" << otre1 <<"; "<<otre2<<"]"<<endl;
    cout<<endl;
    cout << setw(5) << "a" << setw(15) << "b" << setw(15) << "c" << setw(15) << "b-a" << setw(15) << "f(a)" << setw(15) << "f(c)" << setw(15) << "f(a)*f(c)" << endl;
    t = 0;
    while (otre2-otre1 > 0.0001)
    {
        c = (otre1+otre2)/2;
        fa = pow(otre1, 0.5) -2.2 / otre1;
        fc = pow(c, 0.5) - 2.2 / c;
        cout << setw(5) << otre1 << setw(15) << otre2 << setw(15) << c << setw(15) << otre2-otre1 << setw(15) << fa << setw(15) << fc << setw(15) << fa*fc << endl;
        if (fa*fc < 0)
        {
            otre2 = c;
        } else if (fa*fc > 0){
            otre1 = c;
        }
        t +=1;
    }
    cout <<"Корень уравнения = " << c << endl;
    cout <<"Шаг = "<< t <<endl;

    return 0;
}
