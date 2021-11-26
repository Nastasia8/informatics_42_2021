#include <iostream>
#include <windows.h>
#include <math.h>
using std::cout;
using std::endl;

int main(){
SetConsoleCP(CP_UTF8);
SetConsoleOutputCP(CP_UTF8);

 	float x[8] = {0.5, 0.7, 0.9, 1.1, 1.3, 1.5, 1.7, 1.9};
    float y[8] = {3.150, 3.171, 3.181, 3.179, 3.165, 3.140, 3.105, 3.059};
    int length = sizeof(x)/sizeof(x[0]);
    double Xi = 0;
    double Yi = 0;
    double Xi2 = 0;
    double Xi3 = 0;
    double Xi4 = 0;
    double XiYi = 0;
    double Xi2Yi = 0;

    cout << "xi" << "\t\t" << "yi" << "\t\t" << "xi2" << "\t\t" << "xi3" << "\t\t" << "xi4" << "\t\t" << "xiyi" << "\t\t" << "xi2yi" << endl;
    for(int i = 0; i < length; i++)
    {   
        Xi += x[i];
        Yi += y[i];
        Xi2 += x[i] * x[i];
        XiYi += x[i] * y[i];
        Xi2Yi += x[i] * x[i] * y[i];
        Xi3 += x[i] * x[i] * x[i];
        Xi4 += x[i] * x[i] * x[i] * x[i];

        cout << x[i] << "\t\t" << y[i] << "\t\t" << x[i] * x[i] << "\t\t" << x[i] * x[i] * x[i] << "\t\t" << x[i] * x[i] * x[i] * x[i] << "\t\t" << x[i] * y[i] << "\t\t" << x[i] * x[i] * y[i] << endl;
    }

    cout << "Sum xi" << "\t\t" <<"Sum yi" << "\t\t" << "Sum xi2" << "\t\t" << "Sum xi3" << "\t\t" << "Sum xi4" << "\t\t" << "Sum xiyi" << "\t" << "Sum xi2yi" << endl;
    cout << Xi << "\t\t" << Yi << "\t\t" << Xi2 << "\t\t" << Xi3 << "\t\t" << Xi4 << "\t\t" << XiYi << "\t\t" << Xi2Yi << endl;

    double b = (XiYi * Xi - Xi2*Yi) / (Xi * Xi - Xi2 * length);
    double a = (Yi - b * length) / Xi;
    double delta = (Xi4 * Xi2 * length + Xi3 * Xi * Xi2 + Xi2 * Xi3 * Xi - Xi2 * Xi2 * Xi2 - Xi4 * Xi * Xi - Xi3 * Xi3 * length);
    double delta1 = (Xi2Yi * Xi2 * length + Xi3 * Xi * Yi + Xi2 * XiYi * Xi - Xi2 * Xi2 * Yi - Xi2Yi * Xi * Xi - Xi3 * XiYi * length);
    double delta2 = (Xi4 * XiYi * length + Xi2Yi * Xi * Xi2 + Xi2 * Xi3 * Yi - Xi2 * XiYi * Xi2 - Xi4 * Xi * Yi - Xi2Yi * Xi3 * length);
    double delta3 = (Xi4 * Xi2 * Yi + Xi3 * XiYi * Xi2 + Xi2Yi * Xi3 * Xi - Xi2Yi * Xi2 * Xi2 - Xi4 * XiYi * Xi - Xi3 * Xi3 * Yi);
    double a2 = delta1 / delta;
    double b2 = delta2 / delta;
    double c2 = delta3 / delta;
    double Q = 0;
    double Q2 = 0;
    for(int i = 0; i < length; i++)
    {
        Q += ((y[i] - (a * x[i]) - b) * (y[i] - (a * x[i]) - b));
        Q2 += ((y[i] - a2 * x[i] * x[i] - b2 * x[i] - c2 ) * (y[i] - a2 * x[i] * x[i] - b2 * x[i] - c2 ));
    }
    cout << "Аппроксимировали экспериментальные данные линейной зависимостью  y = " << a << "x + " << b << " c  невязкой Q = " << Q << " и квадратичной зависимостью y = " << a2 << "x2 + " << b2 << "x " << c2 << " c  невязкой Q = " << Q2 << endl;
    return 0;
}