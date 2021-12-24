#include <iostream>
#include "Pendulums.h"

int main() {

    MathPendulum mathPendulum(1);
    mathPendulum.PrintPendulumType();
    std::cout << "Oscillation period of math pendulum: " << mathPendulum.GetOscillationPeriod() << std::endl;
    std::cout << "Cyclic frequency of math pendulum: " << mathPendulum.GetCyclicFrequency() << std::endl << std::endl;

    SpringPendulum springPendulum(1, 2);
    springPendulum.PrintPendulumType();
    std::cout << "Oscillation period of springPendulum: " << springPendulum.GetOscillationPeriod() << std::endl;
    std::cout << "Cyclic frequency of springPendulum: " << springPendulum.GetCyclicFrequency() << std::endl << std::endl;

    PhysicalPendulum physicalPendulum(1, 2, 4);
    physicalPendulum.PrintPendulumType();
    std::cout << "Oscillation period of physicalPendulum: " << physicalPendulum.GetOscillationPeriod() << std::endl;
    std::cout << "Cyclic frequency of physicalPendulum: " << physicalPendulum.GetCyclicFrequency() << std::endl;
}