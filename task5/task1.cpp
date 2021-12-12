#include <iostream>

void cube_props(float* cubeSide, float* cubeVolume, float* cubeSurface, float* cubeDiagonal) {
    *cubeVolume = *cubeSide * *cubeSide * *cubeSide;
    *cubeSurface = *cubeSide * *cubeSide * 6;
    *cubeDiagonal = *cubeSide * 1.73;
};

int main(int args, char** argv) {
    float* cubeSide, cubeVolume, cubeSurface, cubeDiagonal;
    *cubeSide = 5;
    cube_props(cubeSide, &cubeVolume, &cubeSurface, &cubeDiagonal);
    std::cout << cubeVolume << std::endl << cubeSurface << std::endl << cubeDiagonal << std::endl; 
    return 0;
}