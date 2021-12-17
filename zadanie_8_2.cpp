#include<iostream>
#include<string>
#include<fstream>

using namespace std;

class Employee
{
	string name;
	int experience;
	string post;
	string home_adress;
	string phone_number;
	int hours;
	int cost;
	
	int check_experience(int experience)
	{
		if (experience > 0)
		{
			return experience;
		}
		else
		{
			cout << "Incorrect input" << endl;
			abort();
		}
	}
	
	int check_hours(int hours)
	{
		if (hours >= 0)
		{
			return hours;
		}
		else
		{
			cout << "Incorrect input" << endl;
			abort();
		}
	}
	
	int check_cost(int cost)
	{
		if (cost > 0)
		{
			return cost;
		}
		else
		{
			cout << "Incorrect input" << endl;
			abort();
		}
	}
	
	int salary(int cost, int hours)
	{
		return cost * hours;
	}
	
	float bonus(int experience)
	{
		if (experience < 3)
			return 0.03;
		if (experience < 6)
			return 0.05;
		if (experience <= 9)
			return 0.07;
		if (experience >= 10)
			return 0.13;
	}
	
	public:
		
		Employee(string name, int experience, string post, string home_adress, string phone_number, int hours, int cost)
		{
			this->name = name;
			this->experience = check_experience(experience);
			this->post = post;
			this->home_adress = home_adress;
			this->phone_number = phone_number;
			this->hours = check_hours(hours);
			this->cost = check_cost(cost);
		}
		
		void show()
		{
			cout << "________________" << endl;
			cout << "Name: " << name << endl;
			cout << "Experience: " << experience << endl;
			cout << "Post: " << post << endl;
			cout << "Home adress: " << home_adress << endl;
			cout << "Phone number: " << phone_number << endl;
			cout << "Hours: " << hours << endl;
			cout << "Cost: " << cost << endl;
			cout << "Salary: " << salary(cost, hours) << endl;
			cout << "Bonus: " << bonus(experience) * salary(cost, hours) << endl;
			cout << "________________" << endl;
		}
		
		void write()
		{
			string path = name + ".txt";
			
			ofstream fout;	
			fout.open(path);
			
			fout << "Name: " << name << endl;
			fout << "Experience: " << experience << endl;
			fout << "Post: " << post << endl;
			fout << "Home adress: " << home_adress << endl;
			fout << "Phone number: " << phone_number << endl;
			fout << "Hours: " << hours << endl;
			fout << "Cost: " << cost << endl;
			fout << "Salary: " << salary(cost, hours) << endl;
			fout << "Bonus: " << bonus(experience) * salary(cost, hours) << endl;
			
			fout.close();
		}
};

int main()
{	
	Employee worker1("Bob", 12, "Engineer", "Ivanovo", "88005553535", 7, 5);
	Employee worker2("Tim", 3, "Engineer", "Ivanovo", "88005553535", 4, 1);
	
	worker1.write();
	worker1.show();
	
	worker2.write();
	worker2.show();
	
	return 0;
}
