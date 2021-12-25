#include <iostream>
#include <string>
using namespace std;

class students {
	
	public:

		void set_name(string student1_name)
		{
			name = student1_name;
		}
		string get_name()
		{
			return name;
		}
		
		
		
		void set_year(string student1_year)
		{
			year = student1_year;
		}
		string get_year()
		{
			return year;
		}
		
		
		
		void set_group(string student1_group)
		{
			group = student1_group;
		}
		string get_group()
		{
			return group;
		}
		
		
		
		void set_age(string student1_age)
		{
			age = student1_age;
		}
		string get_age()
		{
			return age;
		}
		
		
	private:
		string name;
		string year;
		string group;
		string age;
};

int main()
{
	{
	students student1;
	
	
	string name;
	
	cout<<"Full name: ";
	getline(cin,name);
	student1.set_name(name);
	
	
	
	string year;
		
	cout<<"Studying year: ";
	getline(cin,year);
	student1.set_year(year);
	
	
	
	string group;
	
	cout<<"Number of group: ";
	getline(cin,group);
	student1.set_group(group);
	
	
	
	string age;
	cout<<"Student's age: ";
	getline(cin,age);
	student1.set_age(age);
	
	cout<<"\n"<<"Information about student #1 "<<endl;
	
	cout<<"Name of student is "<<student1.get_name()<<endl;
	cout<<"Student's group and year of studying are "<<student1.get_group()<<"-"<<student1.get_year()<<endl;
	cout<<"Student's age is "<<student1.get_age()<<endl;
	}
	
	{
	students student2;
	
	
	string name;
	
	cout<<"\n"<<"Full name: ";
	getline(cin,name);
	student2.set_name(name);
	
	
	
	string year;
		
	cout<<"Studying year: ";
	getline(cin,year);
	student2.set_year(year);
	
	
	
	string group;
	
	cout<<"Number of group: ";
	getline(cin,group);
	student2.set_group(group);
	
	
	
	string age;
	cout<<"Student's age: ";
	getline(cin,age);
	student2.set_age(age);
	
	cout<<"\n"<<"Information about student #2 "<<endl;
	
	cout<<"Name of student is "<<student2.get_name()<<endl;
	cout<<"Student's group and year of studying are "<<student2.get_group()<<"-"<<student2.get_year()<<endl;
	cout<<"Student's age is "<<student2.get_age()<<endl;
	}
	
	{
	students student3;
	
	
	string name;
	
	cout<<"\n"<<"Full name: ";
	getline(cin,name);
	student3.set_name(name);
	
	
	
	string year;
		
	cout<<"Studying year: ";
	getline(cin,year);
	student3.set_year(year);
	
	
	
	string group;
	
	cout<<"Number of group: ";
	getline(cin,group);
	student3.set_group(group);
	
	
	
	string age;
	cout<<"Student's age: ";
	getline(cin,age);
	student3.set_age(age);
	
	cout<<"\n"<<"Information about student #3 "<<endl;
	
	cout<<"Name of student is "<<student3.get_name()<<endl;
	cout<<"Student's group and year of studying are "<<student3.get_group()<<"-"<<student3.get_year()<<endl;
	cout<<"Student's age is "<<student3.get_age()<<endl;
	}
}
