#include <iostream>
#include <string>
#include <fstream> // загрузка библиотеки для работы с файлами

using namespace std;

class Employee
{
private:
	string full_name;
	string position;
	string home_address;
	int experience;
	string phone_number;
	int number_of_hours_worked;
	int cost_of_an_hour_of_work;

	string vfull_name(string full_name)
	{
		if (full_name == " ")
		{
			cout << "Full_name = ";
			getline(cin, full_name);
		}
		return full_name;
	}

	string vposition(string position)
	{
		if (position == " ")
		{
			cout << "Position = ";
			cin >> position;
		}
		return position;
	}

	string vhome_address(string home_address)
	{
		if (home_address == " ")
		{
			cout << "Home_address= ";
			getline(cin, home_address);

		}
		return home_address;
	}

	int vexperience(int experience)
	{
		if (experience == 0)
		{
			cout << "Experience = ";
			cin >> experience;
		}
		return experience;
	}

	string vphone_number(string phone_number)
	{
		if (phone_number == "")
		{
			cout << "Phone_number ";
			cin >> phone_number;
		}
		return phone_number;
	}

	int vnumber_of_hours_worked(int number_of_hours_worked)
	{
		if (number_of_hours_worked == 0)
		{
			cout << "Number_of_hours_worked = ";
			cin >> number_of_hours_worked;
		}
		return number_of_hours_worked;
	}

	int vcost_of_an_hour_of_work(int cost_of_an_hour_of_work)
	{
		if (cost_of_an_hour_of_work == 0)
		{
			cout << "cost_of_an_hour_of_work = " << endl;
			cin >> cost_of_an_hour_of_work;
		}
		return cost_of_an_hour_of_work;
	}
public:
	Employee() : full_name(""), position(""), home_address(""), experience(), phone_number(""), number_of_hours_worked(), cost_of_an_hour_of_work() {};
	Employee(string full_name, string position, string home_address, int experience, string phone_number, int number_of_hours_worked, int cost_of_an_hour_of_work)
	{
		this->full_name = vfull_name(full_name);
		this->position = vposition(position);
		this->home_address = vhome_address(home_address);
		this->experience = vexperience(experience);
		this->phone_number = vphone_number(phone_number);
		this->number_of_hours_worked = vnumber_of_hours_worked(number_of_hours_worked);
		this->cost_of_an_hour_of_work = vcost_of_an_hour_of_work(cost_of_an_hour_of_work);
	}
	void show()
	{
		string soglasie;
		cout << "Full name " << full_name << endl;
		cout << "Position " << position << endl;
		cout << "Home address " << home_address << endl;
		cout << "Experience " << experience << endl;
		cout << "Phone number " << phone_number << endl;
		cout << "Number of hours worked " << number_of_hours_worked  << endl;
		cout << "Cost of an hour of work " << cost_of_an_hour_of_work << endl;
		cout << "Wages " << wages() << endl;
		cout << "Bonus " << bonus() << endl;
		cout << "Create file with this information? \nEnter yes/any other key(no): ";
		cin >> soglasie;
		if (soglasie == "yes")
		{
			ofstream info;
			info.open(full_name + ".txt"); // создаёт или открывает файл
			info << "Full name " << full_name << endl;
			info << "Position " << position << endl;
			info << "Home address " << home_address << endl;
			info << "Experience " << experience << endl;
			info << "Phone number " << phone_number << endl;
			info << "Number of hours worked " << number_of_hours_worked << endl;
			info << "Cost of an hour of work " << cost_of_an_hour_of_work << endl;
			info << "Wages " << wages() << endl;
			info << "Bonus " << bonus() << endl;
			info.close();
		}
	}
	int wages()
	{
		return number_of_hours_worked * cost_of_an_hour_of_work;
	}
	float bonus()
	{
		if (experience >= 1)
		{
			if (experience >= 3)
			{
				if (experience >= 6)
				{
					if (experience >= 10)
					{
						return (float)number_of_hours_worked * cost_of_an_hour_of_work*13/100;
					}
					return (float)number_of_hours_worked * cost_of_an_hour_of_work * 7 / 100;
				}
				return (float)number_of_hours_worked * cost_of_an_hour_of_work * 5 / 100;
			}
			return (float)number_of_hours_worked * cost_of_an_hour_of_work * 3 / 100;
		}
	}
};
int main()
{
	Employee One;
	Employee Two("Veselov Oleg Borisovich", "Plumber", "Moscow, Leninsky prospect, building 5, apartment 16", 5, "+ 79883275603", 956, 300);
	Employee Three("Smirnov Ivan Olegovich", "Driver", "Ivanovo, Thunderbolt street, building 17, apartment 83 ",13, "+ 79998235625", 3460, 380);
	One.show();
	Two.show();
	Three.show();

	return 0;
}
// помогал Евгений Смуров с инициализацией полей класса
