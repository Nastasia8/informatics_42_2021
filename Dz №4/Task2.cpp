#include <iostream>
#include <cmath>
#include <locale.h>


using namespace std;

void sum(int I, float P, int n, int m, float summ)
{
    setlocale (LC_ALL,".866");

    cout << "P" <<endl;
    cin >> P;
    cout << "n" <<endl;
    cin >> n;

    if(m < 12)
    {
        summ = P * pow((1 + ((I / 100) / (m / 12))),(m / (12 * n)));
        cout << "summ =" << summ <<endl;
        m = m * 2;
    }
}

int main()
{
    float I = 15;
    float P;
    int n;
    int m = 3;
    float summ = 0;

    sum(I, P, n, m, summ);

    return 0;
}