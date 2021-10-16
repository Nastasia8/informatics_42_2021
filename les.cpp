#include <iostream>
#include <cmath>

using namespace std;

int square (int height, int width)
{
    return height * width;
}
int square (int radius, float Pi)
{
    return Pi * radius;
}
int square (int first_foun, int second_foun, int height)
{
    return first_foun * second_foun * height * 0.5;
}

int perimitre ( int width)
{
    return 4 * width;
}
int perimitre (int radius, float Pi)
{
    return 2 * Pi * radius;
}
int perimitre (int first_foun, int second_foun, int side_one, int side_two)
{
    return first_foun + second_foun + side_two + side_one;
}

int main()
{
    const float Pi = 3.14;
    int height, width, radius, first_foun, second_foun, side_one, side_two;
    cin >> height;
    cin >> width;
    cin >> radius;
    cin >> first_foun;
    cin >> second_foun;
    cin >> side_one;
    cin >> side_two;

    cout << "square = " << square (height, width) <<endl;
    cout << "square = " << square (radius, Pi) <<endl;
    cout << "square = " << square (first_foun, second_foun, height) <<endl;
    cout << "perimitre = " << perimitre (width) <<endl;
    cout << "perimitre = " << perimitre (radius, Pi) <<endl;
    cout << "perimitre = " << perimitre (first_foun, second_foun, side_one, side_two) <<endl;

return 0;
}