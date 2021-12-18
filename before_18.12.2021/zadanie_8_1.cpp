#include<iostream>
#include<string>

using namespace std;

class Student
{
	string name;
	int course;
	int group;
	int age;
	
	int check_course(int course)
	{
		if (course > 0)
		{
			return course;
		}
		else
		{
			cout << "You entered incorrect course" << endl;
			abort();
		}
	}
	
	int check_group(int group)
	{
		if (group > 0)
		{
			return group;
		}
		else
		{
			cout << "You entered incorrect group" << endl;
			abort();
		}
	}
	
	int check_age(int age)
	{
		if (age > 0)
		{
			return age;
		}
		else
		{
			cout << "You entered incorrect age" << endl;
			abort();
		}
	}
	
	public:
		
		Student()
		{
			name = "Alexey";
			course = 1;
			group = 42;
			age = 18;
		}
		
		void show();
		
		void set_name(string name) { this->name = name; }
		
		string get_name() { return name; }
		
		void set_course(int course) { this->course = check_course(course); }
		
		int get_course() { return course; }
		
		void set_group(int group) { this->group = check_group(group); }
		
		int get_group() { return group; }
		
		void set_age(int age) { this->age = check_age(age); }
		
		int get_age() { return age; }
};

void Student::show()
{
	cout << "Name: " << get_name() << endl;
	cout << "Course: " << get_course() << endl;
	cout << "Group: " << get_group() << endl;
	cout << "Age: " << get_age() << endl;
}

int main()
{
	Student Test;
	Test.show();
	
	Student Terry;
	Terry.set_name("Terry");
	Terry.set_course(5);
	Terry.set_group(184);
	Terry.set_age(12);
	Terry.show();
	
	Student Davis;
	Davis.set_name("Davis");
	Davis.set_course(0);
	Davis.set_group(616);
	Davis.set_age(48);
	Davis.show();
	
	return 0;
}
