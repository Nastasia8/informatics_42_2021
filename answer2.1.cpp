#include <iostream>
#include <math.h>

using namespace std;

double length(double x, double y, double z);

int main(){

    int x = 1;
    int y = 5;
    int z = 3;

    cout << "Length vector - " << length(x, y, z) << endl;

    double unitvector[3] = {x / length(x, y, z), y / length(x, y, z), z / length(x, y, z)};

    cout << "Coordinates of the unit vektor - x: " << unitvector[0] << " y: " << unitvector[1] << " z: " << unitvector[2] << endl;

    cout << "Insert coordinates" << endl;

    double X = 0;
    double Y = 0;
    double Z = 0;

    cout << "X: ";

    cin >> X; 

    cout << "Y: ";

    cin >> Y; 

    cout << "Z: ";

    cin >> Z; 

    cout << "Scalar product - " << (x * X + Y * y + Z * z) << endl;

    cout << "Vectors product - x: " << (y * Z - z * Y) << " y: " << (x * Z - X * z) << " z: " << (x * Y - y * X) << endl;

return 0;
}

//Calculating length of the vector
double length(double x, double y, double z){

    double length;

    length = (sqrt(pow(x, 2) + pow(y, 2) + pow(z, 2)));

return length;
}


