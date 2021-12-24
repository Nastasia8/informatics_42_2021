#include "Pendulum.h"

class SpringPendulum: public Pendulum {
private:
    std::string typeOfPendulum = "Spring pendulum";
    float m, k;
public:
    SpringPendulum(float m, float k);
    void PrintPendulumType() const;
    double GetOscillationPeriod() const;
    double GetCyclicFrequency() const;
};