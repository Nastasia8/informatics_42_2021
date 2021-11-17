// pow(e, x) - 2*(1 - pow(x, 2)) 

#include <iostream>
#include <cmath>
#include <vector>
#include <iomanip>

using namespace std;

int main(){

    //Первый этап

    float a = 0, b = 5, c = 0, fa = 0, fc = 0, productf = 0, x = 0, e = 2.72, fx1 = 0, fx2 = 0, accuracy = 0.0001, steps = 0, sumx = 0, sumy = 0, sumx2 = 0, prodxy = 0, q = 0;
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

    //Аппроксимация

    cout << "Approximation:" << endl;

    for (o = 0; o < 8; o++){

        sumx += X[o];
        sumy += Y[o];
        sumx2 += pow(X[o], 2);
        prodxy += X[o] * Y[o];
        cout << X[o] << setw(10) << Y[o] << setw(10) << X[o] * Y[o] << setw(10) << X[o] * Y[o] << endl;
    }

    b = ((prodxy * sumx - sumx2*sumy) / (sumx * sumx - sumx2 * 8));
    a = ((sumy - b * 8) / sumx);

    cout << "Sum of all x: "<< sumx <<"; Sum off all y: " << sumy << "; Sum of all x^2: " << sumx2 << "; Sum of the product x and y: " << prodxy << endl;

     for(int o = 0; o < 8; o++)
    {
        q += pow((Y[o] - (a * X[o]) - b), 2);
    }

    cout << "The approximated function is equal to: " << q << endl;

    return 0;

}