#include "MathPendulum.h"
#include "Const.h"

MathPendulum::MathPendulum(float length): length(length) {};
void MathPendulum::PrintPendulumType() const {
    std::cout << "Pendulum type is: " << typeOfPendulum << std::endl;
};
double MathPendulum::GetOscillationPeriod() const {
    return (2 * PI * std::sqrt(length / g));
};
double MathPendulum::GetCyclicFrequency() const {
    return (std::sqrt(length / g));
};