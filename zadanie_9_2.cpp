#include <iostream>

using namespace std;

class Transport
{
	protected:
		string type_;
		int engine_power_;
		double tax_;
		
		virtual void CalcTax() = 0;
	
	public:
		Transport(string type) { SetType(type); }
		virtual void Show() = 0;
		virtual void SetType(string type) { type_ = type; }
		virtual string GetType() { return type_; }
		virtual double GetTax() { return tax_; }
		virtual void SetEnginePower(int) = 0;
		virtual double GetEnginePower() { return engine_power_; }
};

class Car : public Transport
{
	private:
		int speed_;
		int price_;
		int year_;
		
		void CalcTax() override
		{
			if (engine_power_ <= 100)
			{
				tax_ = Ratio() * 2.5 * engine_power_;
			}
			else if (engine_power_ <= 150)
			{
				tax_ = Ratio() * 3.5 * engine_power_;
			}
			else if (engine_power_ <= 200)
			{
				tax_ = Ratio()* 5 * engine_power_;
			}
			else if (engine_power_ <= 250)
			{
				tax_ = Ratio()* 7.5 * engine_power_;
			}
			else if (engine_power_ > 250)
			{
				tax_ = Ratio() * 15 * engine_power_;
			}
		}
		
		double Ratio()
		{
			if (price_ > 3000000 && price_ <= 5000000)
			{
				if ((2021 - year_) == 0)
				{
					return 1.5;
				}
				if ((2021 - year_) < 3)
				{
					return 1.3;
				}
				if ((2021 - year_) < 4)
				{
					return 1.1;
				}
				else
				{
					return 1;
				}
			}
			if (price_ > 5000000 && price_ <= 10000000)
			{
				if ((2021 - year_) < 6)
				{
					return 2;
				}
				else
				{
					return 1;
				}
			}
			if (price_ > 10000000 && price_ <= 15000000)
			{
				if ((2021 - year_) < 11)
				{
					return 3;
				}
				else
				{
					return 1;
				}
			}
			if (price_ > 15000000)
			{
				if ((2021 - year_) < 21)
				{
					return 3;
				}
				else
				{
					return 1;
				}
			}
		}
		
	public:
		Car(string type, int speed, int price, int year, int engine_power) : Transport(type)
		{
			SetSpeed(speed);
			SetPrice(price);
			SetYear(year);
			SetEnginePower(engine_power);
			CalcTax();
		}
		
		void SetSpeed(int speed)
		{
			if (speed > 0)
			{
				speed_ = speed;
			}
			else
			{
				abort();
			}
		}
		
		int GetSpeed()
		{
			return speed_;
		}
		
		void SetPrice(int price)
		{
			if (price > 0)
			{
				price_ = price;
			}
			else
			{
				abort();
			}
		}
		
		int GetPrice()
		{
			return price_;
		}
		
		void SetYear(int year)
		{
			if (year > 2000)
			{
				year_ = year;
			}
			else
			{
				abort();
			}
		}
		
		int GetYear()
		{
			return year_;
		}
		
		void SetEnginePower(int engine_power) override
		{
			if (engine_power > 0)
			{
				engine_power_ = engine_power;
			}
			else
			{
				abort();
			}
		}
		
		void Show() override
		{
			cout << "Type: " << GetType() << endl;
			cout << "Speed: " << GetSpeed() << "km/h" << endl;
			cout << "Price: " << GetPrice() << "$" << endl;
			cout << "Year: " << GetYear() << endl;
			cout << "Engine power: " << GetEnginePower() << endl;
			cout << "Tax: " << GetTax() << endl;
			cout << "________________" << endl;
		}
};

class Bike : public Transport
{
	private:
		int weight_;
		
		void CalcTax() override
		{
			if (engine_power_ <= 20)
			{
				tax_ = engine_power_;
			}
			else if (engine_power_ <= 35)
			{
				tax_ = 2 * engine_power_;
			}
			else if (engine_power_ > 35)
			{
				tax_ = 5 * engine_power_;
			}
		}
		
	public:
		Bike(string type, int weight, int engine_power) : Transport(type)
		{
			SetWeight(weight);
			SetEnginePower(engine_power);
			CalcTax();
		}
		
		void SetWeight(int weight)
		{
			if (weight > 0)
			{
				weight_ = weight;
			}
			else
			{
				abort();
			}
		}
		
		int GetWeight()
		{
			return weight_;
		}
		
		void SetEnginePower(int engine_power) override
		{
			if (engine_power > 0)
			{
				engine_power_ = engine_power;
			}
			else
			{
				abort();
			}
		}
		
		void Show() override
		{
			cout << "Type: " << GetType() << endl;
			cout << "Weight: " << GetWeight() << "kg" << endl;
			cout << "Engine power: " << GetEnginePower() << endl;
			cout << "Tax: " << GetTax() << endl;
			cout << "________________" << endl;
		}
};

class Bus : public Transport
{
	private:
		int capacity_;
		
		void CalcTax() override
		{
			if (engine_power_ <= 200)
			{
				tax_ = 5 * engine_power_;
			}
			else if (engine_power_ > 200)
			{
				tax_ = 10 * engine_power_;
			}
		}
		
	public:
		Bus(string type, int capacity, int engine_power) : Transport(type)
		{
			SetCapacity(capacity);
			SetEnginePower(engine_power);
			CalcTax();
		}

		void SetCapacity(int capacity)
		{
			if (capacity > 0)
			{
				capacity_ = capacity;
			}
			else
			{
				abort();
			}
		}

		int GetCapacity()
		{
			return capacity_;
		}

		void SetEnginePower(int engine_power) override
		{
			if (engine_power > 0)
			{
				engine_power_ = engine_power;
			}
			else
			{
				abort();
			}
		}
		
		void Show() override
		{
			cout << "Type: " << GetType() << endl;
			cout << "Capacity: " << GetCapacity() << " passengers" << endl;
			cout << "Engine power: " << GetEnginePower() << endl;
			cout << "Tax: " << GetTax() << endl;
			cout << "________________" << endl;
		}
};

class Aircraft : public Transport
{
	private:
		int height_;
		
		void CalcTax() override
		{
			tax_ = 25 * engine_power_;
		}
		
	public:
		Aircraft(string type, int height, int engine_power) : Transport(type)
		{
			SetHeight(height);
			SetEnginePower(engine_power);
			CalcTax();
		}

		void SetHeight(int height)
		{
			if (height > 0)
			{
				height_ = height;
			}
			else
			{
				abort();
			}
		}

		int GetHeight()
		{
			return height_;
		}

		void SetEnginePower(int engine_power) override
		{
			if (engine_power > 0)
			{
				engine_power_ = engine_power;
			}
			else
			{
				abort();
			}
		}
		
		void Show() override
		{
			cout << "Type: " << GetType() << endl;
			cout << "Height: " << GetHeight() << " meters" << endl;
			cout << "Engine power: " << GetEnginePower() << endl;
			cout << "Tax: " << GetTax() << endl;
			cout << "________________" << endl;
		}
};

int main()
{
	Car* lada = new Car("Car", 300, 6000000, 2019, 220);
	lada->Show();
	delete lada;
	
	Bike* yamaha = new Bike("Bike", 100, 30);
	yamaha->Show();
	delete yamaha;
	
	Bus* kamaz = new Bus("Bus", 24, 205);
	kamaz->Show();
	delete kamaz;
	
	Aircraft* plane = new Aircraft("Aircraft", 5, 21000);
	plane->Show();
	delete plane;
	
	return 0;
}
