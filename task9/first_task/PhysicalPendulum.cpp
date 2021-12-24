#include "PhysicalPendulum.h"
#include "Const.h"

PhysicalPendulum::PhysicalPendulum(float m, float l, float I) : m(m), l(l), I(I) {};

void PhysicalPendulum::PrintPendulumType() const {
    std::cout << "Pendulum type is: " << typeOfPendulum << std::endl;
};

double PhysicalPendulum::GetOscillationPeriod() const {
    return 2 * 3.14 * sqrt(I / (m * g * l));
};

double PhysicalPendulum::GetCyclicFrequency() const {
    return sqrt((m * g * l) / I);
};