#include <iostream>
using namespace std;

class Transport
{
protected:
	string brand;
	string markaa;
	int horsepower = 0;
	float mileage_in_year = 0;
	float tax_rate = 1;
	float months_of_operation = 12;

public:
	virtual void ShowInfo() = 0;
	virtual float GetNalog() = 0;
	virtual void GetInfo() = 0;
};


class Car : public Transport
{
private:
	float price = 0;
	float increasing_rate = 1.0;
public:
	void GetInfo() override
	{
		cout << "Enter brand" << endl; cin >> this->brand;
		cout << "Enter model" << endl; cin >> this->markaa;
		cout << "Enter price" << endl; cin >> this->price;
		cout << "Enter horsepower" << endl; cin >> this->horsepower;
		cout << "Enter mileage (in years)" << endl; cin >> this->mileage_in_year;
		cout << "Enter months of operation (in a year)" << endl; cin >> this->months_of_operation;

	}
	void ShowInfo() override
	{
		cout << "Brand is " << this->brand << endl;
		cout << "Model is " << this->markaa << endl;
		cout << "Price " << this->price << endl;
		cout << "Horsepower " << this->horsepower << endl;
		cout << "Mileage (in years) " << this->mileage_in_year << endl;
		cout << "Months of operation (in a year) " << this->months_of_operation << endl;
		cout << "Nalog " << GetNalog() << endl;
		cout << "increasing rate " << this->increasing_rate << endl << endl;
	}
	float GetNalog() override
	{
		this->months_of_operation /= 12;

		tax_rate_again:
			if (horsepower <= 100)
			{
				this->tax_rate = 10;
				//10
			}
			else if (horsepower <= 150 && horsepower > 100)
			{
				this->tax_rate = 20;
				//20
			}
			else if (horsepower <= 200 && horsepower > 150)
			{
				this->tax_rate = 35;
				//35
			}
			else if (horsepower <= 250 && horsepower > 200)
			{
				this->tax_rate = 60;
				//60
			}
			else if (horsepower > 200)
			{
				this->tax_rate = 120;
				//120
			}
			else
			{
				cout << "Enter correct horsepower: ";
				cin >> this->horsepower;
				goto tax_rate_again;

			}

		if (price > 3000000)
		{
			if (price > 3000000 && price <= 5000000 && mileage_in_year >= 2 && mileage_in_year < 3)
			{
				increasing_rate = 1.1;
				//1.1
			}
			else if (price > 3000000 && price <= 5000000 && mileage_in_year >= 1 && mileage_in_year < 2)
			{
				increasing_rate = 1.3;
				//1.3
			}
			else if (price > 3000000 && price <= 5000000 && mileage_in_year < 1)
			{
				increasing_rate = 1.5;
				//1.5
			}
			else if (price > 5000000 && price <= 10000000 && mileage_in_year <= 5)
			{
				increasing_rate = 2;
				//2
			}
			else if (price > 10000000 && price <= 15000000 && mileage_in_year >= 10)
			{
				increasing_rate = 3;
				//3
			}
			else if (price > 15000000 && mileage_in_year >= 20)
			{
				increasing_rate = 3;
				//3
			}
		}
		else 
		{
			increasing_rate = 1.0;
		}

		return (this->tax_rate * this->horsepower * this->months_of_operation  * this->increasing_rate);
	}
};

class Bus : public Transport
{
private:
	int number_of_seats;
public:
	void GetInfo() override
	{
		cout << "Enter brand" << endl; cin >> this->brand;
		cout << "Enter model" << endl; cin >> this->markaa;
		cout << "Enter the number of seats" << endl; cin >> this->number_of_seats;
		cout << "Enter horsepower" << endl; cin >> this->horsepower;
		cout << "Enter mileage (in years)" << endl; cin >> this->mileage_in_year;
		cout << "Enter months of operation (in a year)" << endl; cin >> this->months_of_operation;

	}
	void ShowInfo() override
	{
		cout << "Brand is " << this->brand << endl;
		cout << "Model id " << this->markaa << endl;
		cout << "Number of seats " << this->number_of_seats << endl;
		cout << "Horsepower " << this->horsepower << endl;
		cout << "Mileage (in years) " << this->mileage_in_year << endl;
		cout << "Months of operation (in a year) " << this->months_of_operation << endl;
		cout << "Nalog " << GetNalog() << endl << endl;
	}
	float GetNalog() override
	{
		this->months_of_operation /= 12;

		if (this->mileage_in_year <= 5)
		{
			if (this->horsepower <= 200)
			{
				//44.4
				this->tax_rate = 44.4;
			}
			else if (this->horsepower > 200)
			{
				//33.6
				this->tax_rate = 33.6;
			}
		}
		else if (this->mileage_in_year > 5)
		{
			if (this->horsepower <= 200)
			{
				//50
				this->tax_rate = 50;
			}
			else if (this->horsepower > 200)
			{
				//40.3
				this->tax_rate = 40.3;
			}
		}

		return (this->tax_rate * this->horsepower * this->months_of_operation);
	}
};

class Airplane : public Transport
{
private:
	string typespeed;
public:
	void GetInfo() override
	{
		cout << "Enter brand" << endl; cin >> this->brand;
		cout << "Enter model" << endl; cin >> this->markaa;
		cout << "Enter the type of speed\n 1. subsonin\n 2. transonic\n 3. supersonic\n 4. hypersonic\n "; cin >> typespeed;
		cout << "Enter horsepower" << endl; cin >> this->horsepower;
		cout << "Enter mileage (in years)" << endl; cin >> this->mileage_in_year;
		cout << "Enter months of operation (in a year)" << endl; cin >> this->months_of_operation;

	}
	void ShowInfo() override
	{
		cout << "Brand is " << this->brand << endl;
		cout << "Model id " << this->markaa << endl;
		cout << "Type of speed " << endl;
		if (typespeed == "1" || typespeed == "subsonin")
		{
			cout << "subsonin" << endl;
		}
		else if (typespeed == "2" || typespeed == "transonic")
		{
			cout << "transonic" << endl;
		}
		else if (typespeed == "3" || typespeed == "supersonic")
		{
			cout << "supersonic" << endl;
		}
		else if (typespeed == "4" || typespeed == "hypersonic")
		{
			cout << "hypersonic" << endl;
		}
		else
		{
			cout << "Incorrect speed type introduced" << endl;
		}
		cout << "Horsepower " << this->horsepower << endl;
		cout << "Mileage (in years) " << this->mileage_in_year << endl;
		cout << "Months of operation (in a year) " << this->months_of_operation << endl;
		cout << "Nalog " << GetNalog() << endl << endl;
	}
	float GetNalog() override
	{
		this->months_of_operation /= 12;
		this->tax_rate = 100;

		return (this->tax_rate * this->horsepower * this->months_of_operation);
	}
};

class Motorcycle : public Transport
{
private:
	string motorcycle_type;
public:
	void GetInfo() override
	{
		cout << "Enter brand" << endl; cin >> this->brand;
		cout << "Enter model" << endl; cin >> this->markaa;
		cout << "Enter type:\n 1. motorcycle\n 2. moped" << endl; cin >> this->motorcycle_type;
		cout << "Enter horsepower" << endl; cin >> this->horsepower;
		cout << "Enter mileage (in years)" << endl; cin >> this->mileage_in_year;
		cout << "Enter months of operation (in a year)" << endl; cin >> this->months_of_operation;

	}
	void ShowInfo() override
	{
		cout << "Brand is " << this->brand << endl;
		cout << "Model id " << this->markaa << endl;
		if (motorcycle_type == "1" || motorcycle_type == "motorcycle")
		{
			cout << "motorcycle" << endl;
		}
		else if (motorcycle_type == "2" || motorcycle_type == "moped")
		{
			cout << "moped" << endl;
		}
		else
		{
			cout << "Incorrect type introduced" << endl;
		}
		cout << "Horsepower " << this->horsepower << endl;
		cout << "Mileage (in years) " << this->mileage_in_year << endl;
		cout << "Months of operation (in a year) " << this->months_of_operation << endl;
		cout << "Nalog " << GetNalog() << endl << endl;
	}
	float GetNalog() override
	{
		this->months_of_operation /= 12;
		
		if (this->horsepower <= 20)
		{
			//4.5
			this->tax_rate = 4.5;
		}
		else if (this->horsepower > 20 && this->horsepower <= 35)
		{
			//11
			this->tax_rate = 11;
		}
		else if (this->horsepower > 35)
		{
			//15
			this->tax_rate = 15;
		}

		return (this->tax_rate * this->horsepower * this->months_of_operation);
	}
};

int main()
{
	Car BMW;
	BMW.GetInfo();
	BMW.ShowInfo();
	
	Bus MSD;
	MSD.GetInfo();
	MSD.ShowInfo();
		
	Airplane one;
	one.GetInfo();
	one.ShowInfo();
	
	Motorcycle YM;
	YM.GetInfo();
	YM.ShowInfo();
    
}

