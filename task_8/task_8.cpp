#include <iostream>
#include <limits>
void checkIn(int &check);

enum CarState{old = 0, new_c = 1};

class Car
{
private:
    std::string brand;
    std::string model;
    int year;
    CarState state;
    static int count;
public:
    Car():brand("Toyota"),model("Supra"),year(1997),state(new_c){count++;};
    Car(std::string input_brand, std::string input_model){
        brand = input_brand;
        model = input_model;
        count++;
    };

    int GetYear(){
        return year;
    }
    void SetYear(){
        int input;
        std::cout << "Enter a year of car: ";
        checkIn(input);
        year = input;
    }

    int GetState(){
        return state;
    }
    void SetState(){
        std::string input;
            while (true){
            std::cout << "Enter old or new car: ";
            std::cin >> input;
            if(input == "old" || input == "new"){
                if(input == "old" ){
                    state = old;
                }
                else{
                    state = new_c;
                }
                break;            
            }
            else{
                std::cout << "Enter old or new!" << std::endl;
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            }
        }
    }

    void Show(){
    std::string buffer = (state == old) ? "old car" : "new car";
    std::cout << "You holding in garage " << brand << " " << model << " " << year << " this is the " << buffer << std::endl;
    }

    void PrintCount(){
        std::cout << "There are " << Car::count << " cars in your garage" << std::endl;
    }

};

int Car::count = 0;

int main(int argc, char const *argv[]){
    Car first;
    std::string input_brand;
    std::string input_model;
    std::cout << "Enter a brand of car: ";
    std::cin >> input_brand;
    std::cout << "Enter a model of car: ";
    std::cin >> input_model;
    Car second(input_brand, input_model);
    second.SetYear();
    second.SetState();
    std::cout << "" << std::endl;
    first.Show();
    std::cout << "" << std::endl;
    second.Show();
    std::cout << "" << std::endl;
    second.PrintCount();

    return 0;
}

void checkIn(int &check){
    std::string buffer;
    while (true){
    std::cin >> buffer;
       try
       {
            check = std::stoi(buffer);
            if(check < 1900){
                std::cout << "Incorrect year, try again!" << std::endl;
            }else{
                break;
            }

       }
       catch(const std::exception& e)
       {
           std::cout << "Incorrect type of data, try again!" << std::endl;
       }
       
    }
}