#include <iostream>
#include <string>
#include <map>
#include <list>

std::list<float*> inputHandler() {
    std::list <float*> data;
    std::cout << "How much pairs of values will you input?";
    int valuesNumber;
    std::cin >> valuesNumber;
    float x, y;
    for (int i = 0; i < valuesNumber; i++) {
        std::cout << "X" << i << " = ";
        std::cin >> x;
        std::cout << "Y" << i << " = ";
        std::cin >> y;
        float* pair = new float[2];
        pair[0] = x;
        pair[1] = y;
        data.push_back(pair);
    }
    return data;
}

int main(int agrs, char** argv) {
    std::list <float*> data = inputHandler();
    auto iter = data.begin();
    while (iter != data.end()) {
        std::cout << (*iter)[0] << std::endl << (*iter)[1] << std::endl;
        iter++;
    }

    return 0;
}