#include "SpringPendulum.h"

SpringPendulum::SpringPendulum(float m, float k) : m(m), k(k) {};

void SpringPendulum::PrintPendulumType() const {
    std::cout << "Pendulum type is: " << typeOfPendulum << std::endl;
};

double SpringPendulum::GetOscillationPeriod() const {
    return 2 * 3.14 * sqrt(m / k);
};

double SpringPendulum::GetCyclicFrequency() const {
    return sqrt(k / m);
};