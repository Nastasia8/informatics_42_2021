#include <iostream>
#include <cmath>

using namespace std;



void calc(int w, int z, int g)
{
    if (g != 0) {
        int month = z * 12;
        float m = month / g;
        float I = 15;

        int S = (w * (pow((1 + ((I / 100) / (m / 12))), ((m / 12) * z))));
        cout << "sum vklada" << S;
    }
    else {

        cout << "bb" << endl;

    }

}



int main()
{
    int q, c, f;
    cout << "vvedite P,n = ";
    cin >> q >> c;
    cout << "ffffffffff" << endl;
    cout << "1 - 3" << endl;
    cout << "2 - 6" << endl;
    cout << "3 - 12" << endl;
    cin >> f;

    switch (f)
    {
    case 1:
        cout << "1" << endl;
        f = 3;
        break;
    case 2:
        cout << " 2" << endl;
        f = 6;
        break;
    case 3:
        cout << "3" << endl;
        f = 12;
        break;
    default:
        cout << "ne " << endl;
        f = 0;
        break;
    }

    calc(q, c, f);


}