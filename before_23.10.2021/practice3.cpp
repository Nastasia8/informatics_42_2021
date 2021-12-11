#include <iostream>
#include <cmath>

using namespace std;

#define PI 3.14

int s(int side);
int perimeter(int side);
double circle_s(int radius);
double circle_perimeter(int radius);
double perimeter(int side1, int side2, int side3, int side4);
double s(int base1, int base2, int height);

int main(void)
{
	int side, radius;
	int side1, side2, side3, side4;
	int base1, base2, height;
	cout << "Enter the side of the square"<< endl;
	cin >> side;
	cout << "The area of the square is equal to " << s(side) << endl;
	cout << "The perimeter of the square is equal to " << perimeter(side) << endl;
	cout << "____________________________" << endl;
	cout << "Enter the radius"<< endl;
	cin >> radius;
	cout << "The area of the circle is equal to " << circle_s(radius) << endl;
	cout << "The perimeter of the circle is equal to " << circle_perimeter(radius) << endl;
	cout << "____________________________" << endl;
	cout << "Enter the sides of the trapezoid" << endl;
	cin >> side1 >> side2 >> side3 >> side4;
	cout << "The perimeter of the trapezoid is equal to " << perimeter(side1, side2, side3, side4) << endl;
	cout << "Enter the two trapezoid bases" << endl;
	cin >> base1 >> base2;
	cout << "Enter the height of the trapezoid" << endl;
	cin >> height;
	cout << "The are of the trapezoid is equal to " << s(base1, base2, height) << endl;
	
	

	
	
	return 0;
}


double s(int base1, int base2, int height)
{
	return 0.5 * (base1 + base2) * height;
}


int s(int side)
{
	return side * side;
}


double perimeter(int side1, int side2, int side3, int side4)
{
	return side1 + side2 + side3 + side4;
}


double circle_s(int radius)
{
	return pow(radius, 2.0) * PI;
}


double circle_perimeter(int radius)
{
	return 2 * radius * PI;
}


int perimeter(int side)
{
	return side * 4;
}
