#include <iostream>
#include <cmath>
#include <string>

using namespace std;

class Pendulum{

    public:

    virtual void Frequency() =0;
    virtual void Period() =0;
    virtual void ShowType() =0;
};

class PendulumPhisique : public Pendulum{

    public:

    float length, weight, I;
    string Type;

    PendulumPhisique(){
        length = 0;
        weight = 0;
        I = 0;
        Type = "Phisique";
    }
    PendulumPhisique(float length, float weight, float I){
        this->length = length;
        this->weight = weight;
        this->I = I;
        Type = "Phisique";
    }

    void Period() {
        float period;
        period = (2*3.14)*(sqrt(I/weight*9.8*length));
        cout << "Period: " << period << endl;
    }
    void Frequency() {
        float frequency;
        frequency = (sqrt((weight*9.8*length)/I));
        cout << "Frequency: " << frequency << endl;
    }
    void ShowType() {
        cout << "Phisique" << endl;
    }
};

class PendulumMath : public Pendulum{

    public:

    float length, weight;
    string Type;

    PendulumMath(){
        length = 0;
        weight = 0;
        Type = "Math";
    }
    PendulumMath(float length, float weight){
        this->length = length;
        this->weight = weight;
    }
    void Period() override{
        float period;
        period = (2*3.14)*(sqrt((length/9.8)));
        cout << "Period: " << period << endl;
    }
    void Frequency() override{
        float frequency;
        frequency = sqrt(9.8/length);
        cout << "Frequency: " << frequency << endl;;
    }
    void ShowType() override{
        cout << "Math" << endl;
    }
};

class PendulumSpring : public Pendulum{

    public:

    float length, rigidity, weight;
    string Type;

    PendulumSpring(){
        length = 0;
        weight = 0;
        rigidity = 0;
        Type = "Spring";
    }
    PendulumSpring(float length, float rigidity, float weight){
        this->length = length;
        this->weight = weight;
        this->rigidity = rigidity;
    }
    void Period() {
        float period;
        period = (2*3.14)*(sqrt(weight/rigidity));
        cout << "Period: " << period << endl;
    }
    void Frequency() {
        float frequency;
        frequency = sqrt(rigidity/weight);
        cout << "Frequency: " << frequency << endl;
    }
    void ShowType() {
        cout << "Spring" << endl;
    }
};

main(){
    float length, rigidity, weight, I;
    cout << "Enter values" << endl;
    cout << "Length: ";
    cin >> length;
    cout << "Weight: ";
    cin >> weight;
    cout << "Rigidity: ";
    cin >> rigidity;
    cout << "I: ";
    cin >> I;

    
    PendulumPhisique pendulum1(length, weight, I);
    pendulum1.ShowType();
    pendulum1.Period();
    pendulum1.Frequency();

    PendulumMath pendulum2(length, weight);
    pendulum2.ShowType();
    pendulum2.Period();
    pendulum2.Frequency();

    PendulumSpring pendulum3(length, rigidity, weight);
    pendulum3.ShowType();
    pendulum3.Period();
    pendulum3.Frequency();

    return 0;
}