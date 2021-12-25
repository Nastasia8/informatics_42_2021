#include <iostream>

#include <cmath>

#include <iomanip>

using namespace std;

int main()

{

    double a, b, h, x, obl1, obl2, c, f1, f2; //Ввод переменных

    cout << "Enter left side segment = ";

    cin >> a;

    cout << "Enter right side segment = ";

    cin >> b;

    cout << "Enter step = ";

    cin >> h;

    cout << endl;

    cout << "x" << "\t" << "y" <<endl;
    
    int t = 0; // переменная отвечающая за шаги

    for(x = a; x <= b; x +=h )

    {
        double f1= log(x) + pow(x+1,3); // вычисляем произведение для функции 1

        double f2 = log(x + h) + pow(x+1+h,3); // вычисляем произведение для функции 2

        if((((f1 > 0) && (f2 < 0)) || ((f1 < 0) && (f2 > 0)) ) && (t == 0)) // функция по поиску смены знака

        {

            obl1 = x;

            obl2 = x + h;

            t += 1;

        }

        cout << x << "\t"<< f1 << endl;

    }
    cout << endl;

    cout << "The root lies = [" << obl1 <<"; "<<obl2<<"]"<<endl;

    cout << endl;

    cout << setw(5) << "a" << setw(15) << "b" << setw(15) << "c" << setw(15) << "b-a" << setw(15) << "f(a)" << setw(15) << "f(c)" << setw(15) << "f(a)*f(c)" << endl; // отступы

    t = 0;

    while (obl2 - obl1 > 0.0001) 

    {   
        c = (obl1 + obl2)/2; //вычисление середины отрезка c

        f1 = log(obl1) - pow(obl1+1,3); // вычисление значения функции 1

         f2 = log(c) - pow(c+1,3); // вычисление значения функции 2

        cout << setw(5) << obl1 << setw(15) << obl2 << setw(15) << c << setw(15) << obl2 - obl1 << setw(15) << f1 << setw(15) << f2 << setw(15) << f1 * f2 << endl; // устанавливаем ограничение символов с помощью манипулятора setw

        if (f1 * f2 < 0) // условие описанное в задании
        {

            obl2 = c;

        } else if (f1 * f2 > 0) // условие описанное в задании

        {

            obl1 = c;  

        }

        t += 1; // повтор шагов

    } 

    cout <<"The root of the equation = " << c << endl;

        cout << "Step = " << t <<endl;

    return 0;
}