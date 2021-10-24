#include <iostream>
#include <cmath>

class vec3f {
public:
    float x, y, z;
    vec3f(float x, float y, float z): x(x), y(y), z(z) {};
    float length() const {
        return std::sqrt(x*x + y*y + z*z);
    };

    vec3f normalize() const {
        float l = length();
        return vec3f(x / l, y / l, z / l);
    };

    void writeCoords() const {
        std::cout << x << "\t" << y << "\t" << z << std::endl;
    };

    long double operator* (const vec3f & r) const {
        return r.x * x + r.y * y + r.z * z;
    };

    vec3f operator+(const vec3f & r) const {
        return vec3f(y * r.z - r.y * z, -(x * r.z + r.x * z), x * r.y - r.x * y);
    };       

};

int main(int args, char* argv[]) {
    vec3f vector(1, 5, 3);
    std::cout << "Длина вектора (1, 5, 3): " << vector.length() << std::endl << std::endl;

    vec3f normalized_vector = vector.normalize();

    std::cout << "Нормализованный вектор (1, 5, 3)" << std::endl;
    normalized_vector.writeCoords();

    std::cout << std::endl << "Введите новый вектор (x, y, z): ";

    float x, y, z;
    std::cin >> x >> y >> z;

    vec3f new_vector(x, y, z);

    std::cout << std::endl << "Скалярное произведение: " << vector * new_vector << std::endl;
    std::cout << std::endl << "Векторное произведение: " << std::endl; (vector + new_vector).writeCoords();

    return 0;
};