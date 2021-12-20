#include <iostream>
#include <string>
using namespace std;

class Employee{

	private:
		string name;
		int experience;
		string position;
		string home_address;
		string phone_number;
		int working_hours;
		int cost_hour;
		int salary;
		int bonus;



	public:

		void set_name(string employee_name)
		{
			name = employee_name;
		}
		string get_name()
		{
			return name;
		}
		

		
		void set_experience(int employee_experience)
		{
			experience = employee_experience;
		}
		int get_experience()
		{
			return experience;
		}


		void set_position(string employee_position)
		{
			position = employee_position;
		}
		string get_position()
		{
			return position;
		}
		

		void set_home_address(string employee_home_address)
		{
			home_address = employee_home_address;
		}
		string get_home_address()
		{
			return home_address;
		}


		void set_phone_number(string employee_phone_number)
		{
			phone_number = employee_phone_number;
		}
		string get_phone_number()
		{
			return phone_number;
		}
		

		void set_working_hours(int employee_working_hours)
		{
			working_hours = employee_working_hours;
		}
		int get_working_hours()
		{
			return working_hours;
		}
		

		void set_cost_hour(int employee_cost_hour)
		{
			cost_hour = employee_cost_hour;
		}
		int get_cost_hour()
		{
			return cost_hour;
		}
		
		
		int find_salary()
		{
			salary=cost_hour*working_hours;
			return salary;
		}
		
		int cash_bonus()
		{
			if (experience>=1 && experience<3)
			{
				bonus=salary+salary*1.03;
			}
			
			else if (experience>=3 && experience<=6)
				{
				bonus=salary+salary*1.05;
				}
				
			else if (experience>=6 && experience <=9)
				{
					bonus=salary+salary*1.07;
				}
				
			else if (experience>=10)
				{
					bonus=salary+salary*1.13;
				}
		    return bonus;
		}

};

int main(){
	Employee Worker;
	
	
	string name;
	cout<<"Full name: ";
	getline(cin,name);
	Worker.set_name(name);
	
	
	int experience;
	cout<<"Experience (in years): ";
	cin>>experience;
	Worker.set_experience(experience);
	
	
	string position;
	cout<<"Position: ";
	cin>>position;
	Worker.set_position(position);
	
	
	string home_address;
	cout<<"Home address: ";
	cin>>home_address;
	Worker.set_home_address(home_address);	


	string phone_number;
	cout<<"Phone number: ";
	cin>>phone_number;
	Worker.set_phone_number(phone_number);
	
	
	int working_hours;
	cout<<"Working hours: ";
	cin>>working_hours;
	Worker.set_working_hours(working_hours);
	
	
	int cost_hour;
	cout<<"Cost/hour: ";
	cin>>cost_hour;
	Worker.set_cost_hour(cost_hour);
	
	cout<<"\n"<<"Full Information"<<endl;
	
	cout<<"Name of Worker is "<<Worker.get_name()<<endl;
	cout<<"Experience of Worker is "<<Worker.get_experience()<<endl;
	cout<<"Position of Worker is "<<Worker.get_position()<<endl;
    cout<<"Home address of Worker is "<<Worker.get_home_address()<<endl;
    cout<<"Phone number of Worker is "<<Worker.get_phone_number()<<endl;
	cout<<"Working hours of Worker are "<<Worker.get_working_hours()<<endl;
	cout<<"Cost/hour is "<<Worker.get_cost_hour()<<endl;
	
	cout<<"\nSalary of Worker is "<<Worker.find_salary()<<endl;
	cout<<"Cash bonus is "<<Worker.cash_bonus()<<endl;
}
