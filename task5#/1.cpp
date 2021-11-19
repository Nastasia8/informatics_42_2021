#include <iostream>
#include <windows.h>
#include <math.h>
#include <iomanip>
using namespace std;
float func(float x);
int main(){
SetConsoleCP(CP_UTF8);
SetConsoleOutputCP(CP_UTF8);
    float e = 2.7183;
    float x = 0;
    float x_end = 5;
    float x_step = 0.5;
    float a, b, c;
    float x_clon = 0;
    float x_end_clon = 5;
    float x_step_clon = 0.5;
    cout << "x" << "\t" << "y" <<endl; 
    for (; x_clon <= x_end_clon; x_clon+= x_step_clon)
    {
    cout << x_clon << "\t"<< ((pow((x_clon-1),2) - ((pow(e,x_clon)))/2))  << endl;
    }
    cout << endl;
    for (; x <= x_end; x+= x_step)
    {
        cout << "Интервал смены знака" << endl;
        cout << "x" << "\t" << "y" <<endl; 
        float x1 = x;
		
		cout << x1 <<"\t";
		float y1 = ((pow((x1-1),2) - ((pow(e,x1)))/2));
		cout << y1 << "\t" << endl;

		float x2 = x + x_step;
		cout << x2 << "\t";
		float y2 = ((pow((x2-1),2) - ((pow(e,x2)))/2));
		cout << y2 << "\t" << endl;

		if((((y1 > 0) && (y2 < 0)) || ((y1 < 0) && (y2 > 0))))
		{
			a = x1;
			b = x2;
			cout << endl << "Отрезок [" << a << "; " << b << "]" << endl;
			break;
		}
    }
	cout << endl << "Таблица уточнения корня" << endl;
    cout << "Шаги "<< setw( 4 )
		<< setw( 14 ) << "a" 
        << setw( 14 ) << "b"
        << setw( 14 ) << "c"
        << setw( 14 ) << "b-a"
        << setw( 14 ) << "f(a)"
        << setw( 14 ) << "f(c)"
        << setw( 14 ) << "f(a)*f(c)"
        << endl;
	int q = 0;
	while (abs((b - a)) > 0.0001)
	{
		if (abs((b - a)) > 0.0001)
		{
			c = (a + b) / 2;

			double f_a, f_c, fa_fc;

			f_a = ((pow((a-1),2) - ((pow(e,a)))/2));
			f_c = ((pow((c-1),2) - ((pow(e,c)))/2));

			fa_fc = f_a * f_c;

			if (fa_fc < 0)
			{
				a = a;
				b = c;	
			}
			else if (fa_fc > 0)
			{
				a = c;
				b = b;
			}
	q +=1;
	cout<< setw(4) << q << setw( 16 ) << a
        << setw( 14 ) << b
        << setw( 14 ) << c
        << setw( 14 ) << abs((b - a))
        << setw( 14 ) << f_a
        << setw( 14 ) << f_c
        << setw( 14 ) << fa_fc
        << endl;
		}
		
	}
   cout <<"Корень уравнения = " << c << endl;
    cout <<"Количество шагов = "<< (q-1) <<endl;
return 0;
}