#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float x[8] = {2.0, 2.1, 2.2, 2.3, 2.4, 2.5, 2.6, 2.7};
    float y[8] = {1.045, 1.162, 1.264, 1.172, 1.070, 0.898, 0.656, 0.344};
    int length = sizeof(x)/sizeof(x[0]);
    float xi = 0;
    float yi = 0;
    float xi2 = 0;
    float xiyi = 0;
    float Q = 0;
    cout << "xi" << "\t" << "yi" << "\t" << "xi2" << "\t" << "xiyi" << endl;
    for(int i = 0; i < length; i++)
    {   
        xi += x[i];
        yi += y[i];
        xi2 += x[i] * x[i];
        xiyi += x[i] * y[i];  
        cout << x[i] << "\t" << y[i] << "\t" << x[i] * x[i] << "\t" << x[i] * y[i] << endl;
    }
    cout << "Sum xi" << "\t" <<"Sum yi" << "\t" << "Sum xi2" << "\t" << "Sum xiyi" << endl;
    cout << xi << "\t" << yi << "\t" << xi2 << "\t" << xiyi << endl;
    float b = (xiyi * xi - xi2*yi) / (xi * xi - xi2 * length);
    float a = (yi - b * length) / xi;
    for(int i = 0; i < length; i++)
    {
        Q += pow((y[i] - (a * x[i]) - b), 2);
    }

    cout << "Approksimirovali eksperimental'nye dannye linejnoj zavisimost'yu  y = " << a << "x + " << b << " c nevyazkoj Q = " << Q << endl;
    return 0;
}