#include <iostream>
#include <fstream>

class Employee{
private:
    std::string name;
    int work_exp;
    std::string post;
    std::string address;
    int hours_work;
    int hour_cost;
public:
    Employee(std::string input_name , int input_we , std::string input_post , std::string input_address , int input_hw , int input_hc){
        name = input_name;
        work_exp = input_we;
        post = input_post;
        address = input_address;
        hours_work = input_hw;
        hour_cost = input_hc;
    };

    int GetWages(){
        return hours_work*hour_cost;
    }

    float GetBonus(){
        if (work_exp >= 1){
            if (work_exp >= 3){
                if (work_exp >= 6){
                    if (work_exp >= 10){
                    return (float)hours_work*hour_cost * 13/100;
                    }
                return (float)hours_work*hour_cost * 7/100;
                }
            return (float)hours_work*hour_cost * 5/100;
            }
        return (float)hours_work*hour_cost * 3/100;
        }
        return 0;
    }

    void GetInfo(){
        std::cout << "Employee information:" << std::endl;
        std::cout << "Name: " << name << std::endl;
        std::cout << "Work experience: " << work_exp << " years" << std::endl;
        std::cout << "Hold the position of " << post << std::endl;
        std::cout << "Resident at " << address << std::endl;
        std::cout << "Worked hours: " << hours_work << " hours" << std::endl;
        std::cout << "Hour cost: " << hour_cost << " dollars" << std::endl;
        std::cout << "With wage " << GetWages() << " dollars and bonus " << GetBonus() << " dollars" << std::endl;
    }
    void WriteFile(){
        std::ofstream write;
        write.open(name + ".txt");
        write << "Name: " << name << std::endl;
        write << "Work experience: " << work_exp << " years" << std::endl;
        write << "Hold the position of " << post << std::endl;
        write << "Resident at " << address << std::endl;
        write << "Worked hours: " << hours_work << " hours" << std::endl;
        write << "Hour cost: " << hour_cost << " dollars" << std::endl;
        write << "With wage " << GetWages() << " dollars and bonus " << GetBonus() << " dollars" << std::endl;
        write.close();
        std::cout << "File successfully created" << std::endl;
    }
};


int main(int argc, char const *argv[]){
    std::string name = "Francis Scott Fitzgerald";
    int work_exp = 20;
    std::string post = "writer";
    std::string address = "Ivanovo, Lenin's avenue, h. 257, a. 17";
    int hours_work = 140;
    int hour_cost = 10;
    Employee first_worker(name, work_exp, post, address, hours_work, hour_cost);

    first_worker.GetInfo();

    std::string check;
    std::cout << "Do you want to create file with this information? \nEnter y(yes)/any other key(no): " ;
    std::cin >> check;
    if (check == "y"){
        first_worker.WriteFile();
    }
    return 0;
}
