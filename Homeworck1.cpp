// Homeworck.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы

#include <iostream>
#include <cmath>
using namespace std;


float VectorLength(int x, int y, int z)
{
    return sqrt(x * x + y * y + z * z);
}
void SingleVector(int x, int y, int z, float length)
{
    cout << x / length << " " << y / length << " " << z / length << endl;

}
float ScalarProduct(int x, int a, int y, int b, int z, int c)
{
    return x * a + y * b + z * c;
}
void VectorProduct(int x, int a, int y, int b, int z, int c)
{
    cout << y * c - z * b << " " << -1 * (x * c - z * a) << " " << x * b - y * a << endl;
}
int main(int args, char* argv[])
{
    int x = 1;
    int y = 5;
    int z = 3;
    int a, b, c;

    cout << "1.1" << endl;
    float length = VectorLength(x, y, z);

    cout << "Vector Length = " << length << endl;

    cout << "1.3" << endl;

    cin >> a >> b >> c;

    cout << ScalarProduct(x, a, y, b, z, c) << endl;

    cout << "1.4" << endl;

    VectorProduct(x, y, z, a, b, c);


    return 0;
};

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
