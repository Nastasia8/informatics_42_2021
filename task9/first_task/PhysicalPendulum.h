#include "Pendulum.h"

class PhysicalPendulum: public Pendulum {
private:
    std::string typeOfPendulum = "Physical pendulum";
    float m, l, I;
public:
    PhysicalPendulum(float m, float l, float I);
    void PrintPendulumType() const;
    double GetOscillationPeriod() const;
    double GetCyclicFrequency() const;
};