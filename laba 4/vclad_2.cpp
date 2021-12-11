#include <iostream>
#include <cmath>

using namespace std;

int main()
{   float S=0;
    float P;
    float n;
    int m; //все дело в типе данных
    float I=15;

    cout << "white P, n" << endl;
    cin >> P;
    cin >> n;

    cout << "white m: 12 or 6 or 3" << endl;
    cin >> m;
        if (m==12 || m==6 || m==3)
            {
                S=P*pow(1+(I/100)/(m/100), (m/12*n));
                cout << "S = " << S << endl;
            }
        else
            { //пока закомментировала
                 cout << "white repeat value m: 12 or 6 or 3" << endl;
                 cin >> m;
                 S=P*pow(1+(I/100)/(m/100), m/(12*n));
                 cout << "S = " << S << endl;
            }

    return 0;
}


