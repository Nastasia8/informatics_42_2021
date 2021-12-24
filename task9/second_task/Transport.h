#pragma once

class Transport {
private:
    unsigned power;
    double taxRate;
    unsigned cost;
public:
    explicit Transport(unsigned int power, double taxRate, unsigned int cost):
                                    power(power), taxRate(taxRate), cost(cost);
    double getTax() const = 0;
};
