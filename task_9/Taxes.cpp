#include <iostream>

class Taxes
{
private:
    std::string type;
public:
    Taxes(std::string input):type(input){};

    virtual float GetTax() = 0;
};

class Car : public Taxes
{
private:
    float power;
    float power_cost;
    float car_cost;
    float incr_coeff;
    int years_release;
    int usage_time;
public:
    Car(float in_p, float in_cc, int in_yr, int in_ut): power(in_p) , car_cost(in_cc) , years_release(in_yr) , usage_time(in_ut) , Taxes("car"){
        if(power > 0){
            if (power > 100){
                if(power > 150){
                    if(power > 200){
                        if(power > 250){
                            power_cost = 15;
                        }
                        power_cost = 7.5;
                    }
                    power_cost = 5;
                }
                power_cost = 3.5;
            }
            power_cost = 2.5;
        }
        if(car_cost < 3 || years_release > 20){
            incr_coeff = 1;
        }else{
            if (car_cost >= 3 && car_cost <= 5){
                if (years_release > 0){
                    if (years_release > 1){
                        if (years_release >= 2 && years_release < 3){
                            incr_coeff = 1.1;
                        }else{incr_coeff = 1;}
                        incr_coeff = 1.3;
                    }
                    incr_coeff = 1.5;
                }
            }
            if (car_cost >= 5 && car_cost <= 10 && years_release <= 5){
                incr_coeff = 2;
            }else{incr_coeff = 1;}
            if (car_cost >= 10 && car_cost <= 15 && years_release <= 10){
                incr_coeff = 3;
            }else{incr_coeff = 1;}
            if (car_cost >= 15 && years_release <= 20){
                incr_coeff = 3;
            }else{incr_coeff = 1;}
        }
    };

    float GetTax(){
        return power * power_cost * usage_time/12.0 * incr_coeff;
    }
};

class Plane : public Taxes
{
private:
    float power;
    float power_cost;
    int usage_time;
    bool reactive;
public:
    Plane(float in_p, bool in_r, int in_ut): power(in_p) , reactive(in_r) , power_cost(25) , usage_time(in_ut) , Taxes("plane"){};

    float GetTax(){
        return power * power_cost * usage_time/12.0;
    }
};

class Bus : public Taxes
{
private:
    float power;
    float power_cost;
    int usage_time;
    bool years_release;
public:
    Bus(float in_p, bool in_yr, int in_ut): power(in_p) , years_release(in_yr) , usage_time(in_ut) , Taxes("bus") {
        if (years_release){
            if(power > 200){
                power_cost = 10;
            }else{
                power_cost = 12.5;
            }
        }else{
            if(power > 200){
                power_cost = 8.4;
            }else{
                power_cost = 11;
            }
        }
    };

    float GetTax(){
        return power * power_cost * usage_time/12.0;
    }
};

class Bike : public Taxes
{
private:
    float power;
    float power_cost;
    int usage_time;
public:
    Bike(float in_p, int in_ut): power(in_p) , usage_time(in_ut) , Taxes("bike") {
            if(power > 0){
                if(power > 20){
                    if(power > 35){
                        power_cost = 5;
                    }
                    power_cost = 2;
                }
                power_cost = 1;
            }
    };

    float GetTax(){
        return power * power_cost * usage_time/12.0;
    }
};

void checkIn(float& check);
void checkIn(int& check);

int main(int argc, char const *argv[]){
    std::string choise;
    std::cout << "Choise which transport u want creat and calculate tax for this:" << std::endl;
    std::cout << "1: Car\n2: Plane\n3: Bus\n4: Bike" << std::endl;
    while (true){
        std::cout << "Enter number of transport: ";
        std::cin >> choise;
        if (choise == "1" || choise == "2" || choise == "3" || choise == "4"){
            break;
        }else{
            std::cout << "Incorrect input! Try again!" << std::endl;
            _flushall();
        }
    }
    
    switch (std::stoi(choise))
    {
    case 1 :
        {   
            float in_p;
            std::cout << "Engine power in horsepower: ";
            checkIn(in_p);
            std::cout << "\n";
            float in_cc;
            std::cout << "Cost of the car in millions: ";
            checkIn(in_cc);
            std::cout << "\n";
            int in_yr;
            std::cout << "How many full years have passed since the release: ";
            checkIn(in_yr);
            std::cout << "\n";
            int in_ut;
            std::cout << "How many months has the transport been used this year: ";
            checkIn(in_ut);
            std::cout << "\n";
            Car my_car(in_p, in_cc, in_yr, in_ut);
            std::cout << "Car was created at the cost of " << in_cc << " m. Power of engine " << in_p << " horsepower" << std::endl;
            std::cout << in_yr << " full mounth passed from release. In this year car used " << in_ut << " mounth." << std::endl;
            std::cout << "Taxed for this transport: " << my_car.GetTax() << " rubles" << std::endl;
        }
        break;
    case 2 :
        {   
            bool in_r;
            float in_p;
            std::string choise_plane;
            while (true){
            std::cout << "A jet-powered plane? Enter yes / no: ";
            std::cin >> choise_plane;
            if (choise_plane == "yes" || choise_plane == "no"){
                break;
            }else{
                std::cout << "Incorrect input! Try again!" << std::endl;
                _flushall();
            }
            }    
            if (choise_plane == "yes"){
                    in_r = 1;
                    std::cout << "Engine power in kilogram-force: ";
                }else{
                    in_r = 0;
                    std::cout << "Engine power in horsepower: ";
                }
            checkIn(in_p);
            std::cout << "\n";
            int in_ut;
            std::cout << "How many months has the transport been used this year: ";
            checkIn(in_ut);
            std::cout << "\n";
            Plane my_plane(in_p, in_r, in_ut);
            std::cout << ((in_r == 0) ? "Plane" : "Jet-powered plane") << "was created with engine with power " << in_p << ((in_r == 0) ? " horsepower" : " kilogram-force") << std::endl;
            std::cout << "In this year plane used " << in_ut << " mounth." << std::endl;
            std::cout << "Taxed for this transport: " << my_plane.GetTax() << " rubles" << std::endl;
        }
        break;
    case 3 :
        {   
            bool in_yr;
            float in_p;
            std::string choise_bus;
            while (true){
            std::cout << "It's been more than 5 years since the release? Enter yes / no: ";
            std::cin >> choise_bus;
            if (choise_bus == "yes" || choise_bus == "no"){
                break;
            }else{
                std::cout << "Incorrect input! Try again!" << std::endl;
                _flushall();
            }
            }
            std::cout << "Engine power in horsepower: ";   
            checkIn(in_p);
            std::cout << "\n";
            int in_ut;
            std::cout << "How many months has the transport been used this year: ";
            checkIn(in_ut);
            std::cout << "\n";
            Bus my_bus(in_p, in_yr, in_ut);
            std::cout << "Bus was created with power of engine " << in_p << " horsepower" << std::endl;
            std::cout << "In this year bus used " << in_ut << " mounth." << std::endl;
            std::cout << "Taxed for this transport: " << my_bus.GetTax() << " rubles" << std::endl;
        }
        break;
    case 4 :
        {   
            float in_p;
            std::cout << "Engine power in horsepower: ";   
            checkIn(in_p);
            std::cout << "\n";
            int in_ut;
            std::cout << "How many months has the transport been used this year: ";
            checkIn(in_ut);
            std::cout << "\n";
            Bike my_bike(in_p, in_ut);
            std::cout << "Bike was created with power of engine " << in_p << " horsepower" << std::endl;
            std::cout << "In this year bus used " << in_ut << " mounth." << std::endl;
            std::cout << "Taxed for this transport: " << my_bike.GetTax() << " rubles" << std::endl;
        }
        break;
    default:
        std::cout << "Something went wrong" << std::endl;
        break;
    }
    
    return 0;
}

void checkIn(float& check){
    std::string buffer;
    while (true){
        std::cin >> buffer;
        try{
            check = std::stof(buffer);
            if(check <= 0){
                std::cout << "Incorrect value, try again!" << std::endl;
            }else{
                break;
            }
        }
        catch(const std::exception& e)
        {
            std::cout << "Incorrect typer of data, try again!" << std::endl;
        }
    }
}
void checkIn(int& check){
    std::string buffer;
    while (true){
        std::cin >> buffer;
        try{
            check = std::stoi(buffer);
            if(check <= 0){
                std::cout << "Incorrect value, try again!" << std::endl;
            }else{
                break;
            }
        }
        catch(const std::exception& e)
        {
            std::cout << "Incorrect typer of data, try again!" << std::endl;
        }
    }
}