#include <cstdlib>
#include <iostream>
#include <math.h>

// Взято с сайта : https://www.cyberforum.ru/cpp-beginners/thread1368338.html


float perimetr(float x, float y, float z)//получает длины оснований и высоту
{
    float p;
    p = x + y + 2 * sqrt(((x - y) / 2) * ((x - y) / 2) + z * z);//суммирует два основания и по теореме пифагора находит боковую поверхность ,тк их две то умножаем на 2
    return p;
}

float ploschad(float x, float y, float z)//получает длины оснований и высоту
{
    float s;
    s = z * ((x + y) / 2);//формула площади трапеции ,полусумма оснований умноженная на высоту
    return s;
}
int main()
{
    setlocale(LC_ALL, "rus");
    float a1, b1, h1, p1, s1, a2, b2, h2, p2, s2;

    printf("Введите два основания и высоту первой трапеции: ");
    scanf_s("%f %f %f", &a1, &b1, &h1);
    printf("Введите два основания и высоту второй трапеции: ");
    scanf_s("%f %f %f", &a2, &b2, &h2);

    p1 = perimetr(a1, b1, h1);
    p2 = perimetr(a2, b2, h2);

    printf("Сумма периметров = %f \n", p1 + p2);

    s1 = ploschad(a1, b1, h1);
    s2 = ploschad(a2, b2, h2);

    printf("Сумма площадей = %f \n", s1 + s2);


    system("PAUSE");
    return EXIT_SUCCESS;
}