#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    float x[8] = {2.0, 2.1, 2.2, 2.3, 2.4, 2.5, 2.6, 2.7};
    float y[8] = {1.045, 1.162, 1.264, 1.172, 1.070, 0.898, 0.656, 0.344};
    int length = sizeof(x)/sizeof(x[0]);
    double xi = 0;
    double yi = 0;
    double xi2 = 0;
    double xiyi = 0;
    double xi3 = 0;
    double xi4 = 0;
    double xi2yi = 0;
    double linQ = 0;
    double quadroQ = 0;
    cout << "xi" << "\t" << "yi" << "\t" << "xi2" << "\t" << "xi3" << "\t" << "xi4" << "\t" << "xiyi" << "\t" << "xi2yi" << endl;
    for(int i = 0; i < length; i++)
    {   
        xi += x[i];
        yi += y[i];
        xi2 += x[i] * x[i];
        xiyi += x[i] * y[i];
        xi2yi += x[i] * x[i] * y[i];
        xi3 += x[i] * x[i] * x[i];
        xi4 += x[i] * x[i] * x[i] * x[i];

        cout << x[i] << "\t" << y[i] << "\t" << x[i] * x[i] << "\t" << x[i] * x[i] * x[i] << "\t" << x[i] * x[i] * x[i] * x[i] << "\t" << x[i] * y[i] << "\t" << x[i] * x[i] * y[i] << endl;
    }
    cout << "Sum xi" << "\t" <<"Sum yi" << "\t" << "Sum xi2" << "\t" << "Sum xi3" << "\t" << "Sum xi4" << "\t" << "Sum xiyi" << "\t" << "Sum xi2yi" << endl;
    cout << xi << "\t" << yi << "\t" << xi2 << "\t" << xi3 << "\t" << xi4 << "\t" << xiyi << "\t" << xi2yi << endl;
    double linb = (xiyi * xi - xi2*yi) / (xi * xi - xi2 * length);
    double lina = (yi - linb * length) / xi;
    double delta = (xi4 * xi2 * length + xi3 * xi * xi2 + xi2 * xi3 * xi - xi2 * xi2 * xi2 - xi4 * xi * xi - xi3 * xi3 * length);
    double deltaOne = (xi2yi * xi2 * length + xi3 * xi * yi + xi2 * xiyi * xi - xi2 * xi2 * yi - xi2yi * xi * xi - xi3 * xiyi * length);
    double deltaTwo = (xi4 * xiyi * length + xi2yi * xi * xi2 + xi2 * xi3 * yi - xi2 * xiyi * xi2 - xi4 * xi * yi - xi2yi * xi3 * length);
    double deltaThree = (xi4 * xi2 * yi + xi3 * xiyi * xi2 + xi2yi * xi3 * xi - xi2yi * xi2 * xi2 - xi4 * xiyi * xi - xi3 * xi3 * yi);
    double quadroa = deltaOne / delta;
    double quadrob = deltaTwo / delta;
    double quadroc = deltaThree / delta;
    for(int i = 0; i < length; i++)
    {
        linQ += pow((y[i] - (lina * x[i]) - linb), 2);
        quadroQ += pow((y[i] - quadroa * x[i] * x[i] - quadrob * x[i] - quadroc),2);
    }

    cout << "Approksimirovali eksperimental'nye dannye linejnoj zavisimost'yu  y = " << lina << "x + " << linb << " c nevyazkoj Q = " << linQ << " i kvadratichnoj zavisimost'yu y = " << quadroa << "x2 + " << quadrob << "x " << quadroc << " c  nevyazkoj Q = " << quadroQ << endl;
    return 0;
}