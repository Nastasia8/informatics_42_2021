#include <iostream>
#include <cmath>

using namespace std;

float square_shapes(float);
float square_shapes(float, float);
float square_shapes(float, float, float);
float perimeter_shapes(float);
float perimeter_shapes(float, float);
float perimeter_shapes(float, float, float, float);



int main()
{
    tryAgain:
    const float pi = 3.14159;
    string shape_name;
    cout << "Enter the counting shape :" << endl << "1) circle" << endl << "2) square" << endl << "3) trapezoid" << endl;
    cin >> shape_name;

    if (shape_name == "square" || shape_name == "2")
    {
        float square_side = 0;
        cout << "Square" << endl << "Enter the side:= ";
        cin >> square_side;
        cout << "Square area:= " << square_shapes(square_side) << endl; 
        cout << "Square perimeter:= " << perimeter_shapes(square_side) << endl;
    }
    else if (shape_name == "circle" || shape_name == "1")
    {
        float circle_radius = 0;
        cout << "Circle" << endl << "Enter the radius:= ";
        cin >> circle_radius;
        cout << "Circle area:= " << square_shapes(circle_radius, pi) << endl;
        cout << "Circle perimeter:= " << perimeter_shapes(circle_radius, pi) << endl;
    }

    else if (shape_name == "trapezoid" || shape_name == "3")
    {
        float base_a = 0;
        float base_b = 0;
        float side_a = 0;
        float side_b = 0;
        float height = 0;

        cout << "Trapezoid" << endl << "Enter the base_a:= ";
        cin >> base_a;
        cout << "Enter the base_b:= ";
        cin >> base_b;
        cout << "Enter the side_a:= ";
        cin >> side_a;
        cout << "Enter the side_b:= ";
        cin >> side_b;
        cout << "Enter the height:= ";
        cin >> height;
        cout << endl << "Results" << "Trapezoid area:= " << square_shapes(base_a, base_b, height) << endl;
        cout << "Trapezoid perimeter:= " << perimeter_shapes(base_a, base_b, side_a, side_b) << endl;
    }

    else
    {
        cout << "No search" << endl;
    }
    cout << endl << endl;
    goto tryAgain;
}



//square area
float square_shapes(float side)
{
    return pow(side, 2);
}

//circle area
float square_shapes(float radius, float pi)
{
    return (pow(radius, 2) * pi);
}

//trapezoid area
float square_shapes(float base_a, float base_b, float height)
{
    return ((base_a + base_b) * height) / 2; 
}

//square perimeter
float perimeter_shapes(float side)
{
    return (4 * side);
}

//circle perimeter
float perimeter_shapes(float radius, float pi)
{
    return (2 * radius * pi);
}

//trapezoid perimeter
float perimeter_shapes(float side_1, float side_2, float side_3, float side_4)
{
    return (side_1 + side_2 + side_3 + side_4);
}