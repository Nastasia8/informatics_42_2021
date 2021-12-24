#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class Employee // сделано по аналогии с task 8.1
{
	string IFO; // сделано по аналогии с task 8.1
	string post; // сделано по аналогии с task 8.1
	int experience; // сделано по аналогии с task 8.1
	int homeaddress; // сделано по аналогии с task 8.1
	int phonenumber; // сделано по аналогии с task 8.1
	int hours; // сделано по аналогии с task 8.1
    int salary; // сделано по аналогии с task 8.1
    int premy; // сделано по аналогии с task 8.1
public:
    void setEmployee(string IFO, string post, int experience, int homeaddress, int phonenumber, int hours, int salary, int premy) //просмотрено из интернета
    {
        int s; //просмотрено из интернета
        s = salary * hours; //просмотрено из интернета
        if (experience >= 1 && experience < 3) //просмотрено из интернета
            premy = 0.03 * s; //просмотрено из интернета
        else //просмотрено из интернета
        { 
            if (experience >= 3 && experience < 6) //просмотрено из интернета
                premy = 0.05 * s; //просмотрено из интернета
            else //просмотрено из интернета
            {
                if (experience >= 6 && experience < 9) //просмотрено из интернета
                    premy = 0.07 * s; //просмотрено из интернета
                else //просмотрено из интернета
                {
                    if (experience > 10) //просмотрено из интернета
                        premy = 0.13 * s; //просмотрено из интернета
                }
            }
        }
    }
    void getEmployee() //просмотрено из интернета
    {
        cout << IFO << endl; //просмотрено из интернета
        cout << post << endl; //просмотрено из интернета
        cout << "Experience: " << experience << endl; //просмотрено из интернета
        cout << "Home address: " << homeaddress << endl; //просмотрено из интернета
        cout << "Phone number: " << phonenumber << endl; //просмотрено из интернета
        cout << "Hours: " << hours << endl; //просмотрено из интернета
        cout << "Salary: " << salary << endl; //просмотрено из интернета
    }
};

int main()
{
    string IFO; // сделано по аналогии с task 8.1
    string post; // сделано по аналогии с task 8.1
    int experience, homeaddress, phonenumber, hours, salary, premy; // сделано по аналогии с task 8.1
    cout << "Input IFO" << endl; // сделано по аналогии с task 8.1
    cin >> IFO; // сделано по аналогии с task 8.1
    cout << "Input post" << endl; // сделано по аналогии с task 8.1
    cin >> post; // сделано по аналогии с task 8.1
    cout << "Input experience" << endl; // сделано по аналогии с task 8.1
    cin >> experience; // сделано по аналогии с task 8.1
    cout << "Input homeaddress" << endl; // сделано по аналогии с task 8.1
    cin >> homeaddress; // сделано по аналогии с task 8.1
    cout << "Input phonenumber" << endl; // сделано по аналогии с task 8.1
    cin >> phonenumber; // сделано по аналогии с task 8.1
    cout << "Input hours" << endl; // сделано по аналогии с task 8.1
    cin >> hours; // сделано по аналогии с task 8.1
    cout << "Input salary" << endl; // сделано по аналогии с task 8.1
    cin >> salary; // сделано по аналогии с task 8.1
    cout << "Input premy" << endl; // сделано по аналогии с task 8.1
    cin >> premy; // сделано по аналогии с task 8.1

    Employee firstEmployee; // сделано по аналогии с task 8.1
    firstEmployee.setEmployee(IFO, post, experience, homeaddress, phonenumber, hours, salary, premy); // сделано по аналогии с task 8.1
    firstEmployee.getEmployee(); // сделано по аналогии с task 8.1
	return 0;
}
