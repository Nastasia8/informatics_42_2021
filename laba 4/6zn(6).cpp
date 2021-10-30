#include <iostream>

using namespace std;

void zn(int b0, int Pr, int A, int b, int b1, int b2, int b3, int b4, int b5)
{
    b=A%10;
    b0=A/10;

    b1=b0%10;
    b0=b0/10;

    b2=b0%10;
    b0=b0/10;

    b3=b0%10;
    b0=b0/10;

    b4=b0%10;
    b0=b0/10;

    Pr=b*b1*b2*b3*b4*b0;
        cout << "Pr = " << Pr << endl;
}

int main()
{   
    int A;
    int b;
    int b1;
    int b2;
    int b3;
    int b4;
    int b5;
    int Pr=1;
    int b0;

    cout << "white A" << endl;

    cin >> A;

    zn(b0, Pr, A, b, b1, b2, b3, b4, b5);

    return 0;
}
