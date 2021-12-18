#include <iostream>
#include <math.h>
#include <string>

using namespace std;

const float PI = 3.14;
const float G = 10;

class Pendulum
{	
	protected:		
		string type_;
		float frequency_;
		float period_;
		
	public:
		
		Pendulum(string type)
		{
			set_type(type);
		}
		
		void set_type(string type)
		{
			type_ = type;
		}
		
		string get_type()
		{
			return type_;
		}
		
		void show_type()
		{
			cout << "Type: " << get_type() << endl;
			cout << "Frequency: " << Frequency() << endl;
			cout << "Period " << Period() << endl;
		}
		
		float Frequency()
		{
			return frequency_;
		}
		
		float Period()
		{
			return period_;
		}
};

class MathematicalPendulum : public Pendulum
{
	private:
		int len_;
	
	public:
		
		MathematicalPendulum(string type, int len) : Pendulum(type)
		{
			set_len(len);
		}
		
		void set_len(int len)
		{
			len_ = len;
		}	
		
		void show()
		{
			cout << "Type: " << get_type() << endl;
			cout << "Frequency: " << Frequency() << endl;
			cout << "Period " << Period() << endl;
		}
		
		float Frequency()
		{
			frequency_ = sqrt(G/len_);
			return frequency_;
		}
		
		float Period()
		{
			period_ = 2 * PI * sqrt(len_/G);
			return period_;
		}
};

class SpringPendulum : public Pendulum
{
	private:
		float mas_;
		float stiffness_;
	
	public:
		
		SpringPendulum(string type, float mas, float stiffness) : Pendulum(type)
		{
			set_mas(mas);
			set_stiffness(stiffness);
		}
		
		void set_mas(float mas)
		{
			mas_ = mas;
		}
		
		void set_stiffness(float stiffness)
		{
			stiffness_ = stiffness;
		}
		
		void show()
		{
			cout << "Type: " << get_type() << endl;
			cout << "Frequency: " << Frequency() << endl;
			cout << "Period " << Period() << endl;
		}
		
		float Frequency()
		{
			frequency_ = sqrt(stiffness_ / mas_);
			return frequency_;
		}
		
		float Period()
		{
			period_ = 2 * PI * sqrt(mas_ / stiffness_);
			return period_;
		}
};

class PhysicalPendulum : public Pendulum
{
	private:
		float mas_;
		float eps_;
		float l_;
	
	public:
		
		PhysicalPendulum(string type, float mas, float eps, float l) : Pendulum(type)
		{
			set_mas(mas);
			set_eps(eps);
			set_l(l);
		}
		
		void set_mas(float mas)
		{
			mas_ = mas;
		}
		
		void set_eps(float eps)
		{
			eps_ = eps;
		}
		
		void set_l(float l)
		{
			l_ = l;
		}
		
		void show()
		{
			cout << "Type: " << get_type() << endl;
			cout << "Frequency: " << Frequency() << endl;
			cout << "Period " << Period() << endl;
		}
		
		float Frequency()
		{
			frequency_ = sqrt((mas_ * G * eps_) / l_);
			return frequency_;
		}
		
		float Period()
		{
			period_ = 2 * PI * sqrt(l_ / (mas_ * G * eps_));
			return period_;
		}
};

int main()
{
	MathematicalPendulum* pendulum = new MathematicalPendulum("Mathematical", 10);
	pendulum->show();
	delete pendulum;
	
	SpringPendulum* pendulum1 = new SpringPendulum("Spring", 10, 0.1);
	pendulum1->show();
	delete pendulum1;
	
	PhysicalPendulum* pendulum2 = new PhysicalPendulum("Physical", 10, 0.1, 0.5);
	pendulum2->show();
	delete pendulum2;
	
	return 0;
}