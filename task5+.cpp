// pow(e, x) - 2*(1 - pow(x, 2)) 

#include <iostream>
#include <cmath>
#include <vector>
#include <iomanip>

using namespace std;

int main(){

    //Первый этап

    float a = 0, b = 5, c = 0, fa = 0, fc = 0, productf = 0, x = 0, x2 = 0, x3 = 0, x4 = 0, e = 2.72, fx1 = 0, fx2 = 0, accuracy = 0.0001, steps = 0, sumx = 0, sumy = 0, sumx2 = 0, sumx3 = 0, sumx4 = 0, sumprodxy = 0, sumprodx2y = 0, prodxy = 0, prodx2y = 0, q = 0, Q = 0;
    double D = 0, D1 = 0, D2 = 0, D3 = 0, A = 0, B = 0, C = 0; 
    int o = 0, i = 0;
    float X[8] = {-4.3, -4.0, -3.8, -3.1, -2.1, -0.8, -0.5, 0.4}, Y[8] = {3.421, 2.331, 0.624, -0.963, -1.843, -1.020, 0.114, 2.713};
    vector<float> va, vb, vc, vab, vfa, vfc, vproduct;

    for (x = 0; x < b; x++){

        fx1 = pow(e, x) - 2*(1 - pow(x, 2));
        fx2 = pow(e, (x + 1)) - 2*(1 - pow((x + 1), 2));

        if (fx1 > 0 && fx2 < 0 || fx1 < 0 && fx2 > 0){

            break;

        }

    }

    a = fx1;
    b = fx2;

    //Второй этап

    while (b - a >= accuracy){

        c = (a + b) / 2;
        vc.push_back(c);
        va.push_back(a);
        vb.push_back(b);
        vab.push_back(a - b);
        fa = pow(e, a) - 2*(1 - pow(a, 2));
        fc = pow(e, c) - 2*(1 - pow(c, 2));
        vfa.push_back(fa);
        vfc.push_back(fc);
        productf = fa * fc;
        vproduct.push_back(productf);
        steps += 1;

        if (productf > 0){

            a = c;

        }

        else{

            b = c;

        }
    }

    cout << "a" << setw(15) << "b" << setw(15) << "b - a" << setw(15) << "f(a)" << setw(15) << "f(c)" << setw(15) << "f(a)*f(c)" << endl;

    for (i = 0; i < steps; i++){

        cout << va[i] << setw(15);
        cout << setw(15) << vb[i];
        cout << setw(15) << vc[i];
        cout << setw(15) << vfa[i];
        cout << setw(15) << vfc[i];
        cout << setw(15) << vproduct[i] << endl;
 
    }

    cout << "Steps: " << (steps * 4) << endl;;
    cout << "Root: " << c << endl;

    //Аппроксимация линейная

    cout << "Approximation: " << endl;

    cout << "X" << setw(10) << "Y" << setw(10) << "X^2" << setw(10) << "X^3" << setw(10) << "X^4" << setw(10) << "x*y" << setw(10) << "x^2*y" << endl;

    for (o = 0; o < 8; o++){

        sumx += X[o];
        sumy += Y[o];
        sumx2 += pow(X[o], 2);
        sumx3 += pow(X[o], 3);
        sumx4 += pow(X[o], 4);
        prodxy += X[o] * Y[o];
        prodx2y += pow(X[o], 2) * Y[o];
        cout << X[o] << setw(10) << Y[o] << setw(10) << pow(X[0], 2) << setw(10) << pow(X[0], 3) << setw(10) << pow(X[0], 4) << setw(10) << X[o] * Y[o] << setw(10) << pow(X[o], 2) * Y[o] << endl;
    }

    b = ((prodxy * sumx - sumx2*sumy) / (sumx * sumx - sumx2 * 8));
    a = ((sumy - b * 8) / sumx);

    cout << "Sum of all x: "<< sumx <<"; Sum off all y: " << sumy << "; Sum of all x^2: " << sumx2 << "; Sum of all x^3: "<< sumx3 << "; Sum of all x^4: "<< sumx4 << "; Sum of the product x and y: " << prodxy << "; Sum of the product x^2 and y: " << prodx2y << endl;

     for(int o = 0; o < 8; o++)
    {
        q += pow((Y[o] - (a * X[o]) - b), 2);
    }

    //Аппроксимация квадратная 

    D = ((sumx4 * sumx2 * 8) + (sumx3 * sumx * sumx2 + sumx2 * sumx4 * sumx) - (sumx2 * sumx2 * sumx2 - sumx4 * sumx * sumx) - (sumx3 * sumx3 * 8));
    D1 = ((prodx2y * sumx2 * 8) + (sumx3 * sumx * sumy + sumx2 * prodxy * sumx) - (sumx2 * sumx2 * sumy) - (prodx2y * sumx * sumx) - (sumx3 * prodxy * 8));
    D2 = ((sumx4 * prodxy * 8) + (prodx2y * sumx * sumx2) + (sumx2 * sumx3 * sumy) - (sumx2 * prodxy * sumx2) - (sumx4 * sumx * sumy) - (prodx2y * sumx3 * 8));
    D3 = ((sumx4 * sumx2 * sumy) + (sumx3 * prodxy * sumx2) + (prodx2y * sumx3 * sumx) - (prodx2y * sumx2 * sumx2) - (sumx4 * prodxy * sumx) - (sumx3 * sumx3 * sumy));
    A = D1 / D;
    B = D2 / D;
    C = D3 / D;

    for(int i = 0; i < 8; i++)
    {

        q += pow((Y[i] - (a * X[i]) - a), 2);
        Q += pow((Y[i] - A * X[i] * X[i] - B * X[i] - C),2);

    }

    cout << "linear approximation equation: y = " << a << " x + " << b << "; Q = " << q << "; quadratic approximation equation: y = " << A << "x2 + " << B << "x " << C << "; Q = " << Q << endl;
    
    return 0;

}
