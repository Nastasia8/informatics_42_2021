#include "Pendulum.h"


class MathPendulum: public Pendulum {
private:
    std::string typeOfPendulum = "Math pendulum";
    float length;
public:
    MathPendulum(float);
    void PrintPendulumType() const;
    double GetOscillationPeriod() const;
    double GetCyclicFrequency() const;
};