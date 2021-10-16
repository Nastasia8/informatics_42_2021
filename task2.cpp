#include <iostream>
#include <cmath>

namespace area {
    void calculateCircleArea() {
        std::cout << "Какие данные у вас есть о круге?" << std::endl
                  << "Радиус - 1" << std::endl << "Диаметр - 2"
                  << std::endl << "Периметр - 3" << std::endl;
        char flag;
        std::cin >> flag;
        
        float data;
        switch (flag)
        {
        case '1':
            std::cin >> data;
            std::cout << "Площадь круга = " << 3.14 * (data * data) << std::endl;
            break;

        case '2':
            std::cin >> data;
            std::cout << "Площадь круга = " << (3.14 * (data * data)) / 4 << std::endl;
            break;

        case '3':
            std::cin >> data;
            std::cout << "Площадь круга = " << (data * data) / (4 * 3.14) << std::endl;
            break;
        
        default:
            break;
        }
    };
    void calculateSquareArea() {
        std::cout << "Какие данные у вас есть о квадрате" << std::endl
                  << "Сторона - 1" << std::endl << "Диагональ - 2" << std::endl;
        char flag;
        std::cin >> flag;
        float data;
        switch (flag)
        {
        case '1':
            std::cin >> data;
            std::cout << "Площадь квадрата = " << data * data << std::endl;
            break;

        case '2':
            std::cin >> data;
            std::cout << "Площадь квадрата = " << (data * data) * 0.5 << std::endl;
            break;
        
        default:
            break;
        }
    };
    void calculateTrapezoidArea() {
        std::cout << "Введите основания трапеции и высоту" << std::endl;
        float a, b, h;
        std::cin >> a >> b >> h;
        std::cout << "Площадь трапеции = " << 0.5*(a + b)*h << std::endl;
    };
};

int main(int args, char* argv[]) {
    std::cout << "Площадь какой фигуры вы хотите посчитать? (введите необходимую цифру)" 
              << std::endl << "Круга - 1" << std::endl << "Квадрата - 2" << std::endl
              << "Трапеции - 3" << std::endl;
    char flag;
    std::cin >> flag;
    switch (flag)
    {
    case '1':
        area::calculateCircleArea();
        break;
    case '2':
        area::calculateSquareArea();
        break;
    case '3':
        area::calculateTrapezoidArea();
        break;
    default:
        std::cout << "Введите корректное значение";
        break;
    }
     return 0;
}