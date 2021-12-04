#include <iostream>
#include <string> //библиотека строгого типа 

using namespace std;

enum CarState
{
	old = 0,
	new_c = 1,
};

class Car
{
	string brand;  //не видно
	string model;
	int year;
	static int k;
	CarState state;

public: //видно

	Car()
	{
		brand = "nisan";
		model = "n";
		year = 2003;
		k++;
		CarState state = old;
	}
	//Car(string b, string m, int y):brand(b), model(m), year(setYear(y)){}

	Car(string brand, string model, int year, CarState state)
	{
		this->brand = brand;
		this->model = model;
		this->year = year;
		this->state = state;
		k++;
	}

	int getYear()
	{
		return year;
	}
	void setYear(int year)
	{
		if (year > 1980 && year < 2022)
		{
			this->year = year;
		}
		else
		{
			year = 0;
		}
	}

	void information()
	{
		cout << "Brand:" << brand << endl;
		cout << "Model:" << model << endl;
		cout << "Year:" << year << endl;
		cout << "State:" << state << endl;
		cout << k << endl;
	}
	int getState()
	{
		return state;
	}
	void setState(CarState state)
	{
		this->state = state;
	}
};

int Car::k = 0;

int main()
{
	Car nisan = Car(); //создаем обьект
	Car bmw("BMW", "XS", 2005, new_c);

	nisan.information();
	bmw.information();
	
	cout << "Year: " << nisan.getYear() << endl;
	nisan.setYear(2000);
	cout << "Year: " << nisan.getYear() << endl;
	nisan.setYear(2021);
	cout <<  "Year: " << nisan.getYear() << endl;
	cout << "State: " << bmw.getState() << endl;
	bmw.setState(old);
	cout << "State: " << bmw.getState() << endl;

	return 0;
}

