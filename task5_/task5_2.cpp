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
    std::list <float*> values = inputHandler();
    std::list <float> xInSquare;
    std::list <float> xProdY;
    float sumX = 0;
    float sumY = 0;
    float sumXInSquare = 0;
    float sumXProdY = 0;
    auto iter = values.begin();
    while (iter != values.end()) {
        xInSquare.push_back((*iter)[0]*(*iter)[0]);
        xProdY.push_back((*iter)[0]*(*iter)[1]);
        sumX += (*iter)[0];
        sumXInSquare += (*iter)[0]*(*iter)[0];
        sumY += (*iter)[1];
        sumXProdY += (*iter)[1];
        iter++;
    }
    std::cout << sumX << '\n' << sumY << '\n' << sumXProdY << '\n' << sumXInSquare;


    return 0;
}