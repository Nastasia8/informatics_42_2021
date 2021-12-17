#include<iostream>
#include<string>

using namespace std;

enum CarState { old, new_c };

class Car
{
	string brand;
	string model;
	int year;
	CarState state;
	
	public:
		
		static int k;

		Car():brand("Lada"), model("Calina"), year(2003), state(old) {k++;}
		
		Car(string b, string m, int y, CarState s):brand(b), model(m), year(y), state(s) {k++;}
		
		void set_year(int year)
		{
			if (year > 0)
			{
				this->year = year;
			}
			else
			{
				this->year = 0;
			}
		}
		
		int get_year()
		{
			return year;
		}
		
		void info()
		{
			cout << "________________________" << endl;
			cout << "Brand: " << brand << endl;
			cout << "Model: " << model << endl;
			cout << "Year: " << year << endl;
			cout << "State: " << state << endl;
			cout << "________________________" << endl;
		}
		
		CarState get_state()
		{
			return state;
		}
		
		void set_state(CarState state)
		{
			this->state = state;
		}
};

int Car::k = 0;

int main()
{
	Car mclaren;
	Car mazzerati("Audi", "X5", 1999, new_c);
	Car rollce("Iphone", "XR", 1999, new_c);
	rollce.set_year(5);
	rollce.set_state(old);
	rollce.info();
	cout << Car::k << endl;
	
	return 0;
}
