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
		Pendulum(string type) { set_type(type); }	
		void set_type(string type) { type_ = type; }
		string get_type() { return type_; }
		
		virtual void ShowType() 
		{ 
			cout << "Type: " << get_type() << endl; 
			cout << "Frequency: " << Frequency() << endl;
			cout << "Period " << Period() << endl;
		}
		virtual float Frequency() { return frequency_; }
		virtual float Period() { return period_; }
};

class MathematicalPendulum : public Pendulum
{
	private:
		int len_;
		
	public:
		MathematicalPendulum(string type, int len) : Pendulum(type) { set_len(len); }
		void set_len(int len) { len_ = len; }
		
		float Frequency() override
		{
			frequency_ = sqrt(G/len_);
			return frequency_;
		}
		
		float Period() override
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
		
		void set_mas(float mas) { mas_ = mas; }
		void set_stiffness(float stiffness) { stiffness_ = stiffness; }
		
		float Frequency() override
		{
			frequency_ = sqrt(stiffness_ / mas_);
			return frequency_;
		}
		
		float Period() override
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
		
		void set_mas(float mas) { mas_ = mas; }
		void set_eps(float eps) { eps_ = eps; }	
		void set_l(float l) { l_ = l; }

		float Frequency() override
		{
			frequency_ = sqrt((mas_ * G * eps_) / l_);
			return frequency_;
		}
		
		float Period() override
		{
			period_ = 2 * PI * sqrt(l_ / (mas_ * G * eps_));
			return period_;
		}
};

int main()
{
	MathematicalPendulum* pendulum = new MathematicalPendulum("Mathematical", 10);
	pendulum->ShowType();
	delete pendulum;
	
	SpringPendulum* pendulum1 = new SpringPendulum("Spring", 10, 0.1);
	pendulum1->ShowType();
	delete pendulum1;
	
	PhysicalPendulum* pendulum2 = new PhysicalPendulum("Physical", 10, 0.1, 1);
	pendulum2->ShowType();
	delete pendulum2;
	
	return 0;
}
