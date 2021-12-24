include <iostream> // Стандартная библиотека
#include <string> //Библиотека для заголовочный файлов 
#include <cmath> //Библиотека для вычислений 

using namespace std; // Обявление пространства имён std
//Взяла код у Кати и закомментировала, так как я не умею распределять время и не успею сделать сама, добавила небольшое изменение
class Pendulum // Создание общего класса
{
private:
	virtual double frequency() = 0;// Объявление переменной частоты, double вмещает больше, чем float, обнуление идёт для правильное подсчёта формул, virtual переопределяет в др классах
	virtual double period() = 0; // Объявление переменной периода
	virtual void type() = 0; // Объявление переменной тип, void - общий указатель 
};
class Physical :public Pendulum // Подкласс Физический маятник
{
	double m; // Объявление переменных m, I, g, R для дальнейшего подсчёта формулы 
	double I;
	double g;
	double R;
public:
	Physical(double m, double g, double I, double R)
	{
		this->m = m; // Отслеживание какой объект его вызвал 
		this->I = I;
		this->g = g;
		this->R = R;

	}
	double frequency() override
	{
		return sqrt((m * g * R) / I); // Формула подсчёта частоты
	}
	double period() override
	{
		return 2 * 3, 14 * sqrt(I / (m * g * R)); // Формула подсчёта периода
	}
	void type() override
	{
		cout << " Physical Pendulum" << endl; // Вовод типа
	}
};
class Mathematics :public Pendulum // Подкласс Математический маятник
{
	double g; // Объявление переменной g
	double l; // Объявление переменной l
public:
	double getL(double l)
	{
		if (l == 0)  // если l будет равна 0, то выводится 1, иначе определяется с помощью ввода
		{
			cout << "l = ";
			cin >> l;
		}
		cout << endl;
		return l; // Вывод l
	}
	Mathematics(double g, double l)
	{
		this->g = g; // Отслеживание какой объект его вызвал 
		this->l = getL(l); // Ожидание ввода пользователя 
	}
	double frequency() override
	{
		return sqrt(g / l); // Формула подсчёта частоты
	}
	double period() override
	{
		return 2 * 3, 14 * sqrt(l / g); // Формула подсчёта периода
	}
	void type() override
	{
		cout << " Mathematical Pendulum" << endl; // Вовод типа
	}
};
class Spring :public Pendulum // Подкласс Пружинный маятник
{
	double m; // Объявление переменной m, k
	double k;
public:
	double getM(double m)
	{
		if (m == 0) // если m будет равна 0, то выводится 1, иначе определяется с помощью ввода
		{
			cout << " m = ";
			cin >> m;
		}
		cout << endl;
		return m; // Вывод m
	}
	double getK(double k)
	{
		if (k == 0) // если k будет равна 0, то выводится 1, иначе определяется с помощью ввода
		{
			cout << "k = ";
			cin >> k;
		}
		cout << endl;
		return k; // Вывод k
	}
	Spring(double m, double k)
	{
		this->m = getM(m); // Отслеживание какой объект его вызвал 
		this->k = getK(k);
	}
	double frequency() override
	{
		return sqrt(k / m); // Формула подсчёта частоты
	}
	double period() override
	{
		return 2 * 3, 14 * sqrt(m / k); // Формула подсчёта периода
	}
	void type() override
	{
		cout << " Spring pendulum" << endl; // Вовод типа
	}
};

int main()
{

	Physical phy(23, 15, 10, 12); // Физический маятник с заданными значениями
	phy.type();
	cout << " Cyclic frequency = " << phy.frequency() << "  Oscillation period =  " << phy.period() << endl; // Вывод подсчётов 
	cout << endl;

	cout << "Enter length for mathematics pendulum:" <<endl; // Вывод "Введите длину математического маятника"
	Mathematics math(10, 0); // Математический маятник с заданными значениями
	math.type();
	cout << " Cyclic frequency = " << math.frequency() << "  Oscillation period =  " << math.period() << endl; // Вывод подсчётов 
	cout << endl;

	cout << "Enter mass and stiffness coefficient for spring pendulum:" <<endl; // Вывод "Введите m и k маятника"
	Spring s(0, 0); // Пружинный маятник с заданными значениями
	s.type();
	cout << " Cyclic frequency = " << s.frequency() << "  Oscillation period =  " << s.period() << endl; // Вывод подсчётов 
	cout << endl;
}
