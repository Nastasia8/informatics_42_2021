#pragma once

#include <cmath>
#include <string>
#include <iostream>

class Pendulum {
private:
    std::string typeOfPendulum;
public:
    virtual double GetCyclicFrequency() const = 0;

    virtual double GetOscillationPeriod() const = 0;

    virtual void PrintPendulumType() const = 0;
};