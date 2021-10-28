#include <iostream>
#include <cmath>

using namespace std;

float summa(float I, float P, float n, float m1)
{
    return  P * pow((1 + (I/100)/(m1/12)),(m1/12*n));
}

int main()
{
    float I = 15;
    float P;
    float n;
    int expression;

    cout << "P" <<endl;
    cin >> P;
    cout << "n" <<endl;
    cin >> n;
    cout << "selekt 12 or 6 or 3"<<endl;
    cin >> expression;
    switch (expression)
    {
        case 12:
            cout << summa(I, P, n, 12.0) <<endl;
            break;
        case 6:
            cout << summa(I, P, n, 6.0) <<endl;
            break;
        case 3:
            cout << summa(I, P, n, 3.0)  <<endl;
            break;
        default:
            cout << "not" <<endl;
            break;
    }
    return 0;
}